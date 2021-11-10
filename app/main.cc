#include "systemc.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include <vector>
#include <iomanip>

#include "flex.h"
#include "SM6Spec.h"
// #include "AdpfloatUtils.h"
#include "AdpfloatSpec.h"

#include "nlohmann/json.hpp"
#define FMT_HEADER_ONLY
#include "fmt/format.h"
using json = nlohmann::json;

std::string input_file_path;
std::string output_file_path;

// source module of the testbench
// creating signals for flex model
SC_MODULE(Source) {
  sc_in<bool> clk{"clk"};
  //sc_in<bool> rst;
  
  sc_out< sc_biguint<1> > flex_wr_in;
  sc_out< sc_biguint<1> > flex_rd_in;
  sc_out< sc_biguint<32> > flex_addr_in;
  sc_out< sc_biguint<8> > flex_data_in[16];

  sc_out< sc_biguint<1> > input_done;

//  void source_input();
  SC_CTOR(Source) {
    SC_THREAD(source_input);
    sensitive << clk.pos();
    //reset_signal_is(rst, true);
  }

  void source_input() {
    // reset
    flex_wr_in = 0;
    flex_rd_in = 0;
    flex_addr_in = "0x0";
    for (int i = 0; i < 16; i++) {
      flex_data_in[i] = "0x0";
    }

    input_done = 0;

    wait(10, SC_NS);

    std::ifstream fin;
    std::string mode, addr, data;
    std::string data_format;
    std::string temp;
    std::string hex_hdr = "0x";
    std::string addr_format;
    
    const char *addr_c;
    const char *data_byte_c;

    wait(10, SC_NS);

    fin.open(input_file_path, ios::in);
    json cmd_seq;
    fin >> cmd_seq;

    for (int i = 0; i < cmd_seq["program fragment"].size(); i++) {
      mode = cmd_seq["program fragment"][i]["mode"].get<std::string>();
      addr = cmd_seq["program fragment"][i]["addr"].get<std::string>();
      data = cmd_seq["program fragment"][i]["data"].get<std::string>();

       // set the WR/RD mode
      if (mode.compare("W") == 0) {
        flex_wr_in = 1;
        flex_rd_in = 0;
      } else {
        flex_wr_in = 0;
        flex_rd_in = 1;
      }

      addr_c = addr.c_str();
      flex_addr_in = addr_c;

      // remove the possible '\r' at the end of the line
      if(int(data[data.size()-1]) == 13) {
        data = data.substr(0, data.size()-1);
      }
      // extract the data
      data_format.clear();
      if (data.length() <= 34) {
        data_format.append(34 - data.length(), '0');
        data_format.append(data.substr(2));
      } else {
        data_format.append(data.substr(data.length()-32));
      }

      std::string data_byte;
      for (int i = 0; i<16; i++) {
        data_byte = data_format.substr(30-2*i, 2);
        data_byte_c = ("0x0" + data_byte).c_str();
        int data_int = stoi(data_byte, nullptr, 16);
        flex_data_in[i] = data_int;
      }
      //cout << endl;

      wait(10, SC_NS);
    }

    input_done = 1;

  }
};

SC_MODULE(testbench) {
  SC_HAS_PROCESS(testbench);
  flex flex_i;
  Source src;

  sc_clock clk;
  sc_signal< sc_biguint<1> > flex_wr_signal;
  sc_signal< sc_biguint<1> > flex_rd_signal;
  sc_signal< sc_biguint<32> > flex_addr_signal;
  sc_signal< sc_biguint<8> > flex_data_signal[16];

  sc_signal< sc_biguint<1> > input_done;

  testbench(sc_module_name name)
  : sc_module(name),
    clk("clk", 1, SC_NS),
    src("source"),
    flex_i("flexnlp")
  {
    // binding the signals from the source
    src.clk(clk);
    src.flex_wr_in(flex_wr_signal);
    src.flex_rd_in(flex_rd_signal);
    src.flex_addr_in(flex_addr_signal);
    for (int i = 0; i < 16; i++) {
      src.flex_data_in[i](flex_data_signal[i]);
    }

    src.input_done(input_done);

    // binding the signals for the model
    flex_i.flex_if_axi_rd_in(flex_rd_signal);
    flex_i.flex_if_axi_wr_in(flex_wr_signal);
    flex_i.flex_addr_in_in(flex_addr_signal);
    flex_i.flex_data_in_0_in(flex_data_signal[0]);
    flex_i.flex_data_in_1_in(flex_data_signal[1]);
    flex_i.flex_data_in_2_in(flex_data_signal[2]);
    flex_i.flex_data_in_3_in(flex_data_signal[3]);
    flex_i.flex_data_in_4_in(flex_data_signal[4]);
    flex_i.flex_data_in_5_in(flex_data_signal[5]);
    flex_i.flex_data_in_6_in(flex_data_signal[6]);
    flex_i.flex_data_in_7_in(flex_data_signal[7]);
    flex_i.flex_data_in_8_in(flex_data_signal[8]);
    flex_i.flex_data_in_9_in(flex_data_signal[9]);
    flex_i.flex_data_in_10_in(flex_data_signal[10]);
    flex_i.flex_data_in_11_in(flex_data_signal[11]);
    flex_i.flex_data_in_12_in(flex_data_signal[12]);
    flex_i.flex_data_in_13_in(flex_data_signal[13]);
    flex_i.flex_data_in_14_in(flex_data_signal[14]);
    flex_i.flex_data_in_15_in(flex_data_signal[15]);

    flex_i.instr_log;

    SC_THREAD(run);
  }

  float convert_to_float(sc_biguint<8> raw_data, sc_biguint<8> raw_bias) {
    spec::ScalarType in = raw_data.to_uint();
    spec::AdpfloatBiasType bias = raw_bias.to_uint(); 
    spec::ActScalarType out_tmp;
    AdpfloatType<spec::kAdpfloatWordWidth, spec::kAdpfloatExpWidth> adp_data(in);
    return adp_data.to_float(bias);
  }

  void run() {
    int i = 0;
    std::ofstream fout;
    fout.open(output_file_path, ofstream::out | ofstream::trunc);
    flex_i.instr_log.open("instr.log", ofstream::out | ofstream::trunc);
    flex_i.instr_update_log.open("instr_update.log", ios::out | ios::trunc);
    
    wait(10, SC_NS);
    std::cout << "@" << sc_time_stamp() << " ********* simulation start *********" << std::endl;
    wait(10, SC_NS);

    while (input_done == 0) {
      cout << "current simulation time: " << sc_time_stamp() << "\r" << std::flush;
      wait(10, SC_NS);
    }

    flex_i.instr_log.close();
    

    json v_result;
    std::stringstream v_data_ss;
    for (auto it = flex_i.flex_VIR_OUTPUT_MEM.rbegin(); 
         it != flex_i.flex_VIR_OUTPUT_MEM.rend(); ++it) 
    {
      if (it->first.to_uint() % 16 == 15) {
        v_data_ss << "0x";
      }
      v_data_ss << fmt::format("{:02X}", it->second.to_uint());
      if (it->first.to_uint() % 16 == 0) {
        v_result[fmt::format("0x{:08X}", it->first.to_uint())] = v_data_ss.str();
        v_data_ss.str("");
      }
    }
    fout << std::setw(2) << v_result;
    fout.close();

    wait(10000, SC_NS);
    std::cout << "@" << sc_time_stamp() << " *********     sc_stop      *********" << std::endl;
    sc_stop();
  }
};

int sc_main(int argc, char *argv[]) {
  if (argc < 3) {
    std::cout << "Usage: ./asm_sim_driver [input_path] [output_path]" << std::endl;
    return 1;
  }
  testbench tb("tb");

  input_file_path = argv[1];
  output_file_path = argv[2];

  sc_start();
  return 0;
}

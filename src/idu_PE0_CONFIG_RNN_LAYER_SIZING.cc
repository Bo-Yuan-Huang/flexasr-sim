#include <flex.h>
bool flex::decode_flex_PE0_CONFIG_RNN_LAYER_SIZING() {
sc_biguint<1> local_var_2 = ~flex_if_axi_rd;
sc_biguint<1> local_var_3 = (flex_if_axi_wr & local_var_2);
sc_biguint<1> local_var_4 = 1;
bool local_var_5 = (local_var_3 == local_var_4);
sc_biguint<32> local_var_7 = 876609552;
bool local_var_8 = (flex_addr_in == local_var_7);
bool local_var_9 = (local_var_5 & local_var_8);
auto& univ_var_834 = local_var_9;
return univ_var_834;
}
void flex::update_flex_PE0_CONFIG_RNN_LAYER_SIZING() {
auto local_var_1 = flex_data_in_3.range(0, 0);
auto local_var_1_nxt_holder = local_var_1;
auto local_var_3 = flex_data_in_2.range(0, 0);
auto local_var_3_nxt_holder = local_var_3;
auto local_var_5 = flex_data_in_0.range(0, 0);
auto local_var_5_nxt_holder = local_var_5;
auto local_var_7 = flex_data_in_1.range(0, 0);
auto local_var_7_nxt_holder = local_var_7;
auto local_var_9 = flex_data_in_4.range(3, 0);
auto local_var_9_nxt_holder = local_var_9;
auto flex_data_in_5_nxt_holder = flex_data_in_5;
flex_pe0_rnn_layer_sizing_is_bias = local_var_1_nxt_holder;
flex_pe0_rnn_layer_sizing_is_cluster = local_var_3_nxt_holder;
flex_pe0_rnn_layer_sizing_is_valid = local_var_5_nxt_holder;
flex_pe0_rnn_layer_sizing_is_zero_first = local_var_7_nxt_holder;
flex_pe0_rnn_layer_sizing_num_manager = local_var_9_nxt_holder;
flex_pe0_rnn_layer_sizing_num_output = flex_data_in_5_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE0_CONFIG_RNN_LAYER_SIZING state updates:" << std::endl;
instr_update_log << "    flex_pe0_rnn_layer_sizing_is_bias => " << std::hex << "0x" << flex_pe0_rnn_layer_sizing_is_bias << std::endl; 
instr_update_log << "    flex_pe0_rnn_layer_sizing_is_cluster => " << std::hex << "0x" << flex_pe0_rnn_layer_sizing_is_cluster << std::endl; 
instr_update_log << "    flex_pe0_rnn_layer_sizing_is_valid => " << std::hex << "0x" << flex_pe0_rnn_layer_sizing_is_valid << std::endl; 
instr_update_log << "    flex_pe0_rnn_layer_sizing_is_zero_first => " << std::hex << "0x" << flex_pe0_rnn_layer_sizing_is_zero_first << std::endl; 
instr_update_log << "    flex_pe0_rnn_layer_sizing_num_manager => " << std::hex << "0x" << flex_pe0_rnn_layer_sizing_num_manager << std::endl; 
instr_update_log << "    flex_pe0_rnn_layer_sizing_num_output => " << std::hex << "0x" << flex_pe0_rnn_layer_sizing_num_output << std::endl; 
instr_update_log << std::endl;
#endif
}

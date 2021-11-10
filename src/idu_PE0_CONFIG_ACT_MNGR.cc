#include <flex.h>
bool flex::decode_flex_PE0_CONFIG_ACT_MNGR() {
sc_biguint<1> local_var_2 = ~flex_if_axi_rd;
sc_biguint<1> local_var_3 = (flex_if_axi_wr & local_var_2);
sc_biguint<1> local_var_4 = 1;
bool local_var_5 = (local_var_3 == local_var_4);
sc_biguint<32> local_var_7 = 880803856;
bool local_var_8 = (flex_addr_in == local_var_7);
bool local_var_9 = (local_var_5 & local_var_8);
auto& univ_var_818 = local_var_9;
return univ_var_818;
}
void flex::update_flex_PE0_CONFIG_ACT_MNGR() {
auto local_var_1 = flex_data_in_2.range(2, 0);
auto local_var_1_nxt_holder = local_var_1;
univ_var_819 = (sc_biguint<8>(flex_data_in_7), sc_biguint<8>(flex_data_in_6));
auto univ_var_819_nxt_holder = univ_var_819;
auto local_var_6 = flex_data_in_0.range(0, 0);
auto local_var_6_nxt_holder = local_var_6;
auto local_var_8 = flex_data_in_1.range(0, 0);
auto local_var_8_nxt_holder = local_var_8;
auto local_var_10 = flex_data_in_3.range(5, 0);
auto local_var_10_nxt_holder = local_var_10;
auto flex_data_in_4_nxt_holder = flex_data_in_4;
auto flex_data_in_8_nxt_holder = flex_data_in_8;
flex_pe0_act_mngr_adpfloat_bias = local_var_1_nxt_holder;
flex_pe0_act_mngr_buffer_addr_base = univ_var_819_nxt_holder;
flex_pe0_act_mngr_is_valid = local_var_6_nxt_holder;
flex_pe0_act_mngr_is_zero_first = local_var_8_nxt_holder;
flex_pe0_act_mngr_num_inst = local_var_10_nxt_holder;
flex_pe0_act_mngr_num_output = flex_data_in_4_nxt_holder;
flex_pe0_act_mngr_output_addr_base = flex_data_in_8_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE0_CONFIG_ACT_MNGR state updates:" << std::endl;
instr_update_log << "    flex_pe0_act_mngr_adpfloat_bias => " << std::hex << "0x" << flex_pe0_act_mngr_adpfloat_bias << std::endl; 
instr_update_log << "    flex_pe0_act_mngr_buffer_addr_base => " << std::hex << "0x" << flex_pe0_act_mngr_buffer_addr_base << std::endl; 
instr_update_log << "    flex_pe0_act_mngr_is_valid => " << std::hex << "0x" << flex_pe0_act_mngr_is_valid << std::endl; 
instr_update_log << "    flex_pe0_act_mngr_is_zero_first => " << std::hex << "0x" << flex_pe0_act_mngr_is_zero_first << std::endl; 
instr_update_log << "    flex_pe0_act_mngr_num_inst => " << std::hex << "0x" << flex_pe0_act_mngr_num_inst << std::endl; 
instr_update_log << "    flex_pe0_act_mngr_num_output => " << std::hex << "0x" << flex_pe0_act_mngr_num_output << std::endl; 
instr_update_log << "    flex_pe0_act_mngr_output_addr_base => " << std::hex << "0x" << flex_pe0_act_mngr_output_addr_base << std::endl; 
instr_update_log << std::endl;
#endif
}

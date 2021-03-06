#include <flex.h>
bool flex::decode_PE0_ACT_CHILD_PE0_act_child_op_inpe() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE0_ACT_CHILD_pe0_act_is_start_reg == local_var_1);
sc_biguint<3> local_var_4 = 1;
bool local_var_5 = (PE0_ACT_CHILD_pe0_act_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<4> local_var_8 = 3;
bool local_var_9 = (PE0_ACT_CHILD_pe0_act_op == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
sc_biguint<1> local_var_12 = 1;
bool local_var_13 = (flex_pe0_act_reg_port_valid == local_var_12);
bool local_var_14 = (local_var_10 & local_var_13);
auto& univ_var_186 = local_var_14;
return univ_var_186;
}
void flex::update_PE0_ACT_CHILD_PE0_act_child_op_inpe() {
auto flex_PE0_core_act_vector_0_nxt_holder = flex_PE0_core_act_vector_0;
auto flex_PE0_core_act_vector_1_nxt_holder = flex_PE0_core_act_vector_1;
auto flex_PE0_core_act_vector_10_nxt_holder = flex_PE0_core_act_vector_10;
auto flex_PE0_core_act_vector_11_nxt_holder = flex_PE0_core_act_vector_11;
auto flex_PE0_core_act_vector_12_nxt_holder = flex_PE0_core_act_vector_12;
auto flex_PE0_core_act_vector_13_nxt_holder = flex_PE0_core_act_vector_13;
auto flex_PE0_core_act_vector_14_nxt_holder = flex_PE0_core_act_vector_14;
auto flex_PE0_core_act_vector_15_nxt_holder = flex_PE0_core_act_vector_15;
auto flex_PE0_core_act_vector_2_nxt_holder = flex_PE0_core_act_vector_2;
auto flex_PE0_core_act_vector_3_nxt_holder = flex_PE0_core_act_vector_3;
auto flex_PE0_core_act_vector_4_nxt_holder = flex_PE0_core_act_vector_4;
auto flex_PE0_core_act_vector_5_nxt_holder = flex_PE0_core_act_vector_5;
auto flex_PE0_core_act_vector_6_nxt_holder = flex_PE0_core_act_vector_6;
auto flex_PE0_core_act_vector_7_nxt_holder = flex_PE0_core_act_vector_7;
auto flex_PE0_core_act_vector_8_nxt_holder = flex_PE0_core_act_vector_8;
auto flex_PE0_core_act_vector_9_nxt_holder = flex_PE0_core_act_vector_9;
sc_biguint<1> local_var_16 = 0;
auto local_var_16_nxt_holder = local_var_16;
sc_biguint<3> local_var_17 = 5;
auto local_var_17_nxt_holder = local_var_17;
PE0_ACT_CHILD_PE0_act_reg_temp_0 = flex_PE0_core_act_vector_0_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_1 = flex_PE0_core_act_vector_1_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_10 = flex_PE0_core_act_vector_10_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_11 = flex_PE0_core_act_vector_11_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_12 = flex_PE0_core_act_vector_12_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_13 = flex_PE0_core_act_vector_13_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_14 = flex_PE0_core_act_vector_14_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_15 = flex_PE0_core_act_vector_15_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_2 = flex_PE0_core_act_vector_2_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_3 = flex_PE0_core_act_vector_3_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_4 = flex_PE0_core_act_vector_4_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_5 = flex_PE0_core_act_vector_5_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_6 = flex_PE0_core_act_vector_6_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_7 = flex_PE0_core_act_vector_7_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_8 = flex_PE0_core_act_vector_8_nxt_holder;
PE0_ACT_CHILD_PE0_act_reg_temp_9 = flex_PE0_core_act_vector_9_nxt_holder;
flex_pe0_act_reg_port_valid = local_var_16_nxt_holder;
PE0_ACT_CHILD_pe0_act_state = local_var_17_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE0_act_child_op_inpe state updates:" << std::endl;
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_0 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_0 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_1 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_1 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_10 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_10 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_11 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_11 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_12 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_12 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_13 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_13 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_14 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_14 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_15 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_15 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_2 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_2 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_3 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_3 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_4 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_4 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_5 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_5 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_6 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_6 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_7 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_7 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_8 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_8 << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_PE0_act_reg_temp_9 => " << std::hex << "0x" << PE0_ACT_CHILD_PE0_act_reg_temp_9 << std::endl; 
instr_update_log << "    flex_pe0_act_reg_port_valid => " << std::hex << "0x" << flex_pe0_act_reg_port_valid << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_pe0_act_state => " << std::hex << "0x" << PE0_ACT_CHILD_pe0_act_state << std::endl; 
instr_update_log << std::endl;
#endif
}

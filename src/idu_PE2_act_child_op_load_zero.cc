#include <flex.h>
bool flex::decode_PE2_ACT_CHILD_PE2_act_child_op_load_zero() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE2_ACT_CHILD_pe2_act_is_start_reg == local_var_1);
sc_biguint<3> local_var_4 = 1;
bool local_var_5 = (PE2_ACT_CHILD_pe2_act_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<4> local_var_8 = 1;
bool local_var_9 = (PE2_ACT_CHILD_pe2_act_op == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
sc_biguint<1> local_var_12 = 1;
bool local_var_13 = (flex_pe2_act_mngr_is_zero_first == local_var_12);
bool local_var_14 = (local_var_10 & local_var_13);
auto& univ_var_358 = local_var_14;
return univ_var_358;
}
void flex::update_PE2_ACT_CHILD_PE2_act_child_op_load_zero() {
sc_biguint<20> local_var_0 = 0;
sc_biguint<20> local_var_1 = (local_var_0 + local_var_0);
auto local_var_1_nxt_holder = local_var_1;
sc_biguint<20> local_var_2 = 0;
sc_biguint<20> local_var_3 = (local_var_2 + local_var_2);
auto local_var_3_nxt_holder = local_var_3;
sc_biguint<20> local_var_4 = 0;
sc_biguint<20> local_var_5 = (local_var_4 + local_var_4);
auto local_var_5_nxt_holder = local_var_5;
sc_biguint<20> local_var_6 = 0;
sc_biguint<20> local_var_7 = (local_var_6 + local_var_6);
auto local_var_7_nxt_holder = local_var_7;
sc_biguint<20> local_var_8 = 0;
sc_biguint<20> local_var_9 = (local_var_8 + local_var_8);
auto local_var_9_nxt_holder = local_var_9;
sc_biguint<20> local_var_10 = 0;
sc_biguint<20> local_var_11 = (local_var_10 + local_var_10);
auto local_var_11_nxt_holder = local_var_11;
sc_biguint<20> local_var_12 = 0;
sc_biguint<20> local_var_13 = (local_var_12 + local_var_12);
auto local_var_13_nxt_holder = local_var_13;
sc_biguint<20> local_var_14 = 0;
sc_biguint<20> local_var_15 = (local_var_14 + local_var_14);
auto local_var_15_nxt_holder = local_var_15;
sc_biguint<20> local_var_16 = 0;
sc_biguint<20> local_var_17 = (local_var_16 + local_var_16);
auto local_var_17_nxt_holder = local_var_17;
sc_biguint<20> local_var_18 = 0;
sc_biguint<20> local_var_19 = (local_var_18 + local_var_18);
auto local_var_19_nxt_holder = local_var_19;
sc_biguint<20> local_var_20 = 0;
sc_biguint<20> local_var_21 = (local_var_20 + local_var_20);
auto local_var_21_nxt_holder = local_var_21;
sc_biguint<20> local_var_22 = 0;
sc_biguint<20> local_var_23 = (local_var_22 + local_var_22);
auto local_var_23_nxt_holder = local_var_23;
sc_biguint<20> local_var_24 = 0;
sc_biguint<20> local_var_25 = (local_var_24 + local_var_24);
auto local_var_25_nxt_holder = local_var_25;
sc_biguint<20> local_var_26 = 0;
sc_biguint<20> local_var_27 = (local_var_26 + local_var_26);
auto local_var_27_nxt_holder = local_var_27;
sc_biguint<20> local_var_28 = 0;
sc_biguint<20> local_var_29 = (local_var_28 + local_var_28);
auto local_var_29_nxt_holder = local_var_29;
sc_biguint<20> local_var_30 = 0;
sc_biguint<20> local_var_31 = (local_var_30 + local_var_30);
auto local_var_31_nxt_holder = local_var_31;
sc_biguint<3> local_var_32 = 5;
auto local_var_32_nxt_holder = local_var_32;
PE2_ACT_CHILD_PE2_act_reg_temp_0 = local_var_1_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_1 = local_var_3_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_10 = local_var_5_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_11 = local_var_7_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_12 = local_var_9_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_13 = local_var_11_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_14 = local_var_13_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_15 = local_var_15_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_2 = local_var_17_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_3 = local_var_19_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_4 = local_var_21_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_5 = local_var_23_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_6 = local_var_25_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_7 = local_var_27_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_8 = local_var_29_nxt_holder;
PE2_ACT_CHILD_PE2_act_reg_temp_9 = local_var_31_nxt_holder;
PE2_ACT_CHILD_pe2_act_state = local_var_32_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE2_act_child_op_load_zero state updates:" << std::endl;
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_0 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_0 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_1 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_1 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_10 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_10 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_11 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_11 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_12 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_12 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_13 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_13 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_14 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_14 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_15 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_15 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_2 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_2 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_3 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_3 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_4 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_4 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_5 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_5 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_6 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_6 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_7 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_7 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_8 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_8 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_PE2_act_reg_temp_9 => " << std::hex << "0x" << PE2_ACT_CHILD_PE2_act_reg_temp_9 << std::endl; 
instr_update_log << "    PE2_ACT_CHILD_pe2_act_state => " << std::hex << "0x" << PE2_ACT_CHILD_pe2_act_state << std::endl; 
instr_update_log << std::endl;
#endif
}

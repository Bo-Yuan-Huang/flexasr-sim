#include <flex.h>
bool flex::decode_PE1_ACT_CHILD_PE1_act_child_initiate() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe1_act_mngr_is_valid == local_var_1);
sc_biguint<1> local_var_4 = 0;
bool local_var_5 = (PE1_ACT_CHILD_pe1_act_is_start_reg == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<1> local_var_8 = 1;
bool local_var_9 = (flex_pe1_act_start_signal == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
sc_biguint<3> local_var_12 = 4;
bool local_var_13 = (PE1_ACT_CHILD_pe1_act_state == local_var_12);
bool local_var_14 = (local_var_10 & local_var_13);
auto& univ_var_260 = local_var_14;
return univ_var_260;
}
void flex::update_PE1_ACT_CHILD_PE1_act_child_initiate() {
std::map<sc_biguint<4>, sc_biguint<20>> local_var_0;
store_261(local_var_0);
std::map<sc_biguint<4>, sc_biguint<20>> local_var_1;
store_262(local_var_1);
std::map<sc_biguint<4>, sc_biguint<20>> local_var_2;
store_263(local_var_2);
std::map<sc_biguint<4>, sc_biguint<20>> local_var_3;
store_264(local_var_3);
sc_biguint<6> local_var_4 = 0;
auto local_var_4_nxt_holder = local_var_4;
sc_biguint<1> local_var_5 = 1;
auto local_var_5_nxt_holder = local_var_5;
sc_biguint<8> local_var_6 = 0;
auto local_var_6_nxt_holder = local_var_6;
sc_biguint<1> local_var_7 = 0;
auto local_var_7_nxt_holder = local_var_7;
sc_biguint<3> local_var_8 = 0;
auto local_var_8_nxt_holder = local_var_8;
for (auto& it : local_var_0) {
  PE1_ACT_CHILD_PE1_act_regs_0[it.first] = it.second;
}
for (auto& it : local_var_1) {
  PE1_ACT_CHILD_PE1_act_regs_1[it.first] = it.second;
}
for (auto& it : local_var_2) {
  PE1_ACT_CHILD_PE1_act_regs_2[it.first] = it.second;
}
for (auto& it : local_var_3) {
  PE1_ACT_CHILD_PE1_act_regs_3[it.first] = it.second;
}
PE1_ACT_CHILD_pe1_act_instruction_counter = local_var_4_nxt_holder;
PE1_ACT_CHILD_pe1_act_is_start_reg = local_var_5_nxt_holder;
PE1_ACT_CHILD_pe1_act_output_counter = local_var_6_nxt_holder;
flex_pe1_act_start_signal = local_var_7_nxt_holder;
PE1_ACT_CHILD_pe1_act_state = local_var_8_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE1_act_child_initiate state updates:" << std::endl;
instr_update_log << "    PE1_ACT_CHILD_PE1_act_regs_0 get updated" << std::endl;
instr_update_log << "    PE1_ACT_CHILD_PE1_act_regs_1 get updated" << std::endl;
instr_update_log << "    PE1_ACT_CHILD_PE1_act_regs_2 get updated" << std::endl;
instr_update_log << "    PE1_ACT_CHILD_PE1_act_regs_3 get updated" << std::endl;
instr_update_log << "    PE1_ACT_CHILD_pe1_act_instruction_counter => " << std::hex << "0x" << PE1_ACT_CHILD_pe1_act_instruction_counter << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_pe1_act_is_start_reg => " << std::hex << "0x" << PE1_ACT_CHILD_pe1_act_is_start_reg << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_pe1_act_output_counter => " << std::hex << "0x" << PE1_ACT_CHILD_pe1_act_output_counter << std::endl; 
instr_update_log << "    flex_pe1_act_start_signal => " << std::hex << "0x" << flex_pe1_act_start_signal << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_pe1_act_state => " << std::hex << "0x" << PE1_ACT_CHILD_pe1_act_state << std::endl; 
instr_update_log << std::endl;
#endif
}

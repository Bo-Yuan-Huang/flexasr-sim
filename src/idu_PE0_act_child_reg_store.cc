#include <flex.h>
bool flex::decode_PE0_ACT_CHILD_PE0_act_child_reg_store() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE0_ACT_CHILD_pe0_act_is_start_reg == local_var_1);
sc_biguint<3> local_var_4 = 5;
bool local_var_5 = (PE0_ACT_CHILD_pe0_act_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_195 = local_var_6;
return univ_var_195;
}
void flex::update_PE0_ACT_CHILD_PE0_act_child_reg_store() {
std::map<sc_biguint<4>, sc_biguint<20>> local_var_0;
ite_196(local_var_0);
std::map<sc_biguint<4>, sc_biguint<20>> local_var_1;
ite_212(local_var_1);
std::map<sc_biguint<4>, sc_biguint<20>> local_var_2;
ite_228(local_var_2);
std::map<sc_biguint<4>, sc_biguint<20>> local_var_3;
ite_244(local_var_3);
sc_biguint<3> local_var_4 = 2;
auto local_var_4_nxt_holder = local_var_4;
for (auto& it : local_var_0) {
  PE0_ACT_CHILD_PE0_act_regs_0[it.first] = it.second;
}
for (auto& it : local_var_1) {
  PE0_ACT_CHILD_PE0_act_regs_1[it.first] = it.second;
}
for (auto& it : local_var_2) {
  PE0_ACT_CHILD_PE0_act_regs_2[it.first] = it.second;
}
for (auto& it : local_var_3) {
  PE0_ACT_CHILD_PE0_act_regs_3[it.first] = it.second;
}
PE0_ACT_CHILD_pe0_act_state = local_var_4_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE0_act_child_reg_store state updates:" << std::endl;
instr_update_log << "    PE0_ACT_CHILD_PE0_act_regs_0 get updated" << std::endl;
instr_update_log << "    PE0_ACT_CHILD_PE0_act_regs_1 get updated" << std::endl;
instr_update_log << "    PE0_ACT_CHILD_PE0_act_regs_2 get updated" << std::endl;
instr_update_log << "    PE0_ACT_CHILD_PE0_act_regs_3 get updated" << std::endl;
instr_update_log << "    PE0_ACT_CHILD_pe0_act_state => " << std::hex << "0x" << PE0_ACT_CHILD_pe0_act_state << std::endl; 
instr_update_log << std::endl;
#endif
}

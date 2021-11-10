#include <flex.h>
bool flex::decode_PE1_ACT_CHILD_PE1_act_child_op_store() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE1_ACT_CHILD_pe1_act_is_start_reg == local_var_1);
sc_biguint<3> local_var_4 = 1;
bool local_var_5 = (PE1_ACT_CHILD_pe1_act_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<4> local_var_8 = 2;
bool local_var_9 = (PE1_ACT_CHILD_pe1_act_op == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
auto& univ_var_272 = local_var_10;
return univ_var_272;
}
void flex::update_PE1_ACT_CHILD_PE1_act_child_op_store() {
std::map<sc_biguint<32>, sc_biguint<8>> local_var_0;
store_273(local_var_0);
sc_biguint<3> local_var_1 = 2;
auto local_var_1_nxt_holder = local_var_1;
for (auto& it : local_var_0) {
  flex_pe1_act_buffer[it.first] = it.second;
}
PE1_ACT_CHILD_pe1_act_state = local_var_1_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE1_act_child_op_store state updates:" << std::endl;
instr_update_log << "    flex_pe1_act_buffer get updated" << std::endl;
instr_update_log << "    PE1_ACT_CHILD_pe1_act_state => " << std::hex << "0x" << PE1_ACT_CHILD_pe1_act_state << std::endl; 
instr_update_log << std::endl;
#endif
}

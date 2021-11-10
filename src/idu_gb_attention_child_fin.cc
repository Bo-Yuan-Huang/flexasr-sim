#include <flex.h>
bool flex::decode_GB_ATTENTION_CHILD_gb_attention_child_fin() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_attention_child_valid_flag == local_var_1);
sc_biguint<5> local_var_4 = 18;
bool local_var_5 = (flex_gb_attention_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_657 = local_var_6;
return univ_var_657;
}
void flex::update_GB_ATTENTION_CHILD_gb_attention_child_fin() {
sc_biguint<5> local_var_0 = 0;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<1> local_var_1 = 0;
auto local_var_1_nxt_holder = local_var_1;
sc_biguint<1> local_var_2 = 1;
auto local_var_2_nxt_holder = local_var_2;
flex_gb_attention_child_state = local_var_0_nxt_holder;
flex_gb_attention_child_valid_flag = local_var_1_nxt_holder;
flex_top_interrupt_request = local_var_2_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_attention_child_fin state updates:" << std::endl;
instr_update_log << "    flex_gb_attention_child_state => " << std::hex << "0x" << flex_gb_attention_child_state << std::endl; 
instr_update_log << "    flex_gb_attention_child_valid_flag => " << std::hex << "0x" << flex_gb_attention_child_valid_flag << std::endl; 
instr_update_log << "    flex_top_interrupt_request => " << std::hex << "0x" << flex_top_interrupt_request << std::endl; 
instr_update_log << std::endl;
#endif
}

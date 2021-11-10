#include <flex.h>
bool flex::decode_GB_LAYER_REDUCE_gb_layer_reduce_done() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_layer_reduce_child_valid_flag == local_var_1);
sc_biguint<3> local_var_4 = 5;
bool local_var_5 = (flex_gb_layer_reduce_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_781 = local_var_6;
return univ_var_781;
}
void flex::update_GB_LAYER_REDUCE_gb_layer_reduce_done() {
sc_biguint<1> local_var_0 = 0;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<1> local_var_1 = 1;
auto local_var_1_nxt_holder = local_var_1;
flex_gb_layer_reduce_child_valid_flag = local_var_0_nxt_holder;
flex_top_interrupt_request = local_var_1_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_layer_reduce_done state updates:" << std::endl;
instr_update_log << "    flex_gb_layer_reduce_child_valid_flag => " << std::hex << "0x" << flex_gb_layer_reduce_child_valid_flag << std::endl; 
instr_update_log << "    flex_top_interrupt_request => " << std::hex << "0x" << flex_top_interrupt_request << std::endl; 
instr_update_log << std::endl;
#endif
}

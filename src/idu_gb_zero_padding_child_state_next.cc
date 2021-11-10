#include <flex.h>
bool flex::decode_Child_GBZeroPadding_gb_zero_padding_child_state_next() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_zero_padding_child_valid_flag == local_var_1);
sc_biguint<3> local_var_4 = 4;
bool local_var_5 = (flex_gb_zero_padding_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_792 = local_var_6;
return univ_var_792;
}
void flex::update_Child_GBZeroPadding_gb_zero_padding_child_state_next() {
bool local_var_2 = (Child_GBZeroPadding_gb_zero_padding_vector_cntr < flex_gb_zero_padding_num_vector_1);
sc_biguint<3> local_var_3 = 2;
sc_biguint<16> local_var_7 = (flex_gb_zero_padding_num_timestep_2 - flex_gb_zero_padding_num_timestep_1);
bool local_var_8 = (Child_GBZeroPadding_gb_zero_padding_timestep_cntr < local_var_7);
sc_biguint<3> local_var_9 = 1;
sc_biguint<3> local_var_10 = 5;
auto local_var_11 = (local_var_8) ? local_var_9 : local_var_10;
auto local_var_12 = (local_var_2) ? local_var_3 : local_var_11;
auto local_var_12_nxt_holder = local_var_12;
bool local_var_13 = !local_var_2;
bool local_var_14 = !local_var_8;
bool local_var_15 = (local_var_13 & local_var_14);
sc_biguint<1> local_var_16 = 0;
sc_biguint<1> local_var_17 = 1;
auto local_var_18 = (local_var_15) ? local_var_16 : local_var_17;
auto local_var_18_nxt_holder = local_var_18;
sc_biguint<1> local_var_19 = 1;
sc_biguint<1> local_var_20 = 0;
auto local_var_21 = (local_var_15) ? local_var_19 : local_var_20;
auto local_var_21_nxt_holder = local_var_21;
flex_gb_zero_padding_child_state = local_var_12_nxt_holder;
flex_gb_zero_padding_child_valid_flag = local_var_18_nxt_holder;
flex_top_interrupt_request = local_var_21_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_zero_padding_child_state_next state updates:" << std::endl;
instr_update_log << "    flex_gb_zero_padding_child_state => " << std::hex << "0x" << flex_gb_zero_padding_child_state << std::endl; 
instr_update_log << "    flex_gb_zero_padding_child_valid_flag => " << std::hex << "0x" << flex_gb_zero_padding_child_valid_flag << std::endl; 
instr_update_log << "    flex_top_interrupt_request => " << std::hex << "0x" << flex_top_interrupt_request << std::endl; 
instr_update_log << std::endl;
#endif
}

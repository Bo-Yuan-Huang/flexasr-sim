#include <flex.h>
bool flex::decode_Child_GBZeroPadding_gb_zero_padding_child_prep() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_zero_padding_child_valid_flag == local_var_1);
sc_biguint<3> local_var_4 = 0;
bool local_var_5 = (flex_gb_zero_padding_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_782 = local_var_6;
return univ_var_782;
}
void flex::update_Child_GBZeroPadding_gb_zero_padding_child_prep() {
sc_biguint<3> local_var_0 = 1;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<16> local_var_1 = 0;
auto local_var_1_nxt_holder = local_var_1;
flex_gb_zero_padding_child_state = local_var_0_nxt_holder;
Child_GBZeroPadding_gb_zero_padding_timestep_cntr = local_var_1_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_zero_padding_child_prep state updates:" << std::endl;
instr_update_log << "    flex_gb_zero_padding_child_state => " << std::hex << "0x" << flex_gb_zero_padding_child_state << std::endl; 
instr_update_log << "    Child_GBZeroPadding_gb_zero_padding_timestep_cntr => " << std::hex << "0x" << Child_GBZeroPadding_gb_zero_padding_timestep_cntr << std::endl; 
instr_update_log << std::endl;
#endif
}

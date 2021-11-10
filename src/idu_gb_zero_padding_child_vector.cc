#include <flex.h>
bool flex::decode_Child_GBZeroPadding_gb_zero_padding_child_vector() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_zero_padding_child_valid_flag == local_var_1);
sc_biguint<3> local_var_4 = 2;
bool local_var_5 = (flex_gb_zero_padding_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_787 = local_var_6;
return univ_var_787;
}
void flex::update_Child_GBZeroPadding_gb_zero_padding_child_vector() {
sc_biguint<3> local_var_0 = 3;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<12> local_var_2 = 0;
univ_var_788 = (sc_biguint<12>(local_var_2), sc_biguint<8>(Child_GBZeroPadding_gb_zero_padding_vector_cntr));
sc_biguint<20> local_var_5 = 256;
sc_biguint<20> local_var_6 = (univ_var_788 * local_var_5);
sc_biguint<20> local_var_7 = (Child_GBZeroPadding_gb_zero_padding_mem_base_addr + local_var_6);
auto local_var_7_nxt_holder = local_var_7;
sc_biguint<8> local_var_8 = 1;
sc_biguint<8> local_var_9 = (Child_GBZeroPadding_gb_zero_padding_vector_cntr + local_var_8);
auto local_var_9_nxt_holder = local_var_9;
flex_gb_zero_padding_child_state = local_var_0_nxt_holder;
Child_GBZeroPadding_gb_zero_padding_mem_base_addr = local_var_7_nxt_holder;
Child_GBZeroPadding_gb_zero_padding_vector_cntr = local_var_9_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_zero_padding_child_vector state updates:" << std::endl;
instr_update_log << "    flex_gb_zero_padding_child_state => " << std::hex << "0x" << flex_gb_zero_padding_child_state << std::endl; 
instr_update_log << "    Child_GBZeroPadding_gb_zero_padding_mem_base_addr => " << std::hex << "0x" << Child_GBZeroPadding_gb_zero_padding_mem_base_addr << std::endl; 
instr_update_log << "    Child_GBZeroPadding_gb_zero_padding_vector_cntr => " << std::hex << "0x" << Child_GBZeroPadding_gb_zero_padding_vector_cntr << std::endl; 
instr_update_log << std::endl;
#endif
}

#include <flex.h>
bool flex::decode_Child_GBZeroPadding_gb_zero_padding_child_timestep() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_zero_padding_child_valid_flag == local_var_1);
sc_biguint<3> local_var_4 = 1;
bool local_var_5 = (flex_gb_zero_padding_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_783 = local_var_6;
return univ_var_783;
}
void flex::update_Child_GBZeroPadding_gb_zero_padding_child_timestep() {
sc_biguint<3> local_var_0 = 2;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<4> local_var_1 = 0;
sc_biguint<16> local_var_4 = (flex_gb_zero_padding_num_timestep_1 + Child_GBZeroPadding_gb_zero_padding_timestep_cntr);
sc_biguint<16> local_var_5 = 16;
sc_biguint<16> local_var_6 = (local_var_4 / local_var_5);
univ_var_784 = (sc_biguint<4>(local_var_1), sc_biguint<16>(local_var_6));
sc_biguint<12> local_var_8 = 0;
univ_var_785 = (sc_biguint<12>(local_var_8), sc_biguint<8>(flex_gb_zero_padding_num_vector_1));
sc_biguint<20> local_var_11 = 16;
sc_biguint<20> local_var_12 = (univ_var_785 * local_var_11);
sc_biguint<20> local_var_13 = 16;
sc_biguint<20> local_var_14 = (local_var_12 * local_var_13);
sc_biguint<20> local_var_15 = (univ_var_784 * local_var_14);
sc_biguint<4> local_var_16 = 0;
sc_biguint<16> local_var_17 = (local_var_4 % local_var_5);
univ_var_786 = (sc_biguint<4>(local_var_16), sc_biguint<16>(local_var_17));
sc_biguint<20> local_var_19 = 16;
sc_biguint<20> local_var_20 = (univ_var_786 * local_var_19);
sc_biguint<20> local_var_21 = (local_var_15 + local_var_20);
auto local_var_21_nxt_holder = local_var_21;
sc_biguint<16> local_var_22 = 1;
sc_biguint<16> local_var_23 = (Child_GBZeroPadding_gb_zero_padding_timestep_cntr + local_var_22);
auto local_var_23_nxt_holder = local_var_23;
sc_biguint<8> local_var_24 = 0;
auto local_var_24_nxt_holder = local_var_24;
flex_gb_zero_padding_child_state = local_var_0_nxt_holder;
Child_GBZeroPadding_gb_zero_padding_mem_base_addr = local_var_21_nxt_holder;
Child_GBZeroPadding_gb_zero_padding_timestep_cntr = local_var_23_nxt_holder;
Child_GBZeroPadding_gb_zero_padding_vector_cntr = local_var_24_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_zero_padding_child_timestep state updates:" << std::endl;
instr_update_log << "    flex_gb_zero_padding_child_state => " << std::hex << "0x" << flex_gb_zero_padding_child_state << std::endl; 
instr_update_log << "    Child_GBZeroPadding_gb_zero_padding_mem_base_addr => " << std::hex << "0x" << Child_GBZeroPadding_gb_zero_padding_mem_base_addr << std::endl; 
instr_update_log << "    Child_GBZeroPadding_gb_zero_padding_timestep_cntr => " << std::hex << "0x" << Child_GBZeroPadding_gb_zero_padding_timestep_cntr << std::endl; 
instr_update_log << "    Child_GBZeroPadding_gb_zero_padding_vector_cntr => " << std::hex << "0x" << Child_GBZeroPadding_gb_zero_padding_vector_cntr << std::endl; 
instr_update_log << std::endl;
#endif
}

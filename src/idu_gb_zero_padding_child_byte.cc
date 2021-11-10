#include <flex.h>
bool flex::decode_Child_GBZeroPadding_gb_zero_padding_child_byte() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_zero_padding_child_valid_flag == local_var_1);
sc_biguint<3> local_var_4 = 3;
bool local_var_5 = (flex_gb_zero_padding_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_789 = local_var_6;
return univ_var_789;
}
void flex::update_Child_GBZeroPadding_gb_zero_padding_child_byte() {
std::map<sc_biguint<32>, sc_biguint<8>> local_var_0;
store_790(local_var_0);
sc_biguint<3> local_var_1 = 4;
auto local_var_1_nxt_holder = local_var_1;
for (auto& it : local_var_0) {
  flex_gb_core_large_buffer[it.first] = it.second;
}
flex_gb_zero_padding_child_state = local_var_1_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_zero_padding_child_byte state updates:" << std::endl;
instr_update_log << "    flex_gb_core_large_buffer get updated" << std::endl;
instr_update_log << "    flex_gb_zero_padding_child_state => " << std::hex << "0x" << flex_gb_zero_padding_child_state << std::endl; 
instr_update_log << std::endl;
#endif
}

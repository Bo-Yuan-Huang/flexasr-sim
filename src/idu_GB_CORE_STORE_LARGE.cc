#include <flex.h>
bool flex::decode_flex_GB_CORE_STORE_LARGE() {
sc_biguint<1> local_var_2 = ~flex_if_axi_rd;
sc_biguint<1> local_var_3 = (flex_if_axi_wr & local_var_2);
sc_biguint<1> local_var_4 = 1;
bool local_var_5 = (local_var_3 == local_var_4);
sc_biguint<32> local_var_7 = 860880896;
bool local_var_8 = (flex_addr_in == local_var_7);
bool local_var_9 = (flex_addr_in > local_var_7);
bool local_var_10 = (local_var_8 | local_var_9);
sc_biguint<32> local_var_11 = 861929456;
bool local_var_12 = (flex_addr_in == local_var_11);
bool local_var_13 = (flex_addr_in < local_var_11);
bool local_var_14 = (local_var_12 | local_var_13);
bool local_var_15 = (local_var_10 & local_var_14);
bool local_var_16 = (local_var_5 & local_var_15);
auto& univ_var_886 = local_var_16;
return univ_var_886;
}
void flex::update_flex_GB_CORE_STORE_LARGE() {
std::map<sc_biguint<32>, sc_biguint<8>> local_var_0;
store_887(local_var_0);
for (auto& it : local_var_0) {
  flex_gb_core_large_buffer[it.first] = it.second;
}
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "GB_CORE_STORE_LARGE state updates:" << std::endl;
instr_update_log << "    flex_gb_core_large_buffer get updated" << std::endl;
instr_update_log << std::endl;
#endif
}

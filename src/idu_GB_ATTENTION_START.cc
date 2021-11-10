#include <flex.h>
bool flex::decode_flex_GB_ATTENTION_START() {
sc_biguint<1> local_var_2 = ~flex_if_axi_rd;
sc_biguint<1> local_var_3 = (flex_if_axi_wr & local_var_2);
sc_biguint<1> local_var_5 = (local_var_3 & flex_gb_attention_is_valid);
sc_biguint<1> local_var_6 = 1;
bool local_var_7 = (local_var_5 == local_var_6);
sc_biguint<32> local_var_9 = 855638096;
bool local_var_10 = (flex_addr_in == local_var_9);
bool local_var_11 = (local_var_7 & local_var_10);
auto& univ_var_918 = local_var_11;
return univ_var_918;
}
void flex::update_flex_GB_ATTENTION_START() {
sc_biguint<5> local_var_0 = 0;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<1> local_var_1 = 1;
auto local_var_1_nxt_holder = local_var_1;
flex_gb_attention_child_state = local_var_0_nxt_holder;
flex_gb_attention_child_valid_flag = local_var_1_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "GB_ATTENTION_START state updates:" << std::endl;
instr_update_log << "    flex_gb_attention_child_state => " << std::hex << "0x" << flex_gb_attention_child_state << std::endl; 
instr_update_log << "    flex_gb_attention_child_valid_flag => " << std::hex << "0x" << flex_gb_attention_child_valid_flag << std::endl; 
instr_update_log << std::endl;
#endif
}

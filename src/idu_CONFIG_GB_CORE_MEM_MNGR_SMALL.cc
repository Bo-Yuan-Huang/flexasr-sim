#include <flex.h>
bool flex::decode_flex_CONFIG_GB_CORE_MEM_MNGR_SMALL() {
sc_biguint<1> local_var_2 = ~flex_if_axi_rd;
sc_biguint<1> local_var_3 = (flex_if_axi_wr & local_var_2);
sc_biguint<1> local_var_4 = 1;
bool local_var_5 = (local_var_3 == local_var_4);
sc_biguint<32> local_var_7 = 859832352;
bool local_var_8 = (flex_addr_in == local_var_7);
bool local_var_9 = (local_var_5 & local_var_8);
auto& univ_var_802 = local_var_9;
return univ_var_802;
}
void flex::update_flex_CONFIG_GB_CORE_MEM_MNGR_SMALL() {
univ_var_803 = (sc_biguint<8>(flex_data_in_1), sc_biguint<8>(flex_data_in_0));
auto univ_var_803_nxt_holder = univ_var_803;
univ_var_804 = (sc_biguint<8>(flex_data_in_3), sc_biguint<8>(flex_data_in_2));
auto univ_var_804_nxt_holder = univ_var_804;
univ_var_805 = (sc_biguint<8>(flex_data_in_5), sc_biguint<8>(flex_data_in_4));
auto univ_var_805_nxt_holder = univ_var_805;
univ_var_806 = (sc_biguint<8>(flex_data_in_7), sc_biguint<8>(flex_data_in_6));
auto univ_var_806_nxt_holder = univ_var_806;
univ_var_807 = (sc_biguint<8>(flex_data_in_9), sc_biguint<8>(flex_data_in_8));
auto univ_var_807_nxt_holder = univ_var_807;
univ_var_808 = (sc_biguint<8>(flex_data_in_11), sc_biguint<8>(flex_data_in_10));
auto univ_var_808_nxt_holder = univ_var_808;
univ_var_809 = (sc_biguint<8>(flex_data_in_13), sc_biguint<8>(flex_data_in_12));
auto univ_var_809_nxt_holder = univ_var_809;
univ_var_810 = (sc_biguint<8>(flex_data_in_15), sc_biguint<8>(flex_data_in_14));
auto univ_var_810_nxt_holder = univ_var_810;
flex_gb_core_mem_mngr_small_base_small_0 = univ_var_803_nxt_holder;
flex_gb_core_mem_mngr_small_base_small_1 = univ_var_804_nxt_holder;
flex_gb_core_mem_mngr_small_base_small_2 = univ_var_805_nxt_holder;
flex_gb_core_mem_mngr_small_base_small_3 = univ_var_806_nxt_holder;
flex_gb_core_mem_mngr_small_base_small_4 = univ_var_807_nxt_holder;
flex_gb_core_mem_mngr_small_base_small_5 = univ_var_808_nxt_holder;
flex_gb_core_mem_mngr_small_base_small_6 = univ_var_809_nxt_holder;
flex_gb_core_mem_mngr_small_base_small_7 = univ_var_810_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "CONFIG_GB_CORE_MEM_MNGR_SMALL state updates:" << std::endl;
instr_update_log << "    flex_gb_core_mem_mngr_small_base_small_0 => " << std::hex << "0x" << flex_gb_core_mem_mngr_small_base_small_0 << std::endl; 
instr_update_log << "    flex_gb_core_mem_mngr_small_base_small_1 => " << std::hex << "0x" << flex_gb_core_mem_mngr_small_base_small_1 << std::endl; 
instr_update_log << "    flex_gb_core_mem_mngr_small_base_small_2 => " << std::hex << "0x" << flex_gb_core_mem_mngr_small_base_small_2 << std::endl; 
instr_update_log << "    flex_gb_core_mem_mngr_small_base_small_3 => " << std::hex << "0x" << flex_gb_core_mem_mngr_small_base_small_3 << std::endl; 
instr_update_log << "    flex_gb_core_mem_mngr_small_base_small_4 => " << std::hex << "0x" << flex_gb_core_mem_mngr_small_base_small_4 << std::endl; 
instr_update_log << "    flex_gb_core_mem_mngr_small_base_small_5 => " << std::hex << "0x" << flex_gb_core_mem_mngr_small_base_small_5 << std::endl; 
instr_update_log << "    flex_gb_core_mem_mngr_small_base_small_6 => " << std::hex << "0x" << flex_gb_core_mem_mngr_small_base_small_6 << std::endl; 
instr_update_log << "    flex_gb_core_mem_mngr_small_base_small_7 => " << std::hex << "0x" << flex_gb_core_mem_mngr_small_base_small_7 << std::endl; 
instr_update_log << std::endl;
#endif
}

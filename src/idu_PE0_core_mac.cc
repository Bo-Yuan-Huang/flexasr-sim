#include <flex.h>
bool flex::decode_PE0_CORE_CHILD_PE0_core_mac() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe0_rnn_layer_sizing_is_valid == local_var_1);
sc_biguint<1> local_var_4 = 1;
bool local_var_5 = (PE0_CORE_CHILD_pe0_core_is_start == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<3> local_var_8 = 2;
bool local_var_9 = (flex_pe0_core_state == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
sc_biguint<1> local_var_12 = 0;
bool local_var_13 = (PE0_CORE_CHILD_pe0_core_child_run_mac_flag == local_var_12);
bool local_var_14 = (local_var_10 & local_var_13);
auto& univ_var_47 = local_var_14;
return univ_var_47;
}
void flex::update_PE0_CORE_CHILD_PE0_core_mac() {
sc_biguint<5> local_var_0 = 0;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<1> local_var_1 = 1;
auto local_var_1_nxt_holder = local_var_1;
sc_biguint<8> local_var_2 = 0;
univ_var_48 = (sc_biguint<8>(local_var_2), sc_biguint<8>(PE0_CORE_CHILD_pe0_core_input_counter));
sc_biguint<1> local_var_6 = 0;
bool local_var_7 = (PE0_CORE_CHILD_pe0_core_manager_cntr == local_var_6);
auto local_var_10 = (local_var_7) ? flex_pe0_mem_mngr_first_base_input : flex_pe0_mem_mngr_second_base_input;
sc_biguint<16> local_var_11 = (univ_var_48 + local_var_10);
auto local_var_11_nxt_holder = local_var_11;
sc_biguint<1> local_var_13 = 1;
bool local_var_14 = (flex_pe0_rnn_layer_sizing_is_cluster == local_var_13);
sc_biguint<8> local_var_15 = 0;
univ_var_49 = (sc_biguint<8>(local_var_15), sc_biguint<8>(PE0_CORE_CHILD_pe0_core_output_counter));
sc_biguint<8> local_var_18 = 0;
sc_biguint<1> local_var_19 = 0;
bool local_var_20 = (PE0_CORE_CHILD_pe0_core_manager_cntr == local_var_19);
auto local_var_23 = (local_var_20) ? flex_pe0_mem_mngr_first_num_input : flex_pe0_mem_mngr_second_num_input;
univ_var_50 = (sc_biguint<8>(local_var_18), sc_biguint<8>(local_var_23));
sc_biguint<16> local_var_25 = (univ_var_49 * univ_var_50);
sc_biguint<16> local_var_26 = (local_var_25 + univ_var_48);
sc_biguint<16> local_var_27 = 8;
sc_biguint<16> local_var_28 = (local_var_26 * local_var_27);
sc_biguint<1> local_var_29 = 0;
bool local_var_30 = (PE0_CORE_CHILD_pe0_core_manager_cntr == local_var_29);
auto local_var_33 = (local_var_30) ? flex_pe0_mem_mngr_first_base_weight : flex_pe0_mem_mngr_second_base_weight;
sc_biguint<16> local_var_34 = (local_var_28 + local_var_33);
sc_biguint<16> local_var_35 = (univ_var_49 * univ_var_50);
sc_biguint<16> local_var_36 = (local_var_35 + univ_var_48);
sc_biguint<16> local_var_37 = 16;
sc_biguint<16> local_var_38 = (local_var_36 * local_var_37);
sc_biguint<16> local_var_39 = (local_var_38 + local_var_33);
auto local_var_40 = (local_var_14) ? local_var_34 : local_var_39;
auto local_var_40_nxt_holder = local_var_40;
sc_biguint<8> local_var_41 = 1;
sc_biguint<8> local_var_42 = (local_var_23 - local_var_41);
bool local_var_43 = (PE0_CORE_CHILD_pe0_core_input_counter == local_var_42);
bool local_var_44 = (PE0_CORE_CHILD_pe0_core_input_counter > local_var_42);
bool local_var_45 = (local_var_43 | local_var_44);
sc_biguint<8> local_var_46 = 0;
sc_biguint<8> local_var_47 = 1;
sc_biguint<8> local_var_48 = (PE0_CORE_CHILD_pe0_core_input_counter + local_var_47);
auto local_var_49 = (local_var_45) ? local_var_46 : local_var_48;
auto local_var_49_nxt_holder = local_var_49;
sc_biguint<1> local_var_50 = 1;
bool local_var_51 = (flex_pe0_rnn_layer_sizing_is_cluster == local_var_50);
sc_biguint<4> local_var_52 = 1;
sc_biguint<4> local_var_53 = 0;
auto local_var_54 = (local_var_51) ? local_var_52 : local_var_53;
auto local_var_54_nxt_holder = local_var_54;
sc_biguint<3> local_var_55 = 3;
sc_biguint<3> local_var_56 = 2;
auto local_var_57 = (local_var_45) ? local_var_55 : local_var_56;
auto local_var_57_nxt_holder = local_var_57;
PE0_CORE_CHILD_pe0_core_child_run_mac_cntr = local_var_0_nxt_holder;
PE0_CORE_CHILD_pe0_core_child_run_mac_flag = local_var_1_nxt_holder;
PE0_CORE_CHILD_pe0_core_child_run_mac_input_base_vector = local_var_11_nxt_holder;
PE0_CORE_CHILD_pe0_core_child_run_mac_weight_base_vector = local_var_40_nxt_holder;
PE0_CORE_CHILD_pe0_core_input_counter = local_var_49_nxt_holder;
PE0_CORE_CHILD_pe0_core_run_mac_child_state = local_var_54_nxt_holder;
flex_pe0_core_state = local_var_57_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE0_core_mac state updates:" << std::endl;
instr_update_log << "    PE0_CORE_CHILD_pe0_core_child_run_mac_cntr => " << std::hex << "0x" << PE0_CORE_CHILD_pe0_core_child_run_mac_cntr << std::endl; 
instr_update_log << "    PE0_CORE_CHILD_pe0_core_child_run_mac_flag => " << std::hex << "0x" << PE0_CORE_CHILD_pe0_core_child_run_mac_flag << std::endl; 
instr_update_log << "    PE0_CORE_CHILD_pe0_core_child_run_mac_input_base_vector => " << std::hex << "0x" << PE0_CORE_CHILD_pe0_core_child_run_mac_input_base_vector << std::endl; 
instr_update_log << "    PE0_CORE_CHILD_pe0_core_child_run_mac_weight_base_vector => " << std::hex << "0x" << PE0_CORE_CHILD_pe0_core_child_run_mac_weight_base_vector << std::endl; 
instr_update_log << "    PE0_CORE_CHILD_pe0_core_input_counter => " << std::hex << "0x" << PE0_CORE_CHILD_pe0_core_input_counter << std::endl; 
instr_update_log << "    PE0_CORE_CHILD_pe0_core_run_mac_child_state => " << std::hex << "0x" << PE0_CORE_CHILD_pe0_core_run_mac_child_state << std::endl; 
instr_update_log << "    flex_pe0_core_state => " << std::hex << "0x" << flex_pe0_core_state << std::endl; 
instr_update_log << std::endl;
#endif
}

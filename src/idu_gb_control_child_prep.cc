#include <flex.h>
bool flex::decode_Child_GB_Control_gb_control_child_prep() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_control_child_valid_flag == local_var_1);
sc_biguint<4> local_var_4 = 0;
bool local_var_5 = (flex_gb_control_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_658 = local_var_6;
return univ_var_658;
}
void flex::update_Child_GB_Control_gb_control_child_prep() {
sc_biguint<4> local_var_0 = 1;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<16> local_var_1 = 0;
auto local_var_1_nxt_holder = local_var_1;
sc_biguint<8> local_var_2 = 0;
auto local_var_2_nxt_holder = local_var_2;
sc_biguint<1> local_var_3 = 0;
auto local_var_3_nxt_holder = local_var_3;
sc_biguint<1> local_var_4 = 0;
auto local_var_4_nxt_holder = local_var_4;
sc_biguint<1> local_var_5 = 0;
auto local_var_5_nxt_holder = local_var_5;
sc_biguint<1> local_var_6 = 0;
auto local_var_6_nxt_holder = local_var_6;
sc_biguint<1> local_var_7 = 0;
auto local_var_7_nxt_holder = local_var_7;
sc_biguint<1> local_var_8 = 0;
auto local_var_8_nxt_holder = local_var_8;
sc_biguint<1> local_var_10 = 1;
bool local_var_11 = (flex_pe3_rnn_layer_sizing_is_valid == local_var_10);
sc_biguint<1> local_var_13 = 1;
bool local_var_14 = (flex_pe2_rnn_layer_sizing_is_valid == local_var_13);
sc_biguint<1> local_var_16 = 1;
bool local_var_17 = (flex_pe1_rnn_layer_sizing_is_valid == local_var_16);
sc_biguint<1> local_var_19 = 1;
bool local_var_20 = (flex_pe0_rnn_layer_sizing_is_valid == local_var_19);
sc_biguint<3> local_var_21 = 0;
sc_biguint<3> local_var_22 = 1;
sc_biguint<3> local_var_23 = (local_var_21 + local_var_22);
auto local_var_24 = (local_var_20) ? local_var_23 : local_var_21;
sc_biguint<3> local_var_25 = 1;
sc_biguint<3> local_var_26 = (local_var_24 + local_var_25);
auto local_var_27 = (local_var_17) ? local_var_26 : local_var_24;
sc_biguint<3> local_var_28 = 1;
sc_biguint<3> local_var_29 = (local_var_27 + local_var_28);
auto local_var_30 = (local_var_14) ? local_var_29 : local_var_27;
sc_biguint<3> local_var_31 = 1;
sc_biguint<3> local_var_32 = (local_var_30 + local_var_31);
auto local_var_33 = (local_var_11) ? local_var_32 : local_var_30;
auto local_var_33_nxt_holder = local_var_33;
flex_gb_control_child_state = local_var_0_nxt_holder;
Child_GB_Control_gb_control_child_timestep_cntr = local_var_1_nxt_holder;
Child_GB_Control_gb_control_child_vector_cntr = local_var_2_nxt_holder;
flex_gb_control_data_out_valid = local_var_3_nxt_holder;
flex_pe0_act_start_signal = local_var_4_nxt_holder;
flex_pe1_act_start_signal = local_var_5_nxt_holder;
flex_pe2_act_start_signal = local_var_6_nxt_holder;
flex_pe3_act_start_signal = local_var_7_nxt_holder;
flex_pe_core_start_signal = local_var_8_nxt_holder;
flex_pe_valid_num = local_var_33_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_control_child_prep state updates:" << std::endl;
instr_update_log << "    flex_gb_control_child_state => " << std::hex << "0x" << flex_gb_control_child_state << std::endl; 
instr_update_log << "    Child_GB_Control_gb_control_child_timestep_cntr => " << std::hex << "0x" << Child_GB_Control_gb_control_child_timestep_cntr << std::endl; 
instr_update_log << "    Child_GB_Control_gb_control_child_vector_cntr => " << std::hex << "0x" << Child_GB_Control_gb_control_child_vector_cntr << std::endl; 
instr_update_log << "    flex_gb_control_data_out_valid => " << std::hex << "0x" << flex_gb_control_data_out_valid << std::endl; 
instr_update_log << "    flex_pe0_act_start_signal => " << std::hex << "0x" << flex_pe0_act_start_signal << std::endl; 
instr_update_log << "    flex_pe1_act_start_signal => " << std::hex << "0x" << flex_pe1_act_start_signal << std::endl; 
instr_update_log << "    flex_pe2_act_start_signal => " << std::hex << "0x" << flex_pe2_act_start_signal << std::endl; 
instr_update_log << "    flex_pe3_act_start_signal => " << std::hex << "0x" << flex_pe3_act_start_signal << std::endl; 
instr_update_log << "    flex_pe_core_start_signal => " << std::hex << "0x" << flex_pe_core_start_signal << std::endl; 
instr_update_log << "    flex_pe_valid_num => " << std::hex << "0x" << flex_pe_valid_num << std::endl; 
instr_update_log << std::endl;
#endif
}

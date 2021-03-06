#include <flex.h>
bool flex::decode_Child_GB_Control_gb_control_child_send_prep() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_control_child_valid_flag == local_var_1);
sc_biguint<4> local_var_4 = 1;
bool local_var_5 = (flex_gb_control_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_659 = local_var_6;
return univ_var_659;
}
void flex::update_Child_GB_Control_gb_control_child_send_prep() {
sc_biguint<4> local_var_0 = 2;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<4> local_var_1 = 0;
sc_biguint<3> local_var_3 = 0;
bool local_var_4 = (flex_gb_control_mode == local_var_3);
sc_biguint<3> local_var_6 = 1;
bool local_var_7 = (flex_gb_control_mode == local_var_6);
sc_biguint<16> local_var_8 = 2;
sc_biguint<16> local_var_9 = (Child_GB_Control_gb_control_child_timestep_cntr * local_var_8);
sc_biguint<3> local_var_10 = 2;
bool local_var_11 = (flex_gb_control_mode == local_var_10);
sc_biguint<16> local_var_13 = (flex_gb_control_num_timestep_1 - Child_GB_Control_gb_control_child_timestep_cntr);
sc_biguint<16> local_var_14 = 2;
sc_biguint<16> local_var_15 = (local_var_13 * local_var_14);
sc_biguint<16> local_var_16 = 1;
sc_biguint<16> local_var_17 = (local_var_15 + local_var_16);
sc_biguint<3> local_var_18 = 3;
bool local_var_19 = (flex_gb_control_mode == local_var_18);
sc_biguint<16> local_var_20 = 0;
sc_biguint<16> local_var_21 = 0;
auto local_var_22 = (local_var_19) ? local_var_20 : local_var_21;
auto local_var_23 = (local_var_11) ? local_var_17 : local_var_22;
auto local_var_24 = (local_var_7) ? local_var_9 : local_var_23;
auto local_var_25 = (local_var_4) ? Child_GB_Control_gb_control_child_timestep_cntr : local_var_24;
sc_biguint<16> local_var_26 = 16;
sc_biguint<16> local_var_27 = (local_var_25 / local_var_26);
univ_var_660 = (sc_biguint<4>(local_var_1), sc_biguint<16>(local_var_27));
sc_biguint<12> local_var_29 = 0;
univ_var_661 = (sc_biguint<12>(local_var_29), sc_biguint<8>(flex_gb_control_num_vector_1));
sc_biguint<20> local_var_32 = 16;
sc_biguint<20> local_var_33 = (univ_var_661 * local_var_32);
sc_biguint<20> local_var_34 = 16;
sc_biguint<20> local_var_35 = (local_var_33 * local_var_34);
sc_biguint<20> local_var_36 = (univ_var_660 * local_var_35);
sc_biguint<4> local_var_37 = 0;
sc_biguint<16> local_var_38 = (local_var_25 % local_var_26);
univ_var_662 = (sc_biguint<4>(local_var_37), sc_biguint<16>(local_var_38));
sc_biguint<20> local_var_40 = 16;
sc_biguint<20> local_var_41 = (univ_var_662 * local_var_40);
sc_biguint<20> local_var_42 = (local_var_36 + local_var_41);
auto local_var_42_nxt_holder = local_var_42;
auto local_var_25_nxt_holder = local_var_25;
sc_biguint<8> local_var_43 = 0;
auto local_var_43_nxt_holder = local_var_43;
flex_gb_control_child_state = local_var_0_nxt_holder;
Child_GB_Control_gb_control_child_timestep_base_addr = local_var_42_nxt_holder;
Child_GB_Control_gb_control_child_timestep_index = local_var_25_nxt_holder;
Child_GB_Control_gb_control_child_vector_cntr = local_var_43_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_control_child_send_prep state updates:" << std::endl;
instr_update_log << "    flex_gb_control_child_state => " << std::hex << "0x" << flex_gb_control_child_state << std::endl; 
instr_update_log << "    Child_GB_Control_gb_control_child_timestep_base_addr => " << std::hex << "0x" << Child_GB_Control_gb_control_child_timestep_base_addr << std::endl; 
instr_update_log << "    Child_GB_Control_gb_control_child_timestep_index => " << std::hex << "0x" << Child_GB_Control_gb_control_child_timestep_index << std::endl; 
instr_update_log << "    Child_GB_Control_gb_control_child_vector_cntr => " << std::hex << "0x" << Child_GB_Control_gb_control_child_vector_cntr << std::endl; 
instr_update_log << std::endl;
#endif
}

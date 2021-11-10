#include <flex.h>
bool flex::decode_Child_GBLayerNorm_gb_layer_norm_timestep_level_op() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_layer_norm_child_valid_flag == local_var_1);
sc_biguint<4> local_var_4 = 0;
bool local_var_5 = (flex_gb_layer_norm_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_737 = local_var_6;
return univ_var_737;
}
void flex::update_Child_GBLayerNorm_gb_layer_norm_timestep_level_op() {
sc_biguint<4> local_var_0 = 1;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<8> local_var_1 = 0;
auto local_var_1_nxt_holder = local_var_1;
sc_biguint<24> local_var_2 = 0;
auto local_var_2_nxt_holder = local_var_2;
sc_biguint<24> local_var_3 = 0;
auto local_var_3_nxt_holder = local_var_3;
sc_biguint<3> local_var_5 = 0;
bool local_var_6 = (flex_gb_layer_norm_memory_index_1 == local_var_5);
sc_biguint<4> local_var_8 = 0;
univ_var_738 = (sc_biguint<16>(flex_gb_core_mem_mngr_large_base_large_0), sc_biguint<4>(local_var_8));
sc_biguint<3> local_var_10 = 1;
bool local_var_11 = (flex_gb_layer_norm_memory_index_1 == local_var_10);
sc_biguint<4> local_var_13 = 0;
univ_var_739 = (sc_biguint<16>(flex_gb_core_mem_mngr_large_base_large_1), sc_biguint<4>(local_var_13));
sc_biguint<3> local_var_15 = 2;
bool local_var_16 = (flex_gb_layer_norm_memory_index_1 == local_var_15);
sc_biguint<4> local_var_18 = 0;
univ_var_740 = (sc_biguint<16>(flex_gb_core_mem_mngr_large_base_large_2), sc_biguint<4>(local_var_18));
sc_biguint<4> local_var_21 = 0;
univ_var_741 = (sc_biguint<16>(flex_gb_core_mem_mngr_large_base_large_3), sc_biguint<4>(local_var_21));
auto local_var_23 = (local_var_16) ? univ_var_740 : univ_var_741;
auto local_var_24 = (local_var_11) ? univ_var_739 : local_var_23;
auto local_var_25 = (local_var_6) ? univ_var_738 : local_var_24;
sc_biguint<4> local_var_26 = 0;
univ_var_742 = (sc_biguint<4>(local_var_26), sc_biguint<16>(flex_gb_layer_norm_cntr_timestep));
sc_biguint<20> local_var_29 = 16;
sc_biguint<20> local_var_30 = (univ_var_742 / local_var_29);
sc_biguint<12> local_var_31 = 0;
univ_var_743 = (sc_biguint<12>(local_var_31), sc_biguint<8>(flex_gb_layer_norm_num_vector_1));
sc_biguint<20> local_var_34 = 16;
sc_biguint<20> local_var_35 = (univ_var_743 * local_var_34);
sc_biguint<20> local_var_36 = 16;
sc_biguint<20> local_var_37 = (local_var_35 * local_var_36);
sc_biguint<20> local_var_38 = (local_var_30 * local_var_37);
sc_biguint<20> local_var_39 = 16;
sc_biguint<20> local_var_40 = (univ_var_742 % local_var_39);
sc_biguint<20> local_var_41 = 16;
sc_biguint<20> local_var_42 = (local_var_40 * local_var_41);
sc_biguint<20> local_var_43 = (local_var_38 + local_var_42);
sc_biguint<20> local_var_44 = (local_var_25 + local_var_43);
auto local_var_44_nxt_holder = local_var_44;
sc_biguint<20> local_var_45 = 0;
auto local_var_45_nxt_holder = local_var_45;
sc_biguint<20> local_var_46 = 0;
auto local_var_46_nxt_holder = local_var_46;
flex_gb_layer_norm_child_state = local_var_0_nxt_holder;
Child_GBLayerNorm_gb_layer_norm_cntr_vector = local_var_1_nxt_holder;
Child_GBLayerNorm_gb_layer_norm_sum_X = local_var_2_nxt_holder;
Child_GBLayerNorm_gb_layer_norm_sum_X_SQ = local_var_3_nxt_holder;
Child_GBLayerNorm_gb_layer_norm_timestep_level_base_addr = local_var_44_nxt_holder;
Child_GBLayerNorm_gb_layer_norm_vector_sum_x = local_var_45_nxt_holder;
Child_GBLayerNorm_gb_layer_norm_vector_sum_x_sq = local_var_46_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_layer_norm_timestep_level_op state updates:" << std::endl;
instr_update_log << "    flex_gb_layer_norm_child_state => " << std::hex << "0x" << flex_gb_layer_norm_child_state << std::endl; 
instr_update_log << "    Child_GBLayerNorm_gb_layer_norm_cntr_vector => " << std::hex << "0x" << Child_GBLayerNorm_gb_layer_norm_cntr_vector << std::endl; 
instr_update_log << "    Child_GBLayerNorm_gb_layer_norm_sum_X => " << std::hex << "0x" << Child_GBLayerNorm_gb_layer_norm_sum_X << std::endl; 
instr_update_log << "    Child_GBLayerNorm_gb_layer_norm_sum_X_SQ => " << std::hex << "0x" << Child_GBLayerNorm_gb_layer_norm_sum_X_SQ << std::endl; 
instr_update_log << "    Child_GBLayerNorm_gb_layer_norm_timestep_level_base_addr => " << std::hex << "0x" << Child_GBLayerNorm_gb_layer_norm_timestep_level_base_addr << std::endl; 
instr_update_log << "    Child_GBLayerNorm_gb_layer_norm_vector_sum_x => " << std::hex << "0x" << Child_GBLayerNorm_gb_layer_norm_vector_sum_x << std::endl; 
instr_update_log << "    Child_GBLayerNorm_gb_layer_norm_vector_sum_x_sq => " << std::hex << "0x" << Child_GBLayerNorm_gb_layer_norm_vector_sum_x_sq << std::endl; 
instr_update_log << std::endl;
#endif
}

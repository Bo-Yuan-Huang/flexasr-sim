#include <flex.h>
bool flex::decode_GB_LAYER_REDUCE_gb_layer_reduce_byte_level_op() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_layer_reduce_child_valid_flag == local_var_1);
sc_biguint<3> local_var_4 = 4;
bool local_var_5 = (flex_gb_layer_reduce_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_772 = local_var_6;
return univ_var_772;
}
void flex::update_GB_LAYER_REDUCE_gb_layer_reduce_byte_level_op() {
std::map<sc_biguint<32>, sc_biguint<8>> local_var_0;
store_773(local_var_0);
sc_biguint<5> local_var_2 = 1;
sc_biguint<5> local_var_3 = (GB_LAYER_REDUCE_gb_layer_reduce_byte_level_cntr + local_var_2);
auto local_var_3_nxt_holder = local_var_3;
sc_biguint<16> local_var_6 = 2;
sc_biguint<16> local_var_7 = (flex_gb_layer_reduce_num_timestep_1 - local_var_6);
bool local_var_8 = (GB_LAYER_REDUCE_gb_layer_reduce_timestep_cntr > local_var_7);
sc_biguint<8> local_var_11 = 1;
sc_biguint<8> local_var_12 = (flex_gb_layer_reduce_num_vector_1 - local_var_11);
bool local_var_13 = (GB_LAYER_REDUCE_gb_layer_reduce_vector_cntr > local_var_12);
bool local_var_14 = (local_var_8 & local_var_13);
sc_biguint<5> local_var_15 = 15;
bool local_var_16 = (GB_LAYER_REDUCE_gb_layer_reduce_byte_level_cntr == local_var_15);
bool local_var_17 = (GB_LAYER_REDUCE_gb_layer_reduce_byte_level_cntr > local_var_15);
bool local_var_18 = (local_var_16 | local_var_17);
bool local_var_19 = (local_var_14 & local_var_18);
sc_biguint<3> local_var_20 = 5;
bool local_var_21 = (local_var_13 & local_var_18);
sc_biguint<3> local_var_22 = 2;
sc_biguint<3> local_var_23 = 3;
sc_biguint<3> local_var_24 = 4;
auto local_var_25 = (local_var_18) ? local_var_23 : local_var_24;
auto local_var_26 = (local_var_21) ? local_var_22 : local_var_25;
auto local_var_27 = (local_var_19) ? local_var_20 : local_var_26;
auto local_var_27_nxt_holder = local_var_27;
for (auto& it : local_var_0) {
  flex_gb_core_large_buffer[it.first] = it.second;
}
GB_LAYER_REDUCE_gb_layer_reduce_byte_level_cntr = local_var_3_nxt_holder;
flex_gb_layer_reduce_child_state = local_var_27_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_layer_reduce_byte_level_op state updates:" << std::endl;
instr_update_log << "    flex_gb_core_large_buffer get updated" << std::endl;
instr_update_log << "    GB_LAYER_REDUCE_gb_layer_reduce_byte_level_cntr => " << std::hex << "0x" << GB_LAYER_REDUCE_gb_layer_reduce_byte_level_cntr << std::endl; 
instr_update_log << "    flex_gb_layer_reduce_child_state => " << std::hex << "0x" << flex_gb_layer_reduce_child_state << std::endl; 
instr_update_log << std::endl;
#endif
}

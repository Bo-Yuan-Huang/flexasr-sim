#include <flex.h>
bool flex::decode_GB_ATTENTION_CHILD_gb_attention_sfm2_comp3() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_attention_child_valid_flag == local_var_1);
sc_biguint<5> local_var_4 = 14;
bool local_var_5 = (flex_gb_attention_child_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_627 = local_var_6;
return univ_var_627;
}
void flex::update_GB_ATTENTION_CHILD_gb_attention_sfm2_comp3() {
sc_biguint<5> local_var_0 = 15;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<2> local_var_2 = 3;
bool local_var_3 = (GB_ATTENTION_CHILD_gb_attention_softmax_cntr == local_var_2);
bool local_var_4 = (GB_ATTENTION_CHILD_gb_attention_softmax_cntr > local_var_2);
bool local_var_5 = (local_var_3 | local_var_4);
sc_biguint<2> local_var_6 = 0;
sc_biguint<2> local_var_7 = 1;
sc_biguint<2> local_var_8 = (GB_ATTENTION_CHILD_gb_attention_softmax_cntr + local_var_7);
auto local_var_9 = (local_var_5) ? local_var_6 : local_var_8;
auto local_var_9_nxt_holder = local_var_9;
auto local_var_12 = GBAttentionSub(GB_ATTENTION_CHILD_gb_attention_exp_vector_0, GB_ATTENTION_CHILD_gb_attention_max_value);
auto local_var_13 = GBAttentionExp(local_var_12);
auto local_var_15 = GBAttentionDiv(local_var_13, GB_ATTENTION_CHILD_gb_attention_sum_exp);
auto local_var_17 = GBAttentionCompress(local_var_15, flex_gb_attention_adpbias_3);
auto local_var_17_nxt_holder = local_var_17;
auto local_var_19 = GBAttentionSub(GB_ATTENTION_CHILD_gb_attention_exp_vector_1, GB_ATTENTION_CHILD_gb_attention_max_value);
auto local_var_20 = GBAttentionExp(local_var_19);
auto local_var_21 = GBAttentionDiv(local_var_20, GB_ATTENTION_CHILD_gb_attention_sum_exp);
auto local_var_22 = GBAttentionCompress(local_var_21, flex_gb_attention_adpbias_3);
auto local_var_22_nxt_holder = local_var_22;
auto local_var_24 = GBAttentionSub(GB_ATTENTION_CHILD_gb_attention_exp_vector_2, GB_ATTENTION_CHILD_gb_attention_max_value);
auto local_var_25 = GBAttentionExp(local_var_24);
auto local_var_26 = GBAttentionDiv(local_var_25, GB_ATTENTION_CHILD_gb_attention_sum_exp);
auto local_var_27 = GBAttentionCompress(local_var_26, flex_gb_attention_adpbias_3);
auto local_var_27_nxt_holder = local_var_27;
auto local_var_29 = GBAttentionSub(GB_ATTENTION_CHILD_gb_attention_exp_vector_3, GB_ATTENTION_CHILD_gb_attention_max_value);
auto local_var_30 = GBAttentionExp(local_var_29);
auto local_var_31 = GBAttentionDiv(local_var_30, GB_ATTENTION_CHILD_gb_attention_sum_exp);
auto local_var_32 = GBAttentionCompress(local_var_31, flex_gb_attention_adpbias_3);
auto local_var_32_nxt_holder = local_var_32;
flex_gb_attention_child_state = local_var_0_nxt_holder;
GB_ATTENTION_CHILD_gb_attention_softmax_cntr = local_var_9_nxt_holder;
GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_12 = local_var_17_nxt_holder;
GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_13 = local_var_22_nxt_holder;
GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_14 = local_var_27_nxt_holder;
GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_15 = local_var_32_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "gb_attention_sfm2_comp3 state updates:" << std::endl;
instr_update_log << "    flex_gb_attention_child_state => " << std::hex << "0x" << flex_gb_attention_child_state << std::endl; 
instr_update_log << "    GB_ATTENTION_CHILD_gb_attention_softmax_cntr => " << std::hex << "0x" << GB_ATTENTION_CHILD_gb_attention_softmax_cntr << std::endl; 
instr_update_log << "    GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_12 => " << std::hex << "0x" << GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_12 << std::endl; 
instr_update_log << "    GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_13 => " << std::hex << "0x" << GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_13 << std::endl; 
instr_update_log << "    GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_14 => " << std::hex << "0x" << GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_14 << std::endl; 
instr_update_log << "    GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_15 => " << std::hex << "0x" << GB_ATTENTION_CHILD_gb_attention_softmax_result_vector_15 << std::endl; 
instr_update_log << std::endl;
#endif
}

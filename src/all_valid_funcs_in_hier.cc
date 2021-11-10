#include <flex.h>
bool flex::valid_PE0_CORE_RUN_MAC_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE0_CORE_CHILD_pe0_core_child_run_mac_flag == local_var_1);
sc_biguint<5> local_var_4 = 16;
bool local_var_5 = (PE0_CORE_CHILD_pe0_core_child_run_mac_cntr < local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_0 = local_var_6;
return univ_var_0;
}
bool flex::valid_PE0_CORE_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe0_rnn_layer_sizing_is_valid == local_var_1);
auto& univ_var_1 = local_var_2;
return univ_var_1;
}
bool flex::valid_PE1_CORE_RUN_MAC_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE1_CORE_CHILD_pe1_core_child_run_mac_flag == local_var_1);
sc_biguint<5> local_var_4 = 16;
bool local_var_5 = (PE1_CORE_CHILD_pe1_core_child_run_mac_cntr < local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_2 = local_var_6;
return univ_var_2;
}
bool flex::valid_PE1_CORE_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe1_rnn_layer_sizing_is_valid == local_var_1);
auto& univ_var_3 = local_var_2;
return univ_var_3;
}
bool flex::valid_PE2_CORE_RUN_MAC_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE2_CORE_CHILD_pe2_core_child_run_mac_flag == local_var_1);
sc_biguint<5> local_var_4 = 16;
bool local_var_5 = (PE2_CORE_CHILD_pe2_core_child_run_mac_cntr < local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_4 = local_var_6;
return univ_var_4;
}
bool flex::valid_PE2_CORE_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe2_rnn_layer_sizing_is_valid == local_var_1);
auto& univ_var_5 = local_var_2;
return univ_var_5;
}
bool flex::valid_PE3_CORE_RUN_MAC_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE3_CORE_CHILD_pe3_core_child_run_mac_flag == local_var_1);
sc_biguint<5> local_var_4 = 16;
bool local_var_5 = (PE3_CORE_CHILD_pe3_core_child_run_mac_cntr < local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
auto& univ_var_6 = local_var_6;
return univ_var_6;
}
bool flex::valid_PE3_CORE_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe3_rnn_layer_sizing_is_valid == local_var_1);
auto& univ_var_7 = local_var_2;
return univ_var_7;
}
bool flex::valid_PE0_ACT_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe0_act_mngr_is_valid == local_var_1);
auto& univ_var_8 = local_var_2;
return univ_var_8;
}
bool flex::valid_PE1_ACT_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe1_act_mngr_is_valid == local_var_1);
auto& univ_var_9 = local_var_2;
return univ_var_9;
}
bool flex::valid_PE2_ACT_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe2_act_mngr_is_valid == local_var_1);
auto& univ_var_10 = local_var_2;
return univ_var_10;
}
bool flex::valid_PE3_ACT_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe3_act_mngr_is_valid == local_var_1);
auto& univ_var_11 = local_var_2;
return univ_var_11;
}
bool flex::valid_GB_ATTENTION_CHILD() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_attention_child_valid_flag == local_var_1);
auto& univ_var_12 = local_var_2;
return univ_var_12;
}
bool flex::valid_Child_GB_Control() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_control_child_valid_flag == local_var_1);
auto& univ_var_13 = local_var_2;
return univ_var_13;
}
bool flex::valid_Child_GBLayerNorm() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_layer_norm_child_valid_flag == local_var_1);
auto& univ_var_14 = local_var_2;
return univ_var_14;
}
bool flex::valid_GB_LAYER_REDUCE() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_layer_reduce_child_valid_flag == local_var_1);
auto& univ_var_15 = local_var_2;
return univ_var_15;
}
bool flex::valid_Child_GBZeroPadding() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_gb_zero_padding_child_valid_flag == local_var_1);
auto& univ_var_16 = local_var_2;
return univ_var_16;
}
bool flex::valid_flex() {
sc_biguint<1> local_var_2 = (flex_if_axi_wr | flex_if_axi_rd);
sc_biguint<1> local_var_3 = 1;
bool local_var_4 = (local_var_2 == local_var_3);
sc_biguint<32> local_var_6 = 855638016;
bool local_var_7 = (flex_addr_in == local_var_6);
bool local_var_8 = (flex_addr_in > local_var_6);
bool local_var_9 = (local_var_7 | local_var_8);
sc_biguint<32> local_var_10 = 939524095;
bool local_var_11 = (flex_addr_in == local_var_10);
bool local_var_12 = (flex_addr_in < local_var_10);
bool local_var_13 = (local_var_11 | local_var_12);
bool local_var_14 = (local_var_9 & local_var_13);
bool local_var_15 = (local_var_4 & local_var_14);
auto& univ_var_17 = local_var_15;
return univ_var_17;
}

#include <flex.h>
bool flex::decode_PE0_ACT_CHILD_PE0_act_child_op_outgb() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE0_ACT_CHILD_pe0_act_is_start_reg == local_var_1);
sc_biguint<3> local_var_4 = 1;
bool local_var_5 = (PE0_ACT_CHILD_pe0_act_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<4> local_var_8 = 4;
bool local_var_9 = (PE0_ACT_CHILD_pe0_act_op == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
sc_biguint<1> local_var_12 = 0;
bool local_var_13 = (flex_gb_control_data_in_valid == local_var_12);
bool local_var_14 = (local_var_10 & local_var_13);
sc_biguint<3> local_var_16 = 0;
bool local_var_17 = (flex_pe_act_outgb_cntr == local_var_16);
bool local_var_18 = (local_var_14 & local_var_17);
auto& univ_var_187 = local_var_18;
return univ_var_187;
}
void flex::update_PE0_ACT_CHILD_PE0_act_child_op_outgb() {
sc_biguint<2> local_var_1 = 3;
bool local_var_2 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_1);
sc_biguint<4> local_var_4 = 0;
sc_biguint<4> local_var_5 = 0;
sc_biguint<4> local_var_6 = (local_var_4 + local_var_5);
auto local_var_7 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_6];
sc_biguint<2> local_var_8 = 2;
bool local_var_9 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_8);
auto local_var_11 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_6];
sc_biguint<2> local_var_12 = 1;
bool local_var_13 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_12);
auto local_var_15 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_6];
sc_biguint<2> local_var_16 = 0;
bool local_var_17 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_16);
auto local_var_19 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_6];
sc_biguint<20> local_var_20 = 0;
auto local_var_21 = (local_var_17) ? local_var_19 : local_var_20;
auto local_var_22 = (local_var_13) ? local_var_15 : local_var_21;
auto local_var_23 = (local_var_9) ? local_var_11 : local_var_22;
auto local_var_24 = (local_var_2) ? local_var_7 : local_var_23;
auto local_var_26 = Fixed2Adaptfloat(local_var_24, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_26_nxt_holder = local_var_26;
sc_biguint<2> local_var_27 = 3;
bool local_var_28 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_27);
sc_biguint<4> local_var_29 = 1;
sc_biguint<4> local_var_30 = 0;
sc_biguint<4> local_var_31 = (local_var_29 + local_var_30);
auto local_var_32 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_31];
sc_biguint<2> local_var_33 = 2;
bool local_var_34 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_33);
auto local_var_35 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_31];
sc_biguint<2> local_var_36 = 1;
bool local_var_37 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_36);
auto local_var_38 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_31];
sc_biguint<2> local_var_39 = 0;
bool local_var_40 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_39);
auto local_var_41 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_31];
sc_biguint<20> local_var_42 = 0;
auto local_var_43 = (local_var_40) ? local_var_41 : local_var_42;
auto local_var_44 = (local_var_37) ? local_var_38 : local_var_43;
auto local_var_45 = (local_var_34) ? local_var_35 : local_var_44;
auto local_var_46 = (local_var_28) ? local_var_32 : local_var_45;
auto local_var_47 = Fixed2Adaptfloat(local_var_46, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_47_nxt_holder = local_var_47;
sc_biguint<2> local_var_48 = 3;
bool local_var_49 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_48);
sc_biguint<4> local_var_50 = 10;
sc_biguint<4> local_var_51 = 0;
sc_biguint<4> local_var_52 = (local_var_50 + local_var_51);
auto local_var_53 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_52];
sc_biguint<2> local_var_54 = 2;
bool local_var_55 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_54);
auto local_var_56 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_52];
sc_biguint<2> local_var_57 = 1;
bool local_var_58 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_57);
auto local_var_59 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_52];
sc_biguint<2> local_var_60 = 0;
bool local_var_61 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_60);
auto local_var_62 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_52];
sc_biguint<20> local_var_63 = 0;
auto local_var_64 = (local_var_61) ? local_var_62 : local_var_63;
auto local_var_65 = (local_var_58) ? local_var_59 : local_var_64;
auto local_var_66 = (local_var_55) ? local_var_56 : local_var_65;
auto local_var_67 = (local_var_49) ? local_var_53 : local_var_66;
auto local_var_68 = Fixed2Adaptfloat(local_var_67, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_68_nxt_holder = local_var_68;
sc_biguint<2> local_var_69 = 3;
bool local_var_70 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_69);
sc_biguint<4> local_var_71 = 11;
sc_biguint<4> local_var_72 = 0;
sc_biguint<4> local_var_73 = (local_var_71 + local_var_72);
auto local_var_74 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_73];
sc_biguint<2> local_var_75 = 2;
bool local_var_76 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_75);
auto local_var_77 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_73];
sc_biguint<2> local_var_78 = 1;
bool local_var_79 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_78);
auto local_var_80 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_73];
sc_biguint<2> local_var_81 = 0;
bool local_var_82 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_81);
auto local_var_83 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_73];
sc_biguint<20> local_var_84 = 0;
auto local_var_85 = (local_var_82) ? local_var_83 : local_var_84;
auto local_var_86 = (local_var_79) ? local_var_80 : local_var_85;
auto local_var_87 = (local_var_76) ? local_var_77 : local_var_86;
auto local_var_88 = (local_var_70) ? local_var_74 : local_var_87;
auto local_var_89 = Fixed2Adaptfloat(local_var_88, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_89_nxt_holder = local_var_89;
sc_biguint<2> local_var_90 = 3;
bool local_var_91 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_90);
sc_biguint<4> local_var_92 = 12;
sc_biguint<4> local_var_93 = 0;
sc_biguint<4> local_var_94 = (local_var_92 + local_var_93);
auto local_var_95 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_94];
sc_biguint<2> local_var_96 = 2;
bool local_var_97 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_96);
auto local_var_98 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_94];
sc_biguint<2> local_var_99 = 1;
bool local_var_100 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_99);
auto local_var_101 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_94];
sc_biguint<2> local_var_102 = 0;
bool local_var_103 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_102);
auto local_var_104 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_94];
sc_biguint<20> local_var_105 = 0;
auto local_var_106 = (local_var_103) ? local_var_104 : local_var_105;
auto local_var_107 = (local_var_100) ? local_var_101 : local_var_106;
auto local_var_108 = (local_var_97) ? local_var_98 : local_var_107;
auto local_var_109 = (local_var_91) ? local_var_95 : local_var_108;
auto local_var_110 = Fixed2Adaptfloat(local_var_109, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_110_nxt_holder = local_var_110;
sc_biguint<2> local_var_111 = 3;
bool local_var_112 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_111);
sc_biguint<4> local_var_113 = 13;
sc_biguint<4> local_var_114 = 0;
sc_biguint<4> local_var_115 = (local_var_113 + local_var_114);
auto local_var_116 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_115];
sc_biguint<2> local_var_117 = 2;
bool local_var_118 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_117);
auto local_var_119 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_115];
sc_biguint<2> local_var_120 = 1;
bool local_var_121 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_120);
auto local_var_122 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_115];
sc_biguint<2> local_var_123 = 0;
bool local_var_124 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_123);
auto local_var_125 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_115];
sc_biguint<20> local_var_126 = 0;
auto local_var_127 = (local_var_124) ? local_var_125 : local_var_126;
auto local_var_128 = (local_var_121) ? local_var_122 : local_var_127;
auto local_var_129 = (local_var_118) ? local_var_119 : local_var_128;
auto local_var_130 = (local_var_112) ? local_var_116 : local_var_129;
auto local_var_131 = Fixed2Adaptfloat(local_var_130, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_131_nxt_holder = local_var_131;
sc_biguint<2> local_var_132 = 3;
bool local_var_133 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_132);
sc_biguint<4> local_var_134 = 14;
sc_biguint<4> local_var_135 = 0;
sc_biguint<4> local_var_136 = (local_var_134 + local_var_135);
auto local_var_137 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_136];
sc_biguint<2> local_var_138 = 2;
bool local_var_139 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_138);
auto local_var_140 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_136];
sc_biguint<2> local_var_141 = 1;
bool local_var_142 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_141);
auto local_var_143 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_136];
sc_biguint<2> local_var_144 = 0;
bool local_var_145 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_144);
auto local_var_146 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_136];
sc_biguint<20> local_var_147 = 0;
auto local_var_148 = (local_var_145) ? local_var_146 : local_var_147;
auto local_var_149 = (local_var_142) ? local_var_143 : local_var_148;
auto local_var_150 = (local_var_139) ? local_var_140 : local_var_149;
auto local_var_151 = (local_var_133) ? local_var_137 : local_var_150;
auto local_var_152 = Fixed2Adaptfloat(local_var_151, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_152_nxt_holder = local_var_152;
sc_biguint<2> local_var_153 = 3;
bool local_var_154 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_153);
sc_biguint<4> local_var_155 = 15;
sc_biguint<4> local_var_156 = 0;
sc_biguint<4> local_var_157 = (local_var_155 + local_var_156);
auto local_var_158 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_157];
sc_biguint<2> local_var_159 = 2;
bool local_var_160 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_159);
auto local_var_161 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_157];
sc_biguint<2> local_var_162 = 1;
bool local_var_163 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_162);
auto local_var_164 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_157];
sc_biguint<2> local_var_165 = 0;
bool local_var_166 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_165);
auto local_var_167 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_157];
sc_biguint<20> local_var_168 = 0;
auto local_var_169 = (local_var_166) ? local_var_167 : local_var_168;
auto local_var_170 = (local_var_163) ? local_var_164 : local_var_169;
auto local_var_171 = (local_var_160) ? local_var_161 : local_var_170;
auto local_var_172 = (local_var_154) ? local_var_158 : local_var_171;
auto local_var_173 = Fixed2Adaptfloat(local_var_172, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_173_nxt_holder = local_var_173;
sc_biguint<2> local_var_174 = 3;
bool local_var_175 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_174);
sc_biguint<4> local_var_176 = 2;
sc_biguint<4> local_var_177 = 0;
sc_biguint<4> local_var_178 = (local_var_176 + local_var_177);
auto local_var_179 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_178];
sc_biguint<2> local_var_180 = 2;
bool local_var_181 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_180);
auto local_var_182 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_178];
sc_biguint<2> local_var_183 = 1;
bool local_var_184 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_183);
auto local_var_185 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_178];
sc_biguint<2> local_var_186 = 0;
bool local_var_187 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_186);
auto local_var_188 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_178];
sc_biguint<20> local_var_189 = 0;
auto local_var_190 = (local_var_187) ? local_var_188 : local_var_189;
auto local_var_191 = (local_var_184) ? local_var_185 : local_var_190;
auto local_var_192 = (local_var_181) ? local_var_182 : local_var_191;
auto local_var_193 = (local_var_175) ? local_var_179 : local_var_192;
auto local_var_194 = Fixed2Adaptfloat(local_var_193, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_194_nxt_holder = local_var_194;
sc_biguint<2> local_var_195 = 3;
bool local_var_196 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_195);
sc_biguint<4> local_var_197 = 3;
sc_biguint<4> local_var_198 = 0;
sc_biguint<4> local_var_199 = (local_var_197 + local_var_198);
auto local_var_200 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_199];
sc_biguint<2> local_var_201 = 2;
bool local_var_202 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_201);
auto local_var_203 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_199];
sc_biguint<2> local_var_204 = 1;
bool local_var_205 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_204);
auto local_var_206 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_199];
sc_biguint<2> local_var_207 = 0;
bool local_var_208 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_207);
auto local_var_209 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_199];
sc_biguint<20> local_var_210 = 0;
auto local_var_211 = (local_var_208) ? local_var_209 : local_var_210;
auto local_var_212 = (local_var_205) ? local_var_206 : local_var_211;
auto local_var_213 = (local_var_202) ? local_var_203 : local_var_212;
auto local_var_214 = (local_var_196) ? local_var_200 : local_var_213;
auto local_var_215 = Fixed2Adaptfloat(local_var_214, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_215_nxt_holder = local_var_215;
sc_biguint<2> local_var_216 = 3;
bool local_var_217 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_216);
sc_biguint<4> local_var_218 = 4;
sc_biguint<4> local_var_219 = 0;
sc_biguint<4> local_var_220 = (local_var_218 + local_var_219);
auto local_var_221 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_220];
sc_biguint<2> local_var_222 = 2;
bool local_var_223 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_222);
auto local_var_224 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_220];
sc_biguint<2> local_var_225 = 1;
bool local_var_226 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_225);
auto local_var_227 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_220];
sc_biguint<2> local_var_228 = 0;
bool local_var_229 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_228);
auto local_var_230 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_220];
sc_biguint<20> local_var_231 = 0;
auto local_var_232 = (local_var_229) ? local_var_230 : local_var_231;
auto local_var_233 = (local_var_226) ? local_var_227 : local_var_232;
auto local_var_234 = (local_var_223) ? local_var_224 : local_var_233;
auto local_var_235 = (local_var_217) ? local_var_221 : local_var_234;
auto local_var_236 = Fixed2Adaptfloat(local_var_235, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_236_nxt_holder = local_var_236;
sc_biguint<2> local_var_237 = 3;
bool local_var_238 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_237);
sc_biguint<4> local_var_239 = 5;
sc_biguint<4> local_var_240 = 0;
sc_biguint<4> local_var_241 = (local_var_239 + local_var_240);
auto local_var_242 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_241];
sc_biguint<2> local_var_243 = 2;
bool local_var_244 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_243);
auto local_var_245 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_241];
sc_biguint<2> local_var_246 = 1;
bool local_var_247 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_246);
auto local_var_248 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_241];
sc_biguint<2> local_var_249 = 0;
bool local_var_250 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_249);
auto local_var_251 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_241];
sc_biguint<20> local_var_252 = 0;
auto local_var_253 = (local_var_250) ? local_var_251 : local_var_252;
auto local_var_254 = (local_var_247) ? local_var_248 : local_var_253;
auto local_var_255 = (local_var_244) ? local_var_245 : local_var_254;
auto local_var_256 = (local_var_238) ? local_var_242 : local_var_255;
auto local_var_257 = Fixed2Adaptfloat(local_var_256, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_257_nxt_holder = local_var_257;
sc_biguint<2> local_var_258 = 3;
bool local_var_259 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_258);
sc_biguint<4> local_var_260 = 6;
sc_biguint<4> local_var_261 = 0;
sc_biguint<4> local_var_262 = (local_var_260 + local_var_261);
auto local_var_263 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_262];
sc_biguint<2> local_var_264 = 2;
bool local_var_265 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_264);
auto local_var_266 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_262];
sc_biguint<2> local_var_267 = 1;
bool local_var_268 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_267);
auto local_var_269 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_262];
sc_biguint<2> local_var_270 = 0;
bool local_var_271 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_270);
auto local_var_272 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_262];
sc_biguint<20> local_var_273 = 0;
auto local_var_274 = (local_var_271) ? local_var_272 : local_var_273;
auto local_var_275 = (local_var_268) ? local_var_269 : local_var_274;
auto local_var_276 = (local_var_265) ? local_var_266 : local_var_275;
auto local_var_277 = (local_var_259) ? local_var_263 : local_var_276;
auto local_var_278 = Fixed2Adaptfloat(local_var_277, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_278_nxt_holder = local_var_278;
sc_biguint<2> local_var_279 = 3;
bool local_var_280 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_279);
sc_biguint<4> local_var_281 = 7;
sc_biguint<4> local_var_282 = 0;
sc_biguint<4> local_var_283 = (local_var_281 + local_var_282);
auto local_var_284 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_283];
sc_biguint<2> local_var_285 = 2;
bool local_var_286 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_285);
auto local_var_287 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_283];
sc_biguint<2> local_var_288 = 1;
bool local_var_289 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_288);
auto local_var_290 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_283];
sc_biguint<2> local_var_291 = 0;
bool local_var_292 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_291);
auto local_var_293 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_283];
sc_biguint<20> local_var_294 = 0;
auto local_var_295 = (local_var_292) ? local_var_293 : local_var_294;
auto local_var_296 = (local_var_289) ? local_var_290 : local_var_295;
auto local_var_297 = (local_var_286) ? local_var_287 : local_var_296;
auto local_var_298 = (local_var_280) ? local_var_284 : local_var_297;
auto local_var_299 = Fixed2Adaptfloat(local_var_298, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_299_nxt_holder = local_var_299;
sc_biguint<2> local_var_300 = 3;
bool local_var_301 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_300);
sc_biguint<4> local_var_302 = 8;
sc_biguint<4> local_var_303 = 0;
sc_biguint<4> local_var_304 = (local_var_302 + local_var_303);
auto local_var_305 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_304];
sc_biguint<2> local_var_306 = 2;
bool local_var_307 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_306);
auto local_var_308 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_304];
sc_biguint<2> local_var_309 = 1;
bool local_var_310 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_309);
auto local_var_311 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_304];
sc_biguint<2> local_var_312 = 0;
bool local_var_313 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_312);
auto local_var_314 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_304];
sc_biguint<20> local_var_315 = 0;
auto local_var_316 = (local_var_313) ? local_var_314 : local_var_315;
auto local_var_317 = (local_var_310) ? local_var_311 : local_var_316;
auto local_var_318 = (local_var_307) ? local_var_308 : local_var_317;
auto local_var_319 = (local_var_301) ? local_var_305 : local_var_318;
auto local_var_320 = Fixed2Adaptfloat(local_var_319, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_320_nxt_holder = local_var_320;
sc_biguint<2> local_var_321 = 3;
bool local_var_322 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_321);
sc_biguint<4> local_var_323 = 9;
sc_biguint<4> local_var_324 = 0;
sc_biguint<4> local_var_325 = (local_var_323 + local_var_324);
auto local_var_326 = PE0_ACT_CHILD_PE0_act_regs_3[local_var_325];
sc_biguint<2> local_var_327 = 2;
bool local_var_328 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_327);
auto local_var_329 = PE0_ACT_CHILD_PE0_act_regs_2[local_var_325];
sc_biguint<2> local_var_330 = 1;
bool local_var_331 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_330);
auto local_var_332 = PE0_ACT_CHILD_PE0_act_regs_1[local_var_325];
sc_biguint<2> local_var_333 = 0;
bool local_var_334 = (PE0_ACT_CHILD_pe0_act_reg_a2 == local_var_333);
auto local_var_335 = PE0_ACT_CHILD_PE0_act_regs_0[local_var_325];
sc_biguint<20> local_var_336 = 0;
auto local_var_337 = (local_var_334) ? local_var_335 : local_var_336;
auto local_var_338 = (local_var_331) ? local_var_332 : local_var_337;
auto local_var_339 = (local_var_328) ? local_var_329 : local_var_338;
auto local_var_340 = (local_var_322) ? local_var_326 : local_var_339;
auto local_var_341 = Fixed2Adaptfloat(local_var_340, flex_pe0_act_mngr_adpfloat_bias);
auto local_var_341_nxt_holder = local_var_341;
sc_biguint<8> local_var_344 = (PE0_ACT_CHILD_pe0_act_output_counter + flex_pe0_act_mngr_output_addr_base);
auto local_var_344_nxt_holder = local_var_344;
sc_biguint<1> local_var_345 = 1;
auto local_var_345_nxt_holder = local_var_345;
sc_biguint<3> local_var_346 = 2;
auto local_var_346_nxt_holder = local_var_346;
sc_biguint<3> local_var_348 = 3;
bool local_var_349 = (flex_pe_act_outgb_cntr == local_var_348);
bool local_var_350 = (flex_pe_act_outgb_cntr > local_var_348);
bool local_var_351 = (local_var_349 | local_var_350);
sc_biguint<3> local_var_352 = 0;
sc_biguint<3> local_var_353 = 1;
sc_biguint<3> local_var_354 = (flex_pe_act_outgb_cntr + local_var_353);
auto local_var_355 = (local_var_351) ? local_var_352 : local_var_354;
auto local_var_355_nxt_holder = local_var_355;
flex_gb_control_data_in_0 = local_var_26_nxt_holder;
flex_gb_control_data_in_1 = local_var_47_nxt_holder;
flex_gb_control_data_in_10 = local_var_68_nxt_holder;
flex_gb_control_data_in_11 = local_var_89_nxt_holder;
flex_gb_control_data_in_12 = local_var_110_nxt_holder;
flex_gb_control_data_in_13 = local_var_131_nxt_holder;
flex_gb_control_data_in_14 = local_var_152_nxt_holder;
flex_gb_control_data_in_15 = local_var_173_nxt_holder;
flex_gb_control_data_in_2 = local_var_194_nxt_holder;
flex_gb_control_data_in_3 = local_var_215_nxt_holder;
flex_gb_control_data_in_4 = local_var_236_nxt_holder;
flex_gb_control_data_in_5 = local_var_257_nxt_holder;
flex_gb_control_data_in_6 = local_var_278_nxt_holder;
flex_gb_control_data_in_7 = local_var_299_nxt_holder;
flex_gb_control_data_in_8 = local_var_320_nxt_holder;
flex_gb_control_data_in_9 = local_var_341_nxt_holder;
flex_gb_control_data_in_addr = local_var_344_nxt_holder;
flex_gb_control_data_in_valid = local_var_345_nxt_holder;
PE0_ACT_CHILD_pe0_act_state = local_var_346_nxt_holder;
flex_pe_act_outgb_cntr = local_var_355_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE0_act_child_op_outgb state updates:" << std::endl;
instr_update_log << "    flex_gb_control_data_in_0 => " << std::hex << "0x" << flex_gb_control_data_in_0 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_1 => " << std::hex << "0x" << flex_gb_control_data_in_1 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_10 => " << std::hex << "0x" << flex_gb_control_data_in_10 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_11 => " << std::hex << "0x" << flex_gb_control_data_in_11 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_12 => " << std::hex << "0x" << flex_gb_control_data_in_12 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_13 => " << std::hex << "0x" << flex_gb_control_data_in_13 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_14 => " << std::hex << "0x" << flex_gb_control_data_in_14 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_15 => " << std::hex << "0x" << flex_gb_control_data_in_15 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_2 => " << std::hex << "0x" << flex_gb_control_data_in_2 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_3 => " << std::hex << "0x" << flex_gb_control_data_in_3 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_4 => " << std::hex << "0x" << flex_gb_control_data_in_4 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_5 => " << std::hex << "0x" << flex_gb_control_data_in_5 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_6 => " << std::hex << "0x" << flex_gb_control_data_in_6 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_7 => " << std::hex << "0x" << flex_gb_control_data_in_7 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_8 => " << std::hex << "0x" << flex_gb_control_data_in_8 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_9 => " << std::hex << "0x" << flex_gb_control_data_in_9 << std::endl; 
instr_update_log << "    flex_gb_control_data_in_addr => " << std::hex << "0x" << flex_gb_control_data_in_addr << std::endl; 
instr_update_log << "    flex_gb_control_data_in_valid => " << std::hex << "0x" << flex_gb_control_data_in_valid << std::endl; 
instr_update_log << "    PE0_ACT_CHILD_pe0_act_state => " << std::hex << "0x" << PE0_ACT_CHILD_pe0_act_state << std::endl; 
instr_update_log << "    flex_pe_act_outgb_cntr => " << std::hex << "0x" << flex_pe_act_outgb_cntr << std::endl; 
instr_update_log << std::endl;
#endif
}

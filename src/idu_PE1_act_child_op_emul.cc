#include <flex.h>
bool flex::decode_PE1_ACT_CHILD_PE1_act_child_op_emul() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE1_ACT_CHILD_pe1_act_is_start_reg == local_var_1);
sc_biguint<3> local_var_4 = 1;
bool local_var_5 = (PE1_ACT_CHILD_pe1_act_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<4> local_var_8 = 9;
bool local_var_9 = (PE1_ACT_CHILD_pe1_act_op == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
auto& univ_var_280 = local_var_10;
return univ_var_280;
}
void flex::update_PE1_ACT_CHILD_PE1_act_child_op_emul() {
sc_biguint<2> local_var_1 = 3;
bool local_var_2 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_1);
sc_biguint<4> local_var_4 = 0;
sc_biguint<4> local_var_5 = 0;
sc_biguint<4> local_var_6 = (local_var_4 + local_var_5);
auto local_var_7 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_6];
sc_biguint<2> local_var_8 = 2;
bool local_var_9 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_8);
auto local_var_11 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_6];
sc_biguint<2> local_var_12 = 1;
bool local_var_13 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_12);
auto local_var_15 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_6];
sc_biguint<2> local_var_16 = 0;
bool local_var_17 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_16);
auto local_var_19 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_6];
sc_biguint<20> local_var_20 = 0;
auto local_var_21 = (local_var_17) ? local_var_19 : local_var_20;
auto local_var_22 = (local_var_13) ? local_var_15 : local_var_21;
auto local_var_23 = (local_var_9) ? local_var_11 : local_var_22;
auto local_var_24 = (local_var_2) ? local_var_7 : local_var_23;
sc_biguint<2> local_var_26 = 3;
bool local_var_27 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_26);
auto local_var_28 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_6];
sc_biguint<2> local_var_29 = 2;
bool local_var_30 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_29);
auto local_var_31 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_6];
sc_biguint<2> local_var_32 = 1;
bool local_var_33 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_32);
auto local_var_34 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_6];
sc_biguint<2> local_var_35 = 0;
bool local_var_36 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_35);
auto local_var_37 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_6];
sc_biguint<20> local_var_38 = 0;
auto local_var_39 = (local_var_36) ? local_var_37 : local_var_38;
auto local_var_40 = (local_var_33) ? local_var_34 : local_var_39;
auto local_var_41 = (local_var_30) ? local_var_31 : local_var_40;
auto local_var_42 = (local_var_27) ? local_var_28 : local_var_41;
auto local_var_43 = PEActEmul(local_var_24, local_var_42);
auto local_var_43_nxt_holder = local_var_43;
sc_biguint<2> local_var_44 = 3;
bool local_var_45 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_44);
sc_biguint<4> local_var_46 = 1;
sc_biguint<4> local_var_47 = 0;
sc_biguint<4> local_var_48 = (local_var_46 + local_var_47);
auto local_var_49 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_48];
sc_biguint<2> local_var_50 = 2;
bool local_var_51 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_50);
auto local_var_52 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_48];
sc_biguint<2> local_var_53 = 1;
bool local_var_54 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_53);
auto local_var_55 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_48];
sc_biguint<2> local_var_56 = 0;
bool local_var_57 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_56);
auto local_var_58 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_48];
sc_biguint<20> local_var_59 = 0;
auto local_var_60 = (local_var_57) ? local_var_58 : local_var_59;
auto local_var_61 = (local_var_54) ? local_var_55 : local_var_60;
auto local_var_62 = (local_var_51) ? local_var_52 : local_var_61;
auto local_var_63 = (local_var_45) ? local_var_49 : local_var_62;
sc_biguint<2> local_var_64 = 3;
bool local_var_65 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_64);
auto local_var_66 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_48];
sc_biguint<2> local_var_67 = 2;
bool local_var_68 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_67);
auto local_var_69 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_48];
sc_biguint<2> local_var_70 = 1;
bool local_var_71 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_70);
auto local_var_72 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_48];
sc_biguint<2> local_var_73 = 0;
bool local_var_74 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_73);
auto local_var_75 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_48];
sc_biguint<20> local_var_76 = 0;
auto local_var_77 = (local_var_74) ? local_var_75 : local_var_76;
auto local_var_78 = (local_var_71) ? local_var_72 : local_var_77;
auto local_var_79 = (local_var_68) ? local_var_69 : local_var_78;
auto local_var_80 = (local_var_65) ? local_var_66 : local_var_79;
auto local_var_81 = PEActEmul(local_var_63, local_var_80);
auto local_var_81_nxt_holder = local_var_81;
sc_biguint<2> local_var_82 = 3;
bool local_var_83 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_82);
sc_biguint<4> local_var_84 = 10;
sc_biguint<4> local_var_85 = 0;
sc_biguint<4> local_var_86 = (local_var_84 + local_var_85);
auto local_var_87 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_86];
sc_biguint<2> local_var_88 = 2;
bool local_var_89 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_88);
auto local_var_90 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_86];
sc_biguint<2> local_var_91 = 1;
bool local_var_92 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_91);
auto local_var_93 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_86];
sc_biguint<2> local_var_94 = 0;
bool local_var_95 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_94);
auto local_var_96 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_86];
sc_biguint<20> local_var_97 = 0;
auto local_var_98 = (local_var_95) ? local_var_96 : local_var_97;
auto local_var_99 = (local_var_92) ? local_var_93 : local_var_98;
auto local_var_100 = (local_var_89) ? local_var_90 : local_var_99;
auto local_var_101 = (local_var_83) ? local_var_87 : local_var_100;
sc_biguint<2> local_var_102 = 3;
bool local_var_103 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_102);
auto local_var_104 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_86];
sc_biguint<2> local_var_105 = 2;
bool local_var_106 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_105);
auto local_var_107 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_86];
sc_biguint<2> local_var_108 = 1;
bool local_var_109 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_108);
auto local_var_110 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_86];
sc_biguint<2> local_var_111 = 0;
bool local_var_112 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_111);
auto local_var_113 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_86];
sc_biguint<20> local_var_114 = 0;
auto local_var_115 = (local_var_112) ? local_var_113 : local_var_114;
auto local_var_116 = (local_var_109) ? local_var_110 : local_var_115;
auto local_var_117 = (local_var_106) ? local_var_107 : local_var_116;
auto local_var_118 = (local_var_103) ? local_var_104 : local_var_117;
auto local_var_119 = PEActEmul(local_var_101, local_var_118);
auto local_var_119_nxt_holder = local_var_119;
sc_biguint<2> local_var_120 = 3;
bool local_var_121 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_120);
sc_biguint<4> local_var_122 = 11;
sc_biguint<4> local_var_123 = 0;
sc_biguint<4> local_var_124 = (local_var_122 + local_var_123);
auto local_var_125 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_124];
sc_biguint<2> local_var_126 = 2;
bool local_var_127 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_126);
auto local_var_128 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_124];
sc_biguint<2> local_var_129 = 1;
bool local_var_130 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_129);
auto local_var_131 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_124];
sc_biguint<2> local_var_132 = 0;
bool local_var_133 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_132);
auto local_var_134 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_124];
sc_biguint<20> local_var_135 = 0;
auto local_var_136 = (local_var_133) ? local_var_134 : local_var_135;
auto local_var_137 = (local_var_130) ? local_var_131 : local_var_136;
auto local_var_138 = (local_var_127) ? local_var_128 : local_var_137;
auto local_var_139 = (local_var_121) ? local_var_125 : local_var_138;
sc_biguint<2> local_var_140 = 3;
bool local_var_141 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_140);
auto local_var_142 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_124];
sc_biguint<2> local_var_143 = 2;
bool local_var_144 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_143);
auto local_var_145 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_124];
sc_biguint<2> local_var_146 = 1;
bool local_var_147 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_146);
auto local_var_148 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_124];
sc_biguint<2> local_var_149 = 0;
bool local_var_150 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_149);
auto local_var_151 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_124];
sc_biguint<20> local_var_152 = 0;
auto local_var_153 = (local_var_150) ? local_var_151 : local_var_152;
auto local_var_154 = (local_var_147) ? local_var_148 : local_var_153;
auto local_var_155 = (local_var_144) ? local_var_145 : local_var_154;
auto local_var_156 = (local_var_141) ? local_var_142 : local_var_155;
auto local_var_157 = PEActEmul(local_var_139, local_var_156);
auto local_var_157_nxt_holder = local_var_157;
sc_biguint<2> local_var_158 = 3;
bool local_var_159 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_158);
sc_biguint<4> local_var_160 = 12;
sc_biguint<4> local_var_161 = 0;
sc_biguint<4> local_var_162 = (local_var_160 + local_var_161);
auto local_var_163 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_162];
sc_biguint<2> local_var_164 = 2;
bool local_var_165 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_164);
auto local_var_166 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_162];
sc_biguint<2> local_var_167 = 1;
bool local_var_168 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_167);
auto local_var_169 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_162];
sc_biguint<2> local_var_170 = 0;
bool local_var_171 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_170);
auto local_var_172 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_162];
sc_biguint<20> local_var_173 = 0;
auto local_var_174 = (local_var_171) ? local_var_172 : local_var_173;
auto local_var_175 = (local_var_168) ? local_var_169 : local_var_174;
auto local_var_176 = (local_var_165) ? local_var_166 : local_var_175;
auto local_var_177 = (local_var_159) ? local_var_163 : local_var_176;
sc_biguint<2> local_var_178 = 3;
bool local_var_179 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_178);
auto local_var_180 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_162];
sc_biguint<2> local_var_181 = 2;
bool local_var_182 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_181);
auto local_var_183 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_162];
sc_biguint<2> local_var_184 = 1;
bool local_var_185 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_184);
auto local_var_186 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_162];
sc_biguint<2> local_var_187 = 0;
bool local_var_188 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_187);
auto local_var_189 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_162];
sc_biguint<20> local_var_190 = 0;
auto local_var_191 = (local_var_188) ? local_var_189 : local_var_190;
auto local_var_192 = (local_var_185) ? local_var_186 : local_var_191;
auto local_var_193 = (local_var_182) ? local_var_183 : local_var_192;
auto local_var_194 = (local_var_179) ? local_var_180 : local_var_193;
auto local_var_195 = PEActEmul(local_var_177, local_var_194);
auto local_var_195_nxt_holder = local_var_195;
sc_biguint<2> local_var_196 = 3;
bool local_var_197 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_196);
sc_biguint<4> local_var_198 = 13;
sc_biguint<4> local_var_199 = 0;
sc_biguint<4> local_var_200 = (local_var_198 + local_var_199);
auto local_var_201 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_200];
sc_biguint<2> local_var_202 = 2;
bool local_var_203 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_202);
auto local_var_204 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_200];
sc_biguint<2> local_var_205 = 1;
bool local_var_206 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_205);
auto local_var_207 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_200];
sc_biguint<2> local_var_208 = 0;
bool local_var_209 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_208);
auto local_var_210 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_200];
sc_biguint<20> local_var_211 = 0;
auto local_var_212 = (local_var_209) ? local_var_210 : local_var_211;
auto local_var_213 = (local_var_206) ? local_var_207 : local_var_212;
auto local_var_214 = (local_var_203) ? local_var_204 : local_var_213;
auto local_var_215 = (local_var_197) ? local_var_201 : local_var_214;
sc_biguint<2> local_var_216 = 3;
bool local_var_217 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_216);
auto local_var_218 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_200];
sc_biguint<2> local_var_219 = 2;
bool local_var_220 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_219);
auto local_var_221 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_200];
sc_biguint<2> local_var_222 = 1;
bool local_var_223 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_222);
auto local_var_224 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_200];
sc_biguint<2> local_var_225 = 0;
bool local_var_226 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_225);
auto local_var_227 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_200];
sc_biguint<20> local_var_228 = 0;
auto local_var_229 = (local_var_226) ? local_var_227 : local_var_228;
auto local_var_230 = (local_var_223) ? local_var_224 : local_var_229;
auto local_var_231 = (local_var_220) ? local_var_221 : local_var_230;
auto local_var_232 = (local_var_217) ? local_var_218 : local_var_231;
auto local_var_233 = PEActEmul(local_var_215, local_var_232);
auto local_var_233_nxt_holder = local_var_233;
sc_biguint<2> local_var_234 = 3;
bool local_var_235 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_234);
sc_biguint<4> local_var_236 = 14;
sc_biguint<4> local_var_237 = 0;
sc_biguint<4> local_var_238 = (local_var_236 + local_var_237);
auto local_var_239 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_238];
sc_biguint<2> local_var_240 = 2;
bool local_var_241 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_240);
auto local_var_242 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_238];
sc_biguint<2> local_var_243 = 1;
bool local_var_244 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_243);
auto local_var_245 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_238];
sc_biguint<2> local_var_246 = 0;
bool local_var_247 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_246);
auto local_var_248 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_238];
sc_biguint<20> local_var_249 = 0;
auto local_var_250 = (local_var_247) ? local_var_248 : local_var_249;
auto local_var_251 = (local_var_244) ? local_var_245 : local_var_250;
auto local_var_252 = (local_var_241) ? local_var_242 : local_var_251;
auto local_var_253 = (local_var_235) ? local_var_239 : local_var_252;
sc_biguint<2> local_var_254 = 3;
bool local_var_255 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_254);
auto local_var_256 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_238];
sc_biguint<2> local_var_257 = 2;
bool local_var_258 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_257);
auto local_var_259 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_238];
sc_biguint<2> local_var_260 = 1;
bool local_var_261 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_260);
auto local_var_262 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_238];
sc_biguint<2> local_var_263 = 0;
bool local_var_264 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_263);
auto local_var_265 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_238];
sc_biguint<20> local_var_266 = 0;
auto local_var_267 = (local_var_264) ? local_var_265 : local_var_266;
auto local_var_268 = (local_var_261) ? local_var_262 : local_var_267;
auto local_var_269 = (local_var_258) ? local_var_259 : local_var_268;
auto local_var_270 = (local_var_255) ? local_var_256 : local_var_269;
auto local_var_271 = PEActEmul(local_var_253, local_var_270);
auto local_var_271_nxt_holder = local_var_271;
sc_biguint<2> local_var_272 = 3;
bool local_var_273 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_272);
sc_biguint<4> local_var_274 = 15;
sc_biguint<4> local_var_275 = 0;
sc_biguint<4> local_var_276 = (local_var_274 + local_var_275);
auto local_var_277 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_276];
sc_biguint<2> local_var_278 = 2;
bool local_var_279 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_278);
auto local_var_280 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_276];
sc_biguint<2> local_var_281 = 1;
bool local_var_282 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_281);
auto local_var_283 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_276];
sc_biguint<2> local_var_284 = 0;
bool local_var_285 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_284);
auto local_var_286 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_276];
sc_biguint<20> local_var_287 = 0;
auto local_var_288 = (local_var_285) ? local_var_286 : local_var_287;
auto local_var_289 = (local_var_282) ? local_var_283 : local_var_288;
auto local_var_290 = (local_var_279) ? local_var_280 : local_var_289;
auto local_var_291 = (local_var_273) ? local_var_277 : local_var_290;
sc_biguint<2> local_var_292 = 3;
bool local_var_293 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_292);
auto local_var_294 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_276];
sc_biguint<2> local_var_295 = 2;
bool local_var_296 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_295);
auto local_var_297 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_276];
sc_biguint<2> local_var_298 = 1;
bool local_var_299 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_298);
auto local_var_300 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_276];
sc_biguint<2> local_var_301 = 0;
bool local_var_302 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_301);
auto local_var_303 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_276];
sc_biguint<20> local_var_304 = 0;
auto local_var_305 = (local_var_302) ? local_var_303 : local_var_304;
auto local_var_306 = (local_var_299) ? local_var_300 : local_var_305;
auto local_var_307 = (local_var_296) ? local_var_297 : local_var_306;
auto local_var_308 = (local_var_293) ? local_var_294 : local_var_307;
auto local_var_309 = PEActEmul(local_var_291, local_var_308);
auto local_var_309_nxt_holder = local_var_309;
sc_biguint<2> local_var_310 = 3;
bool local_var_311 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_310);
sc_biguint<4> local_var_312 = 2;
sc_biguint<4> local_var_313 = 0;
sc_biguint<4> local_var_314 = (local_var_312 + local_var_313);
auto local_var_315 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_314];
sc_biguint<2> local_var_316 = 2;
bool local_var_317 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_316);
auto local_var_318 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_314];
sc_biguint<2> local_var_319 = 1;
bool local_var_320 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_319);
auto local_var_321 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_314];
sc_biguint<2> local_var_322 = 0;
bool local_var_323 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_322);
auto local_var_324 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_314];
sc_biguint<20> local_var_325 = 0;
auto local_var_326 = (local_var_323) ? local_var_324 : local_var_325;
auto local_var_327 = (local_var_320) ? local_var_321 : local_var_326;
auto local_var_328 = (local_var_317) ? local_var_318 : local_var_327;
auto local_var_329 = (local_var_311) ? local_var_315 : local_var_328;
sc_biguint<2> local_var_330 = 3;
bool local_var_331 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_330);
auto local_var_332 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_314];
sc_biguint<2> local_var_333 = 2;
bool local_var_334 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_333);
auto local_var_335 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_314];
sc_biguint<2> local_var_336 = 1;
bool local_var_337 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_336);
auto local_var_338 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_314];
sc_biguint<2> local_var_339 = 0;
bool local_var_340 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_339);
auto local_var_341 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_314];
sc_biguint<20> local_var_342 = 0;
auto local_var_343 = (local_var_340) ? local_var_341 : local_var_342;
auto local_var_344 = (local_var_337) ? local_var_338 : local_var_343;
auto local_var_345 = (local_var_334) ? local_var_335 : local_var_344;
auto local_var_346 = (local_var_331) ? local_var_332 : local_var_345;
auto local_var_347 = PEActEmul(local_var_329, local_var_346);
auto local_var_347_nxt_holder = local_var_347;
sc_biguint<2> local_var_348 = 3;
bool local_var_349 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_348);
sc_biguint<4> local_var_350 = 3;
sc_biguint<4> local_var_351 = 0;
sc_biguint<4> local_var_352 = (local_var_350 + local_var_351);
auto local_var_353 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_352];
sc_biguint<2> local_var_354 = 2;
bool local_var_355 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_354);
auto local_var_356 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_352];
sc_biguint<2> local_var_357 = 1;
bool local_var_358 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_357);
auto local_var_359 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_352];
sc_biguint<2> local_var_360 = 0;
bool local_var_361 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_360);
auto local_var_362 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_352];
sc_biguint<20> local_var_363 = 0;
auto local_var_364 = (local_var_361) ? local_var_362 : local_var_363;
auto local_var_365 = (local_var_358) ? local_var_359 : local_var_364;
auto local_var_366 = (local_var_355) ? local_var_356 : local_var_365;
auto local_var_367 = (local_var_349) ? local_var_353 : local_var_366;
sc_biguint<2> local_var_368 = 3;
bool local_var_369 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_368);
auto local_var_370 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_352];
sc_biguint<2> local_var_371 = 2;
bool local_var_372 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_371);
auto local_var_373 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_352];
sc_biguint<2> local_var_374 = 1;
bool local_var_375 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_374);
auto local_var_376 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_352];
sc_biguint<2> local_var_377 = 0;
bool local_var_378 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_377);
auto local_var_379 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_352];
sc_biguint<20> local_var_380 = 0;
auto local_var_381 = (local_var_378) ? local_var_379 : local_var_380;
auto local_var_382 = (local_var_375) ? local_var_376 : local_var_381;
auto local_var_383 = (local_var_372) ? local_var_373 : local_var_382;
auto local_var_384 = (local_var_369) ? local_var_370 : local_var_383;
auto local_var_385 = PEActEmul(local_var_367, local_var_384);
auto local_var_385_nxt_holder = local_var_385;
sc_biguint<2> local_var_386 = 3;
bool local_var_387 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_386);
sc_biguint<4> local_var_388 = 4;
sc_biguint<4> local_var_389 = 0;
sc_biguint<4> local_var_390 = (local_var_388 + local_var_389);
auto local_var_391 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_390];
sc_biguint<2> local_var_392 = 2;
bool local_var_393 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_392);
auto local_var_394 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_390];
sc_biguint<2> local_var_395 = 1;
bool local_var_396 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_395);
auto local_var_397 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_390];
sc_biguint<2> local_var_398 = 0;
bool local_var_399 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_398);
auto local_var_400 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_390];
sc_biguint<20> local_var_401 = 0;
auto local_var_402 = (local_var_399) ? local_var_400 : local_var_401;
auto local_var_403 = (local_var_396) ? local_var_397 : local_var_402;
auto local_var_404 = (local_var_393) ? local_var_394 : local_var_403;
auto local_var_405 = (local_var_387) ? local_var_391 : local_var_404;
sc_biguint<2> local_var_406 = 3;
bool local_var_407 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_406);
auto local_var_408 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_390];
sc_biguint<2> local_var_409 = 2;
bool local_var_410 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_409);
auto local_var_411 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_390];
sc_biguint<2> local_var_412 = 1;
bool local_var_413 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_412);
auto local_var_414 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_390];
sc_biguint<2> local_var_415 = 0;
bool local_var_416 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_415);
auto local_var_417 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_390];
sc_biguint<20> local_var_418 = 0;
auto local_var_419 = (local_var_416) ? local_var_417 : local_var_418;
auto local_var_420 = (local_var_413) ? local_var_414 : local_var_419;
auto local_var_421 = (local_var_410) ? local_var_411 : local_var_420;
auto local_var_422 = (local_var_407) ? local_var_408 : local_var_421;
auto local_var_423 = PEActEmul(local_var_405, local_var_422);
auto local_var_423_nxt_holder = local_var_423;
sc_biguint<2> local_var_424 = 3;
bool local_var_425 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_424);
sc_biguint<4> local_var_426 = 5;
sc_biguint<4> local_var_427 = 0;
sc_biguint<4> local_var_428 = (local_var_426 + local_var_427);
auto local_var_429 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_428];
sc_biguint<2> local_var_430 = 2;
bool local_var_431 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_430);
auto local_var_432 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_428];
sc_biguint<2> local_var_433 = 1;
bool local_var_434 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_433);
auto local_var_435 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_428];
sc_biguint<2> local_var_436 = 0;
bool local_var_437 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_436);
auto local_var_438 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_428];
sc_biguint<20> local_var_439 = 0;
auto local_var_440 = (local_var_437) ? local_var_438 : local_var_439;
auto local_var_441 = (local_var_434) ? local_var_435 : local_var_440;
auto local_var_442 = (local_var_431) ? local_var_432 : local_var_441;
auto local_var_443 = (local_var_425) ? local_var_429 : local_var_442;
sc_biguint<2> local_var_444 = 3;
bool local_var_445 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_444);
auto local_var_446 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_428];
sc_biguint<2> local_var_447 = 2;
bool local_var_448 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_447);
auto local_var_449 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_428];
sc_biguint<2> local_var_450 = 1;
bool local_var_451 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_450);
auto local_var_452 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_428];
sc_biguint<2> local_var_453 = 0;
bool local_var_454 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_453);
auto local_var_455 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_428];
sc_biguint<20> local_var_456 = 0;
auto local_var_457 = (local_var_454) ? local_var_455 : local_var_456;
auto local_var_458 = (local_var_451) ? local_var_452 : local_var_457;
auto local_var_459 = (local_var_448) ? local_var_449 : local_var_458;
auto local_var_460 = (local_var_445) ? local_var_446 : local_var_459;
auto local_var_461 = PEActEmul(local_var_443, local_var_460);
auto local_var_461_nxt_holder = local_var_461;
sc_biguint<2> local_var_462 = 3;
bool local_var_463 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_462);
sc_biguint<4> local_var_464 = 6;
sc_biguint<4> local_var_465 = 0;
sc_biguint<4> local_var_466 = (local_var_464 + local_var_465);
auto local_var_467 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_466];
sc_biguint<2> local_var_468 = 2;
bool local_var_469 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_468);
auto local_var_470 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_466];
sc_biguint<2> local_var_471 = 1;
bool local_var_472 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_471);
auto local_var_473 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_466];
sc_biguint<2> local_var_474 = 0;
bool local_var_475 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_474);
auto local_var_476 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_466];
sc_biguint<20> local_var_477 = 0;
auto local_var_478 = (local_var_475) ? local_var_476 : local_var_477;
auto local_var_479 = (local_var_472) ? local_var_473 : local_var_478;
auto local_var_480 = (local_var_469) ? local_var_470 : local_var_479;
auto local_var_481 = (local_var_463) ? local_var_467 : local_var_480;
sc_biguint<2> local_var_482 = 3;
bool local_var_483 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_482);
auto local_var_484 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_466];
sc_biguint<2> local_var_485 = 2;
bool local_var_486 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_485);
auto local_var_487 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_466];
sc_biguint<2> local_var_488 = 1;
bool local_var_489 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_488);
auto local_var_490 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_466];
sc_biguint<2> local_var_491 = 0;
bool local_var_492 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_491);
auto local_var_493 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_466];
sc_biguint<20> local_var_494 = 0;
auto local_var_495 = (local_var_492) ? local_var_493 : local_var_494;
auto local_var_496 = (local_var_489) ? local_var_490 : local_var_495;
auto local_var_497 = (local_var_486) ? local_var_487 : local_var_496;
auto local_var_498 = (local_var_483) ? local_var_484 : local_var_497;
auto local_var_499 = PEActEmul(local_var_481, local_var_498);
auto local_var_499_nxt_holder = local_var_499;
sc_biguint<2> local_var_500 = 3;
bool local_var_501 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_500);
sc_biguint<4> local_var_502 = 7;
sc_biguint<4> local_var_503 = 0;
sc_biguint<4> local_var_504 = (local_var_502 + local_var_503);
auto local_var_505 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_504];
sc_biguint<2> local_var_506 = 2;
bool local_var_507 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_506);
auto local_var_508 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_504];
sc_biguint<2> local_var_509 = 1;
bool local_var_510 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_509);
auto local_var_511 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_504];
sc_biguint<2> local_var_512 = 0;
bool local_var_513 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_512);
auto local_var_514 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_504];
sc_biguint<20> local_var_515 = 0;
auto local_var_516 = (local_var_513) ? local_var_514 : local_var_515;
auto local_var_517 = (local_var_510) ? local_var_511 : local_var_516;
auto local_var_518 = (local_var_507) ? local_var_508 : local_var_517;
auto local_var_519 = (local_var_501) ? local_var_505 : local_var_518;
sc_biguint<2> local_var_520 = 3;
bool local_var_521 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_520);
auto local_var_522 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_504];
sc_biguint<2> local_var_523 = 2;
bool local_var_524 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_523);
auto local_var_525 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_504];
sc_biguint<2> local_var_526 = 1;
bool local_var_527 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_526);
auto local_var_528 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_504];
sc_biguint<2> local_var_529 = 0;
bool local_var_530 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_529);
auto local_var_531 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_504];
sc_biguint<20> local_var_532 = 0;
auto local_var_533 = (local_var_530) ? local_var_531 : local_var_532;
auto local_var_534 = (local_var_527) ? local_var_528 : local_var_533;
auto local_var_535 = (local_var_524) ? local_var_525 : local_var_534;
auto local_var_536 = (local_var_521) ? local_var_522 : local_var_535;
auto local_var_537 = PEActEmul(local_var_519, local_var_536);
auto local_var_537_nxt_holder = local_var_537;
sc_biguint<2> local_var_538 = 3;
bool local_var_539 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_538);
sc_biguint<4> local_var_540 = 8;
sc_biguint<4> local_var_541 = 0;
sc_biguint<4> local_var_542 = (local_var_540 + local_var_541);
auto local_var_543 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_542];
sc_biguint<2> local_var_544 = 2;
bool local_var_545 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_544);
auto local_var_546 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_542];
sc_biguint<2> local_var_547 = 1;
bool local_var_548 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_547);
auto local_var_549 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_542];
sc_biguint<2> local_var_550 = 0;
bool local_var_551 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_550);
auto local_var_552 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_542];
sc_biguint<20> local_var_553 = 0;
auto local_var_554 = (local_var_551) ? local_var_552 : local_var_553;
auto local_var_555 = (local_var_548) ? local_var_549 : local_var_554;
auto local_var_556 = (local_var_545) ? local_var_546 : local_var_555;
auto local_var_557 = (local_var_539) ? local_var_543 : local_var_556;
sc_biguint<2> local_var_558 = 3;
bool local_var_559 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_558);
auto local_var_560 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_542];
sc_biguint<2> local_var_561 = 2;
bool local_var_562 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_561);
auto local_var_563 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_542];
sc_biguint<2> local_var_564 = 1;
bool local_var_565 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_564);
auto local_var_566 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_542];
sc_biguint<2> local_var_567 = 0;
bool local_var_568 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_567);
auto local_var_569 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_542];
sc_biguint<20> local_var_570 = 0;
auto local_var_571 = (local_var_568) ? local_var_569 : local_var_570;
auto local_var_572 = (local_var_565) ? local_var_566 : local_var_571;
auto local_var_573 = (local_var_562) ? local_var_563 : local_var_572;
auto local_var_574 = (local_var_559) ? local_var_560 : local_var_573;
auto local_var_575 = PEActEmul(local_var_557, local_var_574);
auto local_var_575_nxt_holder = local_var_575;
sc_biguint<2> local_var_576 = 3;
bool local_var_577 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_576);
sc_biguint<4> local_var_578 = 9;
sc_biguint<4> local_var_579 = 0;
sc_biguint<4> local_var_580 = (local_var_578 + local_var_579);
auto local_var_581 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_580];
sc_biguint<2> local_var_582 = 2;
bool local_var_583 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_582);
auto local_var_584 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_580];
sc_biguint<2> local_var_585 = 1;
bool local_var_586 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_585);
auto local_var_587 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_580];
sc_biguint<2> local_var_588 = 0;
bool local_var_589 = (PE1_ACT_CHILD_pe1_act_reg_a1 == local_var_588);
auto local_var_590 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_580];
sc_biguint<20> local_var_591 = 0;
auto local_var_592 = (local_var_589) ? local_var_590 : local_var_591;
auto local_var_593 = (local_var_586) ? local_var_587 : local_var_592;
auto local_var_594 = (local_var_583) ? local_var_584 : local_var_593;
auto local_var_595 = (local_var_577) ? local_var_581 : local_var_594;
sc_biguint<2> local_var_596 = 3;
bool local_var_597 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_596);
auto local_var_598 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_580];
sc_biguint<2> local_var_599 = 2;
bool local_var_600 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_599);
auto local_var_601 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_580];
sc_biguint<2> local_var_602 = 1;
bool local_var_603 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_602);
auto local_var_604 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_580];
sc_biguint<2> local_var_605 = 0;
bool local_var_606 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_605);
auto local_var_607 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_580];
sc_biguint<20> local_var_608 = 0;
auto local_var_609 = (local_var_606) ? local_var_607 : local_var_608;
auto local_var_610 = (local_var_603) ? local_var_604 : local_var_609;
auto local_var_611 = (local_var_600) ? local_var_601 : local_var_610;
auto local_var_612 = (local_var_597) ? local_var_598 : local_var_611;
auto local_var_613 = PEActEmul(local_var_595, local_var_612);
auto local_var_613_nxt_holder = local_var_613;
sc_biguint<3> local_var_614 = 5;
auto local_var_614_nxt_holder = local_var_614;
PE1_ACT_CHILD_PE1_act_reg_temp_0 = local_var_43_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_1 = local_var_81_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_10 = local_var_119_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_11 = local_var_157_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_12 = local_var_195_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_13 = local_var_233_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_14 = local_var_271_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_15 = local_var_309_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_2 = local_var_347_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_3 = local_var_385_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_4 = local_var_423_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_5 = local_var_461_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_6 = local_var_499_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_7 = local_var_537_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_8 = local_var_575_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_9 = local_var_613_nxt_holder;
PE1_ACT_CHILD_pe1_act_state = local_var_614_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "PE1_act_child_op_emul state updates:" << std::endl;
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_0 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_0 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_1 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_1 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_10 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_10 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_11 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_11 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_12 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_12 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_13 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_13 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_14 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_14 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_15 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_15 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_2 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_2 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_3 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_3 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_4 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_4 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_5 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_5 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_6 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_6 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_7 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_7 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_8 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_8 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_PE1_act_reg_temp_9 => " << std::hex << "0x" << PE1_ACT_CHILD_PE1_act_reg_temp_9 << std::endl; 
instr_update_log << "    PE1_ACT_CHILD_pe1_act_state => " << std::hex << "0x" << PE1_ACT_CHILD_pe1_act_state << std::endl; 
instr_update_log << std::endl;
#endif
}
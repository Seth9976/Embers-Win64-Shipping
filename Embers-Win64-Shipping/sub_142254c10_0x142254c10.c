// 函数: sub_142254c10
// 地址: 0x142254c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_108[0x4]
sub_14224dc70(arg1, &var_108, 0, *(arg1 + 0x258))
float zmm5[0x4] = var_108
float zmm14[0x4] = data_143f515a0
int64_t r9_1 = *(arg1 + 0x260)
__andps_xmmxud_memxud(data_143f515b0, data_143f515c0)
float temp0_1[0x4] = _mm_mul_ps(zmm5, zmm5)
float temp0_3[0x4] = _mm_add_ps(temp0_1, _mm_shuffle_ps(temp0_1, temp0_1, 0x4e))
float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x39), temp0_3)
float temp0_6[0x4] = _mm_rsqrt_ps(temp0_5)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm14)
float temp0_12[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(temp0_6, temp0_6), temp0_7)), temp0_6), 
    temp0_6)
float temp0_15[0x4] = _mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(temp0_12, temp0_12), temp0_7))
float temp0_16[0x4] = _mm_cmpeq_ps(data_143f51a10, temp0_5, 2)
_mm_and_ps(_mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_15, temp0_12), temp0_12), zmm5) ^ data_143f51590, 
    temp0_16)
data_143f51590
float var_d8[0x4]
float zmm11_1[0x4]
float zmm14_1[0x4]
zmm11_1, zmm14_1 = sub_14224dc70(arg1, &var_d8, 1, r9_1)
float zmm5_1[0x4] = var_d8
float zmm6[0x4] = data_143f515a0
uint32_t temp0_21[0x4] = __andps_xmmxud_memxud(data_143f515b0, data_143f515c0)
float temp0_22[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
float temp0_24[0x4] = _mm_add_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x4e))
float temp0_26[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0x39), temp0_24)
float temp0_27[0x4] = _mm_rsqrt_ps(temp0_26)
float temp0_28[0x4] = _mm_mul_ps(temp0_26, zmm6)
float temp0_33[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_27, temp0_27), temp0_28)), temp0_27), 
    temp0_27)
float temp0_37[0x4] =
    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_33, temp0_33), temp0_28)), temp0_33)
float zmm3_1[0x4] = data_142d4cc00
float temp0_38[0x4] = _mm_add_ps(temp0_37, temp0_33)
float temp0_39[0x4] = _mm_cmpeq_ps(data_143f51a10, temp0_26, 2)
float temp0_40[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
float temp0_41[0x4] = _mm_mul_ps(temp0_38, zmm5_1)
zmm5_1 = *(arg1 + 0x1c0)
float temp0_42[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
zmm6 = _mm_and_ps(temp0_41 ^ data_143f51590, temp0_39)
float temp0_44[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
zmm6 ^= data_143f51590
float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9), temp0_42)
float temp0_47[0x4] = _mm_mul_ps(temp0_40, temp0_44)
float var_118[0x4] = zmm6
zmm6 = *(arg1 + 0x1d0)
float temp0_48[0x4] = _mm_sub_ps(temp0_47, temp0_46)
float temp0_49[0x4] = _mm_add_ps(temp0_48, temp0_48)
float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0xc9), temp0_42)
float temp0_52[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
float temp0_55[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0xd2), temp0_44), temp0_51)
float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), temp0_49)
float temp0_58[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
float temp0_59[0x4] = _mm_add_ps(temp0_57, zmm3_1)
zmm3_1 = data_142d4cc20
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2), temp0_44)
float temp0_62[0x4] = _mm_add_ps(temp0_55, temp0_59)
float temp0_65[0x4] =
    _mm_sub_ps(temp0_61, _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9), temp0_52))
float temp0_66[0x4] = _mm_add_ps(temp0_65, temp0_65)
float temp0_67[0x4] = _mm_mul_ps(temp0_58, temp0_66)
float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xd2)
float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xc9), temp0_52)
float temp0_71[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float temp0_72[0x4] = _mm_add_ps(temp0_67, zmm3_1)
float temp0_73[0x4] = _mm_mul_ps(temp0_68, temp0_44)
float temp0_74[0x4] = _mm_unpacklo_ps(temp0_71, 0)
float temp0_75[0x4] = _mm_sub_ps(temp0_73, temp0_70)
float temp0_76[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float temp0_77[0x4] = __mulps_xmmps_memps(zmm14_1, data_143f51bf0)
float temp0_79[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, temp0_76[0].q), temp0_74[0].q)
float temp0_80[0x4] = _mm_add_ps(temp0_75, temp0_72)
float var_f8[0x4]
float temp0_81[0x4] = __subps_xmmps_memps(temp0_79, var_f8)
float temp0_82[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc9)
float temp0_83[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xd2)
float zmm7[0x4] = __andps_xmmxud_memxud(temp0_81, data_143f515c0)
float temp0_85[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_86[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_83)
float temp0_89[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_86, temp0_82), temp0_87)
float temp0_90[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xff)
float temp0_91[0x4] = _mm_rcp_ps(zmm11_1)
float temp0_92[0x4] = _mm_add_ps(temp0_89, temp0_89)
float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_91)
float temp0_94[0x4] = _mm_add_ps(temp0_91, temp0_91)
float temp0_95[0x4] = _mm_mul_ps(temp0_90, temp0_92)
float temp0_96[0x4] = _mm_mul_ps(temp0_93, zmm11_1)
float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xd2), temp0_82)
float temp0_99[0x4] = _mm_add_ps(temp0_95, zmm7)
float temp0_100[0x4] = _mm_sub_ps(temp0_94, temp0_96)
float temp0_101[0x4] = _mm_mul_ps(temp0_100, temp0_100)
float temp0_102[0x4] = _mm_add_ps(temp0_100, temp0_100)
float temp0_103[0x4] = _mm_mul_ps(temp0_101, zmm11_1)
float temp0_105[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm11_1, data_143f51a30), data_143f51be0, 2)
float temp0_106[0x4] = _mm_sub_ps(temp0_102, temp0_103)
float temp0_109[0x4] =
    _mm_sub_ps(temp0_98, _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xc9), temp0_83))
zmm11_1 = _mm_and_ps(temp0_105, temp0_106 ^ zx.o(0)) ^ temp0_106
float temp0_112[0x4] = _mm_mul_ps(_mm_add_ps(temp0_109, temp0_99), zmm11_1)
float var_140 = _mm_shuffle_ps(temp0_112, temp0_112, 0xaa)[0]
*(arg1 + 0x268) = (_mm_unpacklo_ps(temp0_112, _mm_shuffle_ps(temp0_112, temp0_112, 0x55)[0].q)).q
float temp0_120[0x4] = _mm_unpacklo_ps(
    _mm_unpacklo_ps(temp0_62, _mm_shuffle_ps(temp0_62, temp0_62, 0xaa)[0].q), 
    _mm_unpacklo_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), 0)[0].q)
*(arg1 + 0x270) = var_140
float temp0_121[0x4] = __mulps_xmmps_memps(zmm14_1, data_143f51bf0)
float temp0_122[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xc9)
float temp0_123[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xd2)
float temp0_124[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xd2)
float temp0_125[0x4] = _mm_mul_ps(temp0_122, temp0_124)
float temp0_126[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xc9)
float temp0_127[0x4] = _mm_mul_ps(temp0_123, temp0_126)
float temp0_128[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xff)
float temp0_129[0x4] = _mm_sub_ps(temp0_127, temp0_125)
float temp0_130[0x4] = _mm_add_ps(temp0_129, temp0_129)
float temp0_131[0x4] = _mm_mul_ps(temp0_128, temp0_130)
float temp0_133[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_130, temp0_130, 0xc9), temp0_124)
float temp0_134[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0xd2)
float temp0_135[0x4] = _mm_add_ps(temp0_131, temp0_120)
float temp0_138[0x4] =
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_134, temp0_126), temp0_133), temp0_135)
float var_140_1 = _mm_shuffle_ps(temp0_138, temp0_138, 0xaa)[0]
float temp0_140[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0x55)
int64_t var_148 = 0x3f800000
*(arg1 + 0x274) = (_mm_unpacklo_ps(temp0_138, temp0_140[0].q)).q
*(arg1 + 0x27c) = var_140_1
float temp0_142[0x4] = __mulps_xmmps_memps(zmm14_1, data_143f51bf0)
float temp0_143[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xaa)
float temp0_144[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x55)
float zmm10[0x4] = 0x3f800000
float temp0_147[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_80, temp0_143[0].q), _mm_unpacklo_ps(temp0_144, 0)[0].q)
float temp0_148[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xd2)
float temp0_150[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_147, temp0_147, 0xc9), temp0_148)
float temp0_151[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xc9)
float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_147, temp0_147, 0xd2), temp0_151)
float temp0_154[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xff)
float temp0_155[0x4] = _mm_sub_ps(temp0_153, temp0_150)
float temp0_156[0x4] = _mm_add_ps(temp0_155, temp0_155)
float temp0_157[0x4] = _mm_mul_ps(temp0_154, temp0_156)
float temp0_159[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_156, temp0_156, 0xc9), temp0_148)
float temp0_160[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xd2)
float temp0_161[0x4] = _mm_add_ps(temp0_157, temp0_147)
float temp0_164[0x4] =
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_160, temp0_151), temp0_159), temp0_161)
float var_140_2 = _mm_shuffle_ps(temp0_164, temp0_164, 0xaa)[0]
*(arg1 + 0x280) = (_mm_unpacklo_ps(temp0_164, _mm_shuffle_ps(temp0_164, temp0_164, 0x55)[0].q)).q
*(arg1 + 0x288) = var_140_2
int32_t var_140_3 = 0
float var_138
sub_140adf300(arg1 + 0x2b0, &var_138, &var_148)
var_148.d = 0
var_148 = 0x3f800000
float var_128
sub_140adf300(arg1 + 0x2b0, &var_128, &var_148)
float zmm4_2[0x4] = *(arg1 + 0x1c0)
float zmm5_2[0x4] = var_138
int32_t var_134
float temp0_168[0x4] = _mm_unpacklo_ps(var_134, 0)
int32_t var_130
float temp0_170[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_2, var_130[0].q), temp0_168[0].q)
float temp0_171[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
float temp0_172[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xc9)
float temp0_174[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_170, temp0_170, 0xd2), temp0_171)
float temp0_175[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xd2)
float temp0_177[0x4] = _mm_sub_ps(temp0_174, _mm_mul_ps(temp0_172, temp0_175))
float temp0_178[0x4] = _mm_add_ps(temp0_177, temp0_177)
float temp0_179[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0xc9)
float var_c8[0x4]
float temp0_180[0x4] = __subps_xmmps_memps(temp0_79, var_c8)
float temp0_181[0x4] = _mm_mul_ps(temp0_179, temp0_175)
float temp0_182[0x4] = __mulps_xmmps_memps(var_118, data_143f51bf0)
float zmm13[0x4] = __andps_xmmxud_memxud(temp0_180, data_143f515c0)
float temp0_185[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0xd2), temp0_171)
float temp0_187[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xff), temp0_178)
float temp0_188[0x4] = _mm_sub_ps(temp0_185, temp0_181)
int32_t var_124
float temp0_189[0x4] = _mm_unpacklo_ps(var_124, 0)
float temp0_190[0x4] = _mm_add_ps(temp0_187, temp0_170)
int32_t var_120
float temp0_192[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128, var_120[0].q), temp0_189[0].q)
float temp0_193[0x4] = _mm_shuffle_ps(temp0_192, temp0_192, 0xc9)
float temp0_194[0x4] = _mm_shuffle_ps(temp0_192, temp0_192, 0xd2)
float temp0_195[0x4] = _mm_add_ps(temp0_188, temp0_190)
zmm4_2 = *(arg1 + 0x1c0)
float temp0_196[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
float temp0_197[0x4] = _mm_mul_ps(temp0_194, temp0_196)
float temp0_198[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xd2)
float temp0_199[0x4] = _mm_mul_ps(temp0_193, temp0_198)
float temp0_200[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
float temp0_201[0x4] = _mm_sub_ps(temp0_197, temp0_199)
float temp0_202[0x4] = _mm_add_ps(temp0_201, temp0_201)
float temp0_203[0x4] = _mm_mul_ps(temp0_200, temp0_202)
float temp0_205[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0xc9), temp0_198)
float temp0_206[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0xd2)
float temp0_207[0x4] = _mm_add_ps(temp0_203, temp0_192)
float temp0_208[0x4] = _mm_mul_ps(temp0_206, temp0_196)
float temp0_209[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0xd2)
float temp0_210[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
float temp0_211[0x4] = _mm_rcp_ps(temp0_21)
float temp0_212[0x4] = _mm_sub_ps(temp0_208, temp0_205)
float temp0_214[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc9), temp0_209)
float temp0_215[0x4] = _mm_add_ps(temp0_212, temp0_207)
float temp0_216[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0xc9)
float temp0_217[0x4] = _mm_mul_ps(temp0_210, temp0_216)
float temp0_218[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0xff)
float temp0_219[0x4] = _mm_sub_ps(temp0_217, temp0_214)
float temp0_220[0x4] = _mm_mul_ps(temp0_211, temp0_211)
float temp0_221[0x4] = _mm_add_ps(temp0_211, temp0_211)
float temp0_222[0x4] = _mm_add_ps(temp0_219, temp0_219)
float temp0_223[0x4] = _mm_mul_ps(temp0_220, temp0_21)
float temp0_224[0x4] = _mm_mul_ps(temp0_218, temp0_222)
float temp0_225[0x4] = _mm_sub_ps(temp0_221, temp0_223)
float temp0_227[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xd2), temp0_216)
float temp0_228[0x4] = _mm_add_ps(temp0_224, zmm13)
float temp0_229[0x4] = _mm_mul_ps(temp0_225, temp0_225)
float temp0_232[0x4] = _mm_sub_ps(_mm_add_ps(temp0_225, temp0_225), _mm_mul_ps(temp0_229, temp0_21))
float temp0_240[0x4] = _mm_mul_ps(
    _mm_add_ps(
        _mm_sub_ps(temp0_227, _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xc9), temp0_209)), 
        temp0_228), 
    _mm_and_ps(
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(temp0_21, data_143f51a30), data_143f51be0, 2), 
    zx.o(0) ^ temp0_232) ^ temp0_232)
float temp0_241[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0xaa)
float temp0_242[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0x55)
float var_140_4 = temp0_241[0]
*(arg1 + 0x28c) = (_mm_unpacklo_ps(temp0_240, temp0_242[0].q)).q
float temp0_248[0x4] = _mm_unpacklo_ps(
    _mm_unpacklo_ps(temp0_195, _mm_shuffle_ps(temp0_195, temp0_195, 0xaa)[0].q), 
    _mm_unpacklo_ps(_mm_shuffle_ps(temp0_195, temp0_195, 0x55), 0)[0].q)
*(arg1 + 0x294) = var_140_4
float temp0_249[0x4] = __mulps_xmmps_memps(var_118, data_143f51bf0)
float temp0_250[0x4] = _mm_shuffle_ps(temp0_248, temp0_248, 0xc9)
float temp0_251[0x4] = _mm_shuffle_ps(temp0_248, temp0_248, 0xd2)
float temp0_252[0x4] = _mm_shuffle_ps(temp0_249, temp0_249, 0xd2)
float temp0_253[0x4] = _mm_mul_ps(temp0_250, temp0_252)
float temp0_254[0x4] = _mm_shuffle_ps(temp0_249, temp0_249, 0xc9)
float temp0_255[0x4] = _mm_mul_ps(temp0_251, temp0_254)
float temp0_256[0x4] = _mm_shuffle_ps(temp0_249, temp0_249, 0xff)
float temp0_257[0x4] = _mm_sub_ps(temp0_255, temp0_253)
float temp0_258[0x4] = _mm_add_ps(temp0_257, temp0_257)
float temp0_259[0x4] = _mm_mul_ps(temp0_256, temp0_258)
float temp0_261[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_258, temp0_258, 0xc9), temp0_252)
float temp0_262[0x4] = _mm_shuffle_ps(temp0_258, temp0_258, 0xd2)
float temp0_263[0x4] = _mm_add_ps(temp0_259, temp0_248)
float temp0_266[0x4] =
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_262, temp0_254), temp0_261), temp0_263)
float temp0_267[0x4] = _mm_shuffle_ps(temp0_266, temp0_266, 0xaa)
float temp0_268[0x4] = _mm_shuffle_ps(temp0_266, temp0_266, 0x55)
float var_140_5 = temp0_267[0]
*(arg1 + 0x298) = (_mm_unpacklo_ps(temp0_266, temp0_268[0].q)).q
float temp0_274[0x4] = _mm_unpacklo_ps(
    _mm_unpacklo_ps(temp0_215, _mm_shuffle_ps(temp0_215, temp0_215, 0xaa)[0].q), 
    _mm_unpacklo_ps(_mm_shuffle_ps(temp0_215, temp0_215, 0x55), 0)[0].q)
*(arg1 + 0x2a0) = var_140_5
float temp0_275[0x4] = __mulps_xmmps_memps(var_118, data_143f51bf0)
float temp0_276[0x4] = _mm_shuffle_ps(temp0_274, temp0_274, 0xd2)
float temp0_277[0x4] = _mm_shuffle_ps(temp0_274, temp0_274, 0xc9)
float temp0_278[0x4] = _mm_shuffle_ps(temp0_275, temp0_275, 0xd2)
float temp0_279[0x4] = _mm_shuffle_ps(temp0_275, temp0_275, 0xc9)
float temp0_282[0x4] =
    _mm_sub_ps(_mm_mul_ps(temp0_276, temp0_279), _mm_mul_ps(temp0_277, temp0_278))
float temp0_283[0x4] = _mm_add_ps(temp0_282, temp0_282)
float temp0_285[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_275, temp0_275, 0xff), temp0_283)
float temp0_286[0x4] = _mm_shuffle_ps(temp0_283, temp0_283, 0xd2)
float temp0_288[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_283, temp0_283, 0xc9), temp0_278)
float zmm2_2[0x4] = *(arg1 + 0x1e0)
float temp0_289[0x4] = _mm_add_ps(temp0_285, temp0_274)
float temp0_290[0x4] = _mm_mul_ps(temp0_286, temp0_279)
float temp0_291[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
float temp0_293[0x4] = _mm_add_ps(_mm_sub_ps(temp0_290, temp0_288), temp0_289)
float var_140_6 = _mm_shuffle_ps(temp0_293, temp0_293, 0xaa)[0]
*(arg1 + 0x2a4) = (_mm_unpacklo_ps(temp0_293, _mm_shuffle_ps(temp0_293, temp0_293, 0x55)[0].q)).q
float zmm6_1[0x4] = _mm_and_ps(temp0_291, 0x7fffffff)
*(arg1 + 0x2ac) = var_140_6
float zmm0_2[0x4] = _mm_and_ps(zmm2_2, 0x7fffffff)
float temp0_299[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
float temp0_300[0x4] = _mm_min_ss(zmm6_1[0], zmm0_2[0])
zmm2_2 = _mm_and_ps(temp0_299, 0x7fffffff)
float temp0_303[0x4] = __maxss_xmmss_memss(_mm_min_ss(temp0_300[0], zmm2_2[0])[0], 0x3c23d70a)
int64_t* rax_6
int64_t r8_2
rax_6, r8_2 = sub_14224ddf0(arg1, 0)

if (rax_6 != 0)
    int64_t r9_2 = *rax_6
    r8_2.b = 1
    
    if ((*(r9_2 + 0x6a8))(rax_6, *(arg1 + 0x258), r8_2, r9_2) != 0)
        float zmm2_3 = 1f / temp0_303[0]
        float zmm0_3 = zmm2_3 f* *(arg1 + 0x268)
        float zmm1_3 = zmm2_3 f* *(arg1 + 0x26c)
        zmm2_3 = zmm2_3 f* *(arg1 + 0x270)
        *(arg1 + 0x268) = zmm0_3
        *(arg1 + 0x26c) = zmm1_3
        *(arg1 + 0x270) = zmm2_3

int64_t* result
int64_t r8_3
result, r8_3 = sub_14224ddf0(arg1, 1)

if (result != 0)
    int64_t r9_3 = *result
    r8_3.b = 1
    result = (*(r9_3 + 0x6a8))(result, *(arg1 + 0x260), r8_3, r9_3)
    
    if (result != 0)
        zmm10[0] = 1f / temp0_303[0]
        float zmm0_4 = zmm10[0] f* *(arg1 + 0x28c)
        float zmm1_4 = zmm10[0] f* *(arg1 + 0x290)
        zmm10[0] = zmm10[0] f* *(arg1 + 0x294)
        *(arg1 + 0x28c) = zmm0_4
        *(arg1 + 0x290) = zmm1_4
        *(arg1 + 0x294) = zmm10[0]

return result

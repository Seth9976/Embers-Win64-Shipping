// 函数: sub_1405bd5e0
// 地址: 0x1405bd5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[0] = arg3[0] * 0.00872664619f
int128_t zmm6 = arg4
arg3 = tanf(arg3[0])
arg4.d = (*arg1).d f- 0.5f
float zmm0_1[0x4] = 0x3f800000
float zmm1[0x4] = arg3
data_142d3f660
*(arg1 + 0x14)
data_142d4cc30
data_142d4cc00
data_142d4cc20
zmm0_1[0] = 1f / arg3[0]
int64_t var_254 = 0
int64_t var_240 = 0
int32_t var_21c = 0
int64_t var_214 = 0
int64_t var_200 = 0
int64_t var_150 = 0x3f800000
zmm1[0] = zmm1[0] f/ zmm6.d
float var_264 = zmm0_1[0]
zmm0_1[0] = zmm0_1[0] f* zmm6.d
arg4.d = arg4.d f* arg3[0]
float var_268 = zmm0_1[0]
zmm0_1 = arg3
zmm0_1[0] = zmm0_1[0] + arg3[0]
arg3 = *(arg1 + 4)
arg3[0] = arg3[0] - 0.5f
arg4.d = arg4.d f+ arg4.d
zmm0_1[0] = zmm0_1[0] f* *(arg1 + 8)
arg3[0] = arg3[0] * zmm1[0]
float arg_20 = zmm0_1[0]
zmm0_1 = zmm1
zmm0_1[0] = zmm0_1[0] + zmm1[0]
zmm1 = arg1[1].d
zmm1[0] = zmm1[0] * 0.0174532924f
arg3[0] = arg3[0] + arg3[0]
zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0xc)
float arg_8 = arg3[0]
float arg_10 = zmm0_1[0]
float zmm0_2[0x4]
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
float zmm11_1[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
float zmm15_1[0x4]
zmm0_2, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm15_1 =
    __libm_sse2_sincosf_(zmm1)
float zmm4[0x4] = 0:4.o
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
temp0[0] = zmm7_1[0]
int64_t var_1d0 = 0
int64_t var_1c0 = 0
int64_t var_110 = 0x3f800000
int64_t var_d0 = 0x3f800000
float temp0_2[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55)
float var_218[0x4]
var_218[0] = zmm7_1[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0)
float var_158[0x4]
var_158[0] = zmm10_1[0]
float temp0_4[0x4] = _mm_mul_ps(temp0_3, var_218)
float temp0_5[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa)
float temp0_6[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm13_1)
temp0_6[0] = zmm11_1[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
float temp0_9[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x55)
float temp0_11[0x4] = _mm_mul_ps(temp0_2, temp0_9)
float temp0_12[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_add_ps(temp0_11, temp0_4)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, temp0_9)
float temp0_16[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0xaa), zmm13_1)
float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0xff), zmm15_1)
float temp0_21[0x4] = _mm_add_ps(temp0_14, temp0_18)
float temp0_22[0x4] = _mm_mul_ps(temp0_16, zmm15_1)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0), var_218)
float temp0_25[0x4] = _mm_add_ps(temp0_21, temp0_20)
float temp0_26[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0xff), zmm15_1)
float temp0_30[0x4] = _mm_add_ps(_mm_mul_ps(temp0_26, temp0_9), temp0_24)
float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0), var_218)
float temp0_33[0x4] = _mm_add_ps(temp0_30, temp0_7)
float temp0_34[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xaa)
float temp0_35[0x4] = _mm_add_ps(temp0_13, temp0_32)
float temp0_36[0x4] = _mm_mul_ps(temp0_34, zmm13_1)
float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xff), zmm15_1)
float temp0_39[0x4] = _mm_add_ps(temp0_33, temp0_28)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_36)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15_1, zmm15_1, 0), var_218)
float temp0_43[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
float var_1c8[0x4]
var_1c8[0] = (zmm0_2 ^ zmm6_1)[0]
float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_38)
float temp0_45[0x4] = _mm_mul_ps(temp0_43, zmm13_1)
float temp0_46[0x4] = _mm_add_ps(temp0_15, temp0_42)
float temp0_47[0x4] = _mm_shuffle_ps(var_1c8, var_1c8, 0xe1)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
float temp0_49[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0)
float temp0_50[0x4] = _mm_add_ps(temp0_46, temp0_45)
float var_1d8[0x4]
var_1d8[0] = temp0_1[0]
temp0_47[0] = temp0_1[0]
float temp0_51[0x4] = _mm_shuffle_ps(var_1d8, var_1d8, 0xe1)
temp0_51[0] = zmm0_2[0]
float temp0_52[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xe1)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xe1)
float temp0_54[0x4] = _mm_add_ps(temp0_50, temp0_22)
float temp0_55[0x4] = _mm_mul_ps(temp0_49, temp0_53)
float temp0_57[0x4] = _mm_add_ps(_mm_mul_ps(temp0_48, temp0_52), temp0_55)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
float temp0_60[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
zmm10_1 = data_142d4cc00
float temp0_61[0x4] = _mm_mul_ps(temp0_60, zmm13_1)
float temp0_62[0x4] = _mm_mul_ps(temp0_59, zmm13_1)
float temp0_63[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
float temp0_64[0x4] = _mm_add_ps(temp0_57, temp0_61)
float temp0_65[0x4] = _mm_mul_ps(temp0_63, temp0_52)
float temp0_66[0x4] = _mm_mul_ps(temp0_58, temp0_52)
float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0), temp0_53)
float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xff), zmm15_1)
float temp0_71[0x4] = _mm_add_ps(temp0_65, temp0_68)
float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xff), zmm15_1)
float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0), temp0_53)
float temp0_76[0x4] = _mm_add_ps(temp0_71, temp0_62)
float temp0_77[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)
float temp0_78[0x4] = _mm_add_ps(temp0_64, temp0_73)
float temp0_79[0x4] = _mm_mul_ps(temp0_77, zmm13_1)
float temp0_80[0x4] = _mm_add_ps(temp0_66, temp0_75)
float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0xff), zmm15_1)
float temp0_83[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
float temp0_84[0x4] = _mm_add_ps(temp0_76, temp0_70)
zmm8_1 = data_142d4cc20
float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_53)
float temp0_86[0x4] = _mm_add_ps(temp0_80, temp0_79)
float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), zmm13_1)
float temp0_89[0x4] = _mm_add_ps(temp0_86, temp0_82)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0x55), temp0_52)
float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), zmm15_1)
float temp0_94[0x4] = _mm_add_ps(temp0_91, temp0_85)
float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0x55), zmm8_1)
float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0), zmm10_1)
float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_88)
float temp0_100[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xaa)
float temp0_101[0x4] = _mm_add_ps(temp0_99, temp0_93)
float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0x55), zmm8_1)
float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xff), zmm15_1)
float temp0_106[0x4] = _mm_add_ps(temp0_103, temp0_98)
float var_118[0x4]
var_118[0] = arg4.d[0]
float temp0_107[0x4] = _mm_shuffle_ps(var_118, var_118, 0xe1)
temp0_107[0] = arg_8[0]
float temp0_108[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0xe1)
float temp0_109[0x4] = _mm_mul_ps(temp0_100, temp0_108)
float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0), zmm10_1)
float temp0_112[0x4] = _mm_add_ps(temp0_106, temp0_109)
float temp0_113[0x4] = _mm_add_ps(temp0_96, temp0_111)
float temp0_114[0x4] = _mm_add_ps(temp0_112, temp0_105)
zmm11_1 = data_142d4cc00
float temp0_115[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0), zmm10_1)
float temp0_118[0x4] = _mm_mul_ps(temp0_115, temp0_108)
float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xff), zmm15_1)
float temp0_121[0x4] = _mm_add_ps(temp0_113, temp0_118)
float temp0_123[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0xaa), temp0_108)
float temp0_124[0x4] = _mm_add_ps(temp0_121, temp0_120)
float temp0_126[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0x55), zmm8_1)
float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0xff), zmm15_1)
float temp0_129[0x4] = _mm_add_ps(temp0_126, temp0_117)
float temp0_131[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0), zmm10_1)
float temp0_132[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0x55)
float temp0_133[0x4] = _mm_add_ps(temp0_129, temp0_123)
float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xaa), temp0_108)
float temp0_136[0x4] = _mm_add_ps(temp0_133, temp0_128)
float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0x55), zmm8_1)
float temp0_140[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xff), zmm15_1)
float temp0_141[0x4] = _mm_add_ps(temp0_138, temp0_131)
float temp0_143[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0), zmm11_1)
float temp0_144[0x4] = _mm_add_ps(temp0_141, temp0_135)
float temp0_145[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0xaa)
float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0xff), zmm15_1)
float temp0_148[0x4] = _mm_add_ps(temp0_144, temp0_140)
float temp0_149[0x4] = _mm_mul_ps(temp0_132, zmm8_1)
float temp0_151[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0x55), zmm8_1)
float temp0_152[0x4] = _mm_add_ps(temp0_149, temp0_143)
float var_d8[0x4]
var_d8[0] = arg_20[0]
float temp0_153[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
temp0_153[0] = arg_10[0]
float temp0_155[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0), zmm11_1)
float temp0_156[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0xe1)
float temp0_158[0x4] = _mm_add_ps(temp0_152, _mm_mul_ps(temp0_145, temp0_156))
float temp0_160[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xaa), temp0_156)
float temp0_161[0x4] = _mm_add_ps(temp0_158, temp0_147)
float temp0_163[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0x55), zmm8_1)
float temp0_165[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xff), zmm15_1)
float temp0_166[0x4] = _mm_add_ps(temp0_163, temp0_155)
float temp0_168[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0), zmm11_1)
float temp0_169[0x4] = _mm_add_ps(temp0_166, temp0_160)
float temp0_170[0x4] = _mm_add_ps(temp0_151, temp0_168)
float temp0_171[0x4] = _mm_add_ps(temp0_169, temp0_165)
float temp0_173[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xaa), temp0_156)
float temp0_175[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0), zmm11_1)
float temp0_176[0x4] = _mm_add_ps(temp0_170, temp0_173)
float temp0_178[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0x55), zmm8_1)
zmm6_1 = 0:4.o
float temp0_180[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0xaa), temp0_156)
float temp0_181[0x4] = _mm_add_ps(temp0_178, temp0_175)
float temp0_183[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xff), zmm15_1)
float temp0_184[0x4] = _mm_add_ps(temp0_181, temp0_180)
float temp0_186[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0xff), zmm15_1)
float temp0_187[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0x55)
float temp0_188[0x4] = _mm_add_ps(temp0_176, temp0_183)
zmm4 = 0.o
float temp0_189[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
temp0_189[0] = var_268[0]
float temp0_190[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_191[0x4] = _mm_add_ps(temp0_184, temp0_186)
float temp0_192[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xe1)
float temp0_193[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0)
float var_258[0x4]
var_258[0] = var_264[0]
float temp0_194[0x4] = _mm_mul_ps(temp0_193, var_258)
float temp0_195[0x4] = _mm_mul_ps(temp0_187, temp0_192)
float temp0_196[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0x55)
float temp0_197[0x4] = _mm_shuffle_ps(temp0_188, temp0_188, 0x55)
float temp0_198[0x4] = _mm_mul_ps(temp0_196, temp0_192)
float temp0_199[0x4] = _mm_add_ps(temp0_195, temp0_194)
float temp0_200[0x4] = _mm_mul_ps(temp0_197, temp0_192)
float temp0_202[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xaa), zmm15_1)
float temp0_203[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xff)
float temp0_204[0x4] = _mm_add_ps(temp0_199, temp0_202)
temp0_190[0] = data_14399fa0c[0]
float temp0_206[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0), var_258)
float temp0_207[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xc9)
float temp0_208[0x4] = _mm_mul_ps(temp0_203, temp0_207)
float temp0_209[0x4] = _mm_add_ps(temp0_198, temp0_206)
float temp0_211[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_188, temp0_188, 0), var_258)
float temp0_212[0x4] = _mm_add_ps(temp0_204, temp0_208)
float temp0_213[0x4] = _mm_add_ps(temp0_200, temp0_211)
*arg2 = temp0_212
float temp0_215[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0xaa), zmm15_1)
float temp0_217[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0xff), temp0_207)
float temp0_218[0x4] = _mm_add_ps(temp0_209, temp0_215)
float temp0_220[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_188, temp0_188, 0xaa), zmm15_1)
float temp0_221[0x4] = _mm_shuffle_ps(temp0_188, temp0_188, 0xff)
float temp0_222[0x4] = _mm_add_ps(temp0_218, temp0_217)
float temp0_223[0x4] = _mm_mul_ps(temp0_221, temp0_207)
float temp0_224[0x4] = _mm_add_ps(temp0_213, temp0_220)
arg2[1] = temp0_222
float temp0_225[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0x55)
arg2[2] = _mm_add_ps(temp0_224, temp0_223)
float temp0_227[0x4] = _mm_mul_ps(temp0_225, temp0_192)
float temp0_228[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0)
float temp0_230[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_191, temp0_191, 0xaa), zmm15_1)
float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_191, temp0_191, 0xff), temp0_207)
arg2[3] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_227, _mm_mul_ps(temp0_228, var_258)), temp0_230), 
    temp0_232)
return arg2

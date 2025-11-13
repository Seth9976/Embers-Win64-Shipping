// 函数: sub_14201f540
// 地址: 0x14201f540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_138[0x4]
void* rcx
void var_178

if (arg2[4].b == 0)
    arg2 = sub_141e96bf0(arg1, &var_178)
    rcx = &var_138
else
    rcx = &var_178
int128_t* rax_2 = sub_141b4d3f0(rcx, arg2)
*arg4 = *rax_2
arg4[1] = rax_2[1]
arg4[2] = rax_2[2]
arg4[3] = rax_2[3]
float zmm1[0x4] = (*arg1)[5]
zmm1[0] = zmm1[0] * 0.0174532924f
float zmm0_1[0x4]
int32_t zmm6
zmm0_1, zmm6 = __libm_sse2_sincosf_(zmm1)
float zmm1_1[0x4] = (*arg1)[3]
float temp0[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
zmm1_1[0] = zmm1_1[0] f* zmm6
int32_t var_168 = 0
float arg_8 = (zmm0_1 ^ 0x80000000)[0]
int64_t var_15c = 0
int32_t var_14c = 0
float zmm0_2[0x4]
int32_t zmm6_1
int512_t zmm8
int128_t zmm10
int512_t zmm12
int512_t zmm13
zmm0_2, zmm6_1, zmm8, zmm10, zmm12, zmm13 = __libm_sse2_sincosf_(zmm1_1)
float zmm1_2[0x4] = arg1[1][0]
zmm12.o = data_142d4cc20
zmm13.o = data_142d3f660
zmm8.o = zmm0_2
zmm1_2[0] = zmm1_2[0] f* zmm6_1
int32_t var_f4 = 0
_mm_shuffle_ps(zmm0_2, zmm0_2, 1)
int32_t var_ec = 0
int32_t var_d4 = 0
int32_t var_cc = 0
float zmm0_3[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
int32_t zmm15_1
zmm0_3, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm12_1, zmm13_1, zmm15_1 = __libm_sse2_sincosf_(zmm1_2)
float zmm1_3[0x4] = zmm0_3 ^ zmm10_1
zmm10_1 = data_142d4cc30
float temp0_2[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
float var_f8[0x4]
var_f8[0] = zmm9_1[0]
float temp0_3[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xd2)
float var_d8[0x4]
var_d8[0] = zmm8_1[0]
int64_t var_130 = 0
float zmm2[0x4] = var_138
temp0_3[0] = zmm7_1[0]
zmm2[0] = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0_4[0] = zmm9_1[0]
temp0_5[0] = zmm1_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x55)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0)
float temp0_11[0x4] = _mm_mul_ps(temp0_9, zmm12_1)
int64_t var_120 = 0
float temp0_12[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xaa)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_6)
float temp0_14[0x4] = _mm_mul_ps(temp0_12, temp0_8)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xff)
float temp0_16[0x4] = _mm_add_ps(temp0_11, temp0_13)
float temp0_17[0x4] = _mm_mul_ps(temp0_15, zmm13_1)
float temp0_19[0x4] = _mm_add_ps(_mm_add_ps(temp0_16, temp0_14), temp0_17)
float var_128[0x4]
var_128[0] = zmm0_3[0]
float temp0_20[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x55)
float zmm3[0x4] = var_168.o
float temp0_21[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
temp0_21[0] = temp0_2[0]
float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm12_1)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xe1)
float temp0_24[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x55)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
float temp0_28[0x4] = _mm_mul_ps(temp0_26, temp0_6)
float temp0_29[0x4] = _mm_mul_ps(temp0_27, temp0_8)
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), zmm13_1)
float temp0_32[0x4] = _mm_mul_ps(temp0_25, zmm12_1)
float temp0_33[0x4] = _mm_mul_ps(temp0_24, zmm12_1)
float temp0_34[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_28)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xff), zmm13_1)
float temp0_38[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0)
temp0_34[0] = temp0[0]
float temp0_39[0x4] = _mm_mul_ps(temp0_38, temp0_6)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_29)
float temp0_41[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc6)
temp0_41[0] = zmm15_1
float temp0_42[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa)
float temp0_43[0x4] = _mm_add_ps(temp0_22, temp0_39)
float temp0_44[0x4] = _mm_mul_ps(temp0_42, temp0_8)
float temp0_45[0x4] = _mm_add_ps(temp0_40, temp0_31)
zmm2 = var_15c:4.o
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xff), zmm13_1)
float temp0_48[0x4] = _mm_add_ps(temp0_43, temp0_44)
float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0), temp0_6)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa), temp0_8)
float temp0_53[0x4] = _mm_add_ps(temp0_48, temp0_47)
float temp0_54[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
float temp0_55[0x4] = _mm_add_ps(temp0_33, temp0_50)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xc9)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0)
float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_56)
float temp0_60[0x4] = _mm_add_ps(temp0_55, temp0_52)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), zmm13_1)
float temp0_64[0x4] = _mm_add_ps(temp0_60, temp0_37)
float zmm11[0x4] = data_142d4cc00
float temp0_66[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_58, zmm11))
temp0_54[0] = arg_8[0]
float temp0_67[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xc6)
temp0_67[0] = temp0[0]
float temp0_68[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xc9)
float temp0_69[0x4] = _mm_mul_ps(temp0_61, temp0_68)
float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0x55), temp0_56)
float temp0_73[0x4] = _mm_add_ps(_mm_add_ps(temp0_66, temp0_69), temp0_63)
float temp0_74[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0)
float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0xaa), temp0_68)
float temp0_77[0x4] = _mm_mul_ps(temp0_74, zmm11)
float temp0_78[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
float temp0_79[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
float temp0_80[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0x55)
float temp0_81[0x4] = _mm_add_ps(temp0_71, temp0_77)
float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_56)
float temp0_83[0x4] = _mm_mul_ps(temp0_79, temp0_56)
zmm3 = data_142d4cc30
float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_76)
float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0), zmm11)
float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_68)
float temp0_89[0x4] = _mm_add_ps(temp0_82, temp0_86)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0xff), zmm13_1)
float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), zmm11)
float temp0_94[0x4] = _mm_add_ps(temp0_89, temp0_88)
float temp0_95[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xff)
float temp0_96[0x4] = _mm_add_ps(temp0_84, temp0_91)
float temp0_97[0x4] = _mm_mul_ps(temp0_95, zmm13_1)
zmm7_1 = data_142d4cc20
float temp0_98[0x4] = _mm_add_ps(temp0_83, temp0_93)
float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_68)
float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0), zmm3)
float temp0_104[0x4] = _mm_add_ps(temp0_98, temp0_100)
float temp0_105[0x4] = _mm_mul_ps(temp0_80, zmm11)
float temp0_106[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
float temp0_107[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xaa)
float temp0_108[0x4] = _mm_mul_ps(temp0_106, zmm13_1)
float temp0_109[0x4] = _mm_add_ps(temp0_105, temp0_103)
float temp0_110[0x4] = _mm_mul_ps(temp0_107, zmm7_1)
float temp0_111[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0x55)
float temp0_112[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0)
float temp0_113[0x4] = _mm_add_ps(temp0_104, temp0_108)
float temp0_114[0x4] = _mm_mul_ps(temp0_112, zmm3)
float temp0_115[0x4] = _mm_add_ps(temp0_109, temp0_110)
float temp0_116[0x4] = _mm_mul_ps(temp0_111, zmm11)
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xff), zmm13_1)
float temp0_119[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0x55)
float temp0_121[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xaa), zmm7_1)
float temp0_122[0x4] = _mm_mul_ps(temp0_119, zmm11)
float temp0_123[0x4] = _mm_add_ps(temp0_115, temp0_118)
float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xff), zmm13_1)
float temp0_126[0x4] = _mm_add_ps(temp0_122, temp0_114)
float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0), zmm3)
float temp0_129[0x4] = _mm_add_ps(temp0_126, temp0_121)
float temp0_130[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xaa)
float temp0_131[0x4] = _mm_add_ps(temp0_116, temp0_128)
float temp0_132[0x4] = _mm_mul_ps(temp0_130, zmm7_1)
float temp0_133[0x4] = _mm_add_ps(temp0_129, temp0_125)
float temp0_134[0x4] = _mm_add_ps(temp0_131, temp0_132)
float zmm4[0x4] = data_142d4cc30
zmm10_1 = *arg1
float temp0_135[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0), zmm3)
zmm3 = data_142d4cc20
float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xaa), zmm7_1)
zmm7_1 = (*arg1)[2]
float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0x55), zmm11)
float temp0_143[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xff), zmm13_1)
float temp0_144[0x4] = _mm_add_ps(temp0_141, temp0_137)
float temp0_145[0x4] = _mm_mul_ps(temp0_135, temp0_133)
zmm10_1 ^= 0x80000000
float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xff), zmm13_1)
float temp0_148[0x4] = _mm_add_ps(temp0_144, temp0_139)
float temp0_149[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xe1)
float temp0_150[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
float temp0_151[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_152[0x4] = _mm_add_ps(temp0_134, temp0_147)
float temp0_153[0x4] = _mm_add_ps(temp0_148, temp0_143)
float temp0_154[0x4] = _mm_mul_ps(temp0_151, temp0_133)
float zmm6_2[0x4] = (*arg1)[1] ^ 0x80000000
float temp0_155[0x4] = _mm_mul_ps(temp0_150, temp0_152)
temp0_149[0] = zmm6_2[0]
float temp0_157[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_123)
float temp0_158[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xc6)
float temp0_159[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
temp0_158[0] = (zmm7_1 ^ 0x80000000)[0]
float temp0_160[0x4] = _mm_mul_ps(temp0_159, temp0_153)
float temp0_161[0x4] = _mm_add_ps(temp0_145, temp0_157)
float temp0_162[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0x27)
temp0_162[0] = 0x3f800000
float temp0_164[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_123)
float temp0_165[0x4] = _mm_add_ps(temp0_161, temp0_155)
float temp0_166[0x4] = _mm_shuffle_ps(temp0_162, temp0_162, 0x39)
float temp0_167[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_168[0x4] = _mm_add_ps(temp0_154, temp0_164)
float temp0_170[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_153)
float temp0_171[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_172[0x4] = _mm_add_ps(temp0_165, temp0_160)
float temp0_173[0x4] = _mm_mul_ps(temp0_167, temp0_152)
float temp0_174[0x4] = _mm_mul_ps(temp0_171, temp0_123)
float temp0_175[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0x55)
float temp0_176[0x4] = _mm_add_ps(temp0_168, temp0_173)
float temp0_177[0x4] = _mm_mul_ps(temp0_175, temp0_133)
float temp0_179[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), temp0_152)
float temp0_180[0x4] = _mm_add_ps(temp0_176, temp0_170)
float temp0_182[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), temp0_133)
float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), temp0_153)
float temp0_185[0x4] = _mm_add_ps(temp0_182, temp0_174)
float temp0_186[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0)
float temp0_188[0x4] = _mm_add_ps(_mm_add_ps(temp0_185, temp0_179), temp0_184)
float temp0_189[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0xaa)
*arg3 = temp0_172
float temp0_190[0x4] = _mm_mul_ps(temp0_186, temp0_123)
float temp0_191[0x4] = _mm_mul_ps(temp0_189, temp0_152)
arg3[1] = temp0_180
float temp0_192[0x4] = _mm_add_ps(temp0_177, temp0_190)
arg3[2] = temp0_188
float temp0_194[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_166, temp0_166, 0xff), temp0_153)
arg3[3] = _mm_add_ps(_mm_add_ps(temp0_192, temp0_191), temp0_194)
zmm2 = *arg3
zmm6_2 = arg4[1]
zmm7_1 = *arg4
zmm8_1 = arg4[2]
zmm9_1 = arg4[3]
float temp0_197[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_198[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_199[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_200[0x4] = _mm_mul_ps(temp0_197, zmm6_2)
float temp0_201[0x4] = _mm_mul_ps(temp0_198, zmm8_1)
float temp0_203[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9_1)
float temp0_207[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_199, zmm7_1), temp0_200), temp0_201), temp0_203)
zmm2 = arg3[1]
float temp0_208[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_209[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_210[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_211[0x4] = _mm_mul_ps(temp0_208, zmm6_2)
float temp0_212[0x4] = _mm_mul_ps(temp0_209, zmm8_1)
float temp0_214[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9_1)
float temp0_218[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_210, zmm7_1), temp0_211), temp0_212), temp0_214)
zmm2 = arg3[2]
float temp0_219[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_220[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_221[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_222[0x4] = _mm_mul_ps(temp0_220, zmm6_2)
float temp0_223[0x4] = _mm_mul_ps(temp0_221, zmm8_1)
float temp0_225[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9_1)
float temp0_229[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_219, zmm7_1), temp0_222), temp0_223), temp0_225)
zmm2 = arg3[3]
*arg5 = temp0_207
float temp0_230[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_231[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_232[0x4] = _mm_mul_ps(temp0_230, zmm6_2)
float temp0_233[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float result[0x4] = _mm_mul_ps(temp0_231, zmm7_1)
float temp0_234[0x4] = _mm_mul_ps(temp0_233, zmm8_1)
float temp0_235[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_236[0x4] = _mm_add_ps(temp0_232, result)
float temp0_237[0x4] = _mm_mul_ps(temp0_235, zmm9_1)
arg5[1] = temp0_218
arg5[2] = temp0_229
arg5[3] = _mm_add_ps(_mm_add_ps(temp0_236, temp0_234), temp0_237)
return result

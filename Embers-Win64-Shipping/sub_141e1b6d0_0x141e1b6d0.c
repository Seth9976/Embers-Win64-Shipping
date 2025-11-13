// 函数: sub_141e1b6d0
// 地址: 0x141e1b6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
float zmm6[0x4] = data_143f39690
float temp0[0x4] = _mm_mul_ps(zmm5, zmm5)
float temp0_2[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float temp0_4[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x39), temp0_2)
float temp0_5[0x4] = _mm_rsqrt_ps(temp0_4)
float temp0_6[0x4] = _mm_mul_ps(zmm6, temp0_4)
float temp0_11[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_5, temp0_5), temp0_6)), temp0_5), 
    temp0_5)
float temp0_14[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_6))
float temp0_16[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_4, 2)
zmm6 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_14, temp0_11), temp0_11), zmm5) ^ data_143f39680, 
    temp0_16) ^ data_143f39680
float var_1a8[0x4] = zmm6
float var_198[0x4]
sub_140ad9d00(&var_198, &var_1a8)
float zmm2_1[0x4] = var_198
float zmm4_1[0x4] = arg3[1]
float zmm3_1[0x4] = *arg3
float zmm5_1[0x4] = arg3[2]
float zmm6_1[0x4] = arg3[3]
float var_d8[0x4] = var_198[1]
float var_c8[0x4] = var_198[2]
float var_138[0x4] = var_198[3]
var_1a8 = var_198[0]
float temp0_21[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_22[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_23[0x4] = _mm_mul_ps(temp0_21, zmm4_1)
float temp0_25[0x4] = _mm_add_ps(_mm_mul_ps(temp0_22, zmm3_1), temp0_23)
float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm5_1)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
float temp0_31[0x4] = _mm_add_ps(_mm_add_ps(temp0_25, temp0_27), temp0_29)
int32_t var_188
zmm2_1 = var_188.o
float temp0_36[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm3_1), 
    _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), zmm4_1))
float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm5_1)
float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
float temp0_42[0x4] = _mm_add_ps(_mm_add_ps(temp0_36, temp0_38), temp0_40)
int32_t var_178
zmm2_1 = var_178.o
float temp0_47[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm3_1), 
    _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), zmm4_1))
float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm5_1)
float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
float temp0_53[0x4] = _mm_add_ps(_mm_add_ps(temp0_47, temp0_49), temp0_51)
int32_t var_168
zmm2_1 = var_168.o
float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm5_1)
zmm5_1 = var_1a8
float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm3_1)
float temp0_58[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
temp0_58[0] = var_188[0]
float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xc6)
temp0_59[0] = var_178[0]
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), zmm4_1)
float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
float temp0_64[0x4] = _mm_add_ps(temp0_57, temp0_61)
float temp0_65[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x27)
temp0_65[0] = var_168[0]
float temp0_66[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
float temp0_67[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x39)
var_1a8 = temp0_67
float temp0_69[0x4] = _mm_add_ps(_mm_add_ps(temp0_64, temp0_55), temp0_63)
float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0), temp0_67)
float temp0_72[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
int32_t var_184
temp0_66[0] = var_184[0]
float temp0_73[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
float temp0_74[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xff)
float temp0_75[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
float temp0_76[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
int32_t var_180
temp0_75[0] = var_180
float temp0_77[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xc6)
float temp0_78[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xc6)
int32_t var_174
temp0_77[0] = var_174
int32_t var_170
temp0_78[0] = var_170
float temp0_79[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0x27)
float temp0_80[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x27)
int32_t var_164
temp0_79[0] = var_164
float temp0_81[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0x39)
int32_t var_160
temp0_80[0] = var_160
float temp0_82[0x4] = _mm_mul_ps(temp0_72, temp0_81)
float temp0_83[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x39)
float temp0_84[0x4] = _mm_mul_ps(temp0_73, temp0_83)
float temp0_85[0x4] = _mm_add_ps(temp0_71, temp0_82)
int32_t var_17c
temp0_76[0] = var_17c[0]
float temp0_86[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc6)
int32_t var_16c
temp0_86[0] = var_16c[0]
float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0x27)
float temp0_88[0x4] = _mm_add_ps(temp0_85, temp0_84)
int32_t var_15c
temp0_87[0] = var_15c[0]
float temp0_89[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x39)
float temp0_91[0x4] = _mm_add_ps(temp0_88, _mm_mul_ps(temp0_74, temp0_89))
float temp0_92[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_67)
float temp0_95[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
float temp0_96[0x4] = _mm_mul_ps(temp0_93, temp0_83)
float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xff), temp0_89)
float temp0_102[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_95, temp0_81), temp0_94), temp0_96), temp0_98)
float temp0_103[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
float temp0_104[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0), temp0_67)
float temp0_107[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
float temp0_108[0x4] = _mm_mul_ps(temp0_104, temp0_83)
float temp0_109[0x4] = _mm_mul_ps(temp0_103, temp0_81)
float temp0_110[0x4] = _mm_mul_ps(temp0_107, temp0_81)
float temp0_111[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xff)
float temp0_112[0x4] = _mm_add_ps(temp0_109, temp0_106)
float temp0_113[0x4] = _mm_mul_ps(temp0_111, temp0_89)
float temp0_115[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_69, temp0_69, 0), var_1a8)
float temp0_116[0x4] = _mm_add_ps(temp0_112, temp0_108)
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_83)
float temp0_119[0x4] = _mm_add_ps(temp0_110, temp0_115)
float temp0_121[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xff), temp0_89)
float temp0_122[0x4] = _mm_add_ps(temp0_116, temp0_113)
zmm2_1 = (*arg4)[1]
float temp0_123[0x4] = _mm_add_ps(temp0_119, temp0_118)
float zmm1_1[0x4] = *arg4
float temp0_124[0x4] = _mm_add_ps(temp0_123, temp0_121)
zmm3_1 = (*arg4)[2]
temp0_31[3] = 0
temp0_31[0] = zmm1_1[0]
var_1a8[0].q = 0
float temp0_125[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xe1)
temp0_125[0] = zmm2_1[0]
var_1a8[2] = 0
float temp0_126[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xc6)
temp0_126[0] = zmm3_1[0]
float temp0_127[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0xc9)
float temp0_128[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xff)
float temp0_129[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xaa)
float temp0_130[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0x55)
float temp0_131[0x4] = _mm_mul_ps(temp0_129, temp0_122)
temp0_127[3] = 0
float temp0_132[0x4] = _mm_mul_ps(temp0_128, temp0_124)
float temp0_134[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_127, temp0_127, 0), temp0_91)
float temp0_135[0x4] = _mm_add_ps(temp0_132, temp0_131)
float temp0_137[0x4] = _mm_add_ps(_mm_mul_ps(temp0_130, temp0_102), temp0_134)
float temp0_138[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
float temp0_139[0x4] = _mm_add_ps(temp0_135, temp0_137)
temp0_139[0] = temp0_139[0] * 0.5f
float temp0_140[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0x55)
temp0_140[0] = temp0_140[0] * 0.5f
temp0_127[0] = temp0_139[0]
float temp0_141[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xaa)
temp0_141[0] = temp0_141[0] * 0.5f
float temp0_142[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xe1)
float temp0_143[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
temp0_142[0] = temp0_140[0]
float temp0_144[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xc6)
temp0_144[0] = temp0_141[0]
float temp0_145[0x4] = _mm_shuffle_ps(temp0_144, temp0_144, 0xc9)
float temp0_147[0x4] = _mm_mul_ps(temp0_138, _mm_shuffle_ps(temp0_145, temp0_145, 0))
float temp0_149[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_145, temp0_145, 0xff), zmm6)
float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f39670)
float temp0_151[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
float temp0_152[0x4] = _mm_add_ps(temp0_150, temp0_149)
float temp0_154[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(temp0_145, temp0_145, 0x55))
float temp0_156[0x4] = _mm_mul_ps(temp0_151, _mm_shuffle_ps(temp0_145, temp0_145, 0xaa))
float temp0_157[0x4] = __mulps_xmmps_memps(temp0_154, data_143f39660)
float temp0_158[0x4] = __mulps_xmmps_memps(temp0_156, data_143f39650)
*arg1 = _mm_add_ps(_mm_add_ps(temp0_152, temp0_157), temp0_158)
return arg1

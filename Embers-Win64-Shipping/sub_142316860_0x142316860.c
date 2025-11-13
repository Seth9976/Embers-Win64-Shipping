// 函数: sub_142316860
// 地址: 0x142316860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg3 != 0)
    result = sub_141f5e0e0(arg3, *(arg1 + 0x30))

if (arg3 == 0 || result.d == 0xffffffff)
    result.b = 0
else
    float var_f8[0x4]
    sub_141f5e2b0(arg3, &var_f8, result.d)
    int32_t var_208[0x4]
    float var_1e8
    sub_141a0e800(&var_1e8, &var_208, *(arg1 + 0x44))
    float var_1f8
    int32_t arg_18[0x4]
    sub_141a0e800(&var_1f8, &arg_18, *(arg1 + 0x48))
    float var_1d8
    int32_t var_1c8[0x4]
    sub_141a0e800(&var_1d8, &var_1c8, *(arg1 + 0x4c))
    float zmm4_1[0x4] = arg_18[0]
    float zmm3_1[0x4] = var_1f8
    float zmm9_1[0x4] = var_1d8
    float zmm2_4[0x4] = var_1e8
    float zmm5_1[0x4] = var_208[0]
    float zmm1_1[0x4] = *(arg1 + 0x50)
    float zmm8_1[0x4] = var_1c8[0]
    zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
    int32_t var_18c_1 = 0
    zmm9_1[0] = zmm9_1[0] * zmm2_4[0]
    int32_t var_17c_1 = 0
    zmm4_1[0] = zmm4_1[0] * zmm1_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm3_1[0]
    var_208[0] = zmm4_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm4_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm1_1[0]
    zmm1_1[0] = zmm1_1[0] * zmm2_4[0]
    var_1f8 = zmm3_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm3_1[0]
    var_1e8 = zmm1_1[0]
    zmm1_1 = *(arg1 + 0x54)
    zmm9_1[0] = zmm9_1[0] - zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm4_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm1_1[0]
    zmm9_1[0] = zmm9_1[0] + zmm8_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm5_1[0]
    arg_18[0] = zmm9_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm1_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm1_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm2_4[0]
    zmm2_4 = *(arg1 + 0x58)
    var_1d8 = (zmm9_1 ^ 0x80000000)[0]
    zmm9_1[0] = zmm9_1[0] * zmm3_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm4_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm4_1[0]
    zmm8_1[0] = zmm8_1[0] + zmm9_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm3_1[0]
    var_1c8[0] = zmm9_1[0]
    zmm9_1[0] = zmm9_1[0] - zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm2_4[0]
    float var_1b8_1 = (zmm8_1 ^ 0x80000000)[0]
    zmm4_1 = data_143f57840
    zmm9_1[0] = zmm9_1[0] * zmm2_4[0]
    int32_t var_16c_1 = 0
    zmm1_1 = *(arg5 + 4)
    float temp0_1[0x4] = _mm_unpacklo_ps(*arg5, (*(arg5 + 8))[0].q)
    float zmm0_1[0x4] = data_143f57890
    zmm8_1[0] = zmm8_1[0] * zmm5_1[0]
    int32_t var_15c_1 = 0x3f800000
    float var_1a8_1 = zmm9_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm2_4[0]
    float temp0_4[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm1_1, 0)[0].q), data_143f578a0)
    float var_1a4_1 = zmm8_1[0]
    float temp0_9[0x4] = _mm_sub_ps(temp0_4, 
        __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvtps_epi32(_mm_mul_ps(zmm0_1, temp0_4))), 
            data_143f57880))
    zmm1_1 = data_142dc1870
    zmm0_1 = __andps_xmmxud_memxud(temp0_9, data_143f57850)
    zmm2_4 = __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_9, data_143f57870), data_143f57860)
    float temp0_13[0x4] = _mm_cmpeq_ps(zmm4_1, zmm0_1, 1)
    zmm0_1 = data_142dc1850
    float temp0_14[0x4] = _mm_sub_ps(zmm2_4, temp0_9)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
    zmm2_4 = _mm_and_ps(temp0_14 ^ temp0_9, temp0_13) ^ temp0_9
    float temp0_18[0x4] = _mm_mul_ps(zmm2_4, zmm2_4)
    float temp0_20[0x4] = _mm_add_ps(_mm_mul_ps(temp0_15, temp0_18), temp0_16)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
    float temp0_23[0x4] = _mm_add_ps(_mm_mul_ps(temp0_20, temp0_18), temp0_21)
    float temp0_24[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
    float temp0_26[0x4] = _mm_add_ps(_mm_mul_ps(temp0_23, temp0_18), temp0_24)
    float temp0_27[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    float temp0_28[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)
    float temp0_30[0x4] = _mm_add_ps(_mm_mul_ps(temp0_26, temp0_18), temp0_27)
    zmm0_1 = data_142dc1860
    float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55), temp0_18)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
    float temp0_34[0x4] = _mm_mul_ps(temp0_30, temp0_18)
    float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_33)
    float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_28)
    zmm1_1 = data_142dc1880
    float temp0_37[0x4] = _mm_mul_ps(temp0_35, temp0_18)
    float temp0_38[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
    float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm2_4)
    float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_38)
    float temp0_41[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
    float temp0_43[0x4] = _mm_add_ps(_mm_mul_ps(temp0_40, temp0_18), temp0_41)
    float temp0_44[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    float temp0_45[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)
    float temp0_49[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_43, temp0_18), temp0_44), temp0_18), temp0_45)
    int128_t zmm15 = *(arg4 + 4)
    float temp0_51[0x4] =
        _mm_mul_ps(temp0_49, _mm_and_ps(data_143f57830 ^ data_143f57810, temp0_13) ^ data_143f57810)
    int32_t var_14c_1 = 0
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
    temp0_52[0] = temp0_52[0] * temp0_39[0]
    int32_t var_13c_1 = 0
    int32_t var_12c_1 = 0
    temp0_51[0] = temp0_51[0] * temp0_53[0]
    int32_t var_11c_1 = 0x3f800000
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xaa)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
    temp0_51[0] = temp0_51[0] * temp0_52[0]
    temp0_54[0] = temp0_54[0] * temp0_39[0]
    temp0_54[0] = temp0_54[0] * temp0_53[0]
    temp0_52[0] = temp0_52[0] * temp0_55[0]
    temp0_55[0] = temp0_55[0] * temp0_51[0]
    temp0_52[0] = temp0_52[0] - temp0_54[0]
    temp0_54[0] = temp0_54[0] * temp0_55[0]
    temp0_54[0] = temp0_54[0] * temp0_53[0]
    temp0_52[0] = temp0_52[0] * temp0_53[0]
    temp0_54[0] = temp0_54[0] * temp0_55[0]
    temp0_55[0] = temp0_55[0] * temp0_52[0]
    temp0_52[0] = temp0_52[0] + temp0_54[0]
    temp0_54[0] = temp0_54[0] * temp0_51[0]
    temp0_55[0] = temp0_55[0] - temp0_54[0]
    zmm1_1 = var_208[0]
    float var_158[0x4]
    var_158[0] = temp0_55[0]
    temp0_52[0] = temp0_52[0] * temp0_53[0]
    float temp0_56[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
    temp0_56[0] = temp0_51[0]
    temp0_54[0] = temp0_54[0] + temp0_52[0]
    zmm0_1 = arg_18[0]
    float var_198[0x4]
    var_198[0] = zmm1_1[0]
    zmm1_1 = var_1f8
    float var_188[0x4]
    var_188[0] = zmm0_1[0]
    zmm0_1 = var_1c8[0]
    float temp0_57[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
    temp0_57[0] = zmm0_1[0]
    float temp0_58[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
    zmm0_1 = var_1d8
    temp0_58[0] = zmm1_1[0]
    zmm1_1 = var_1e8
    int128_t zmm14 = *arg4
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xc6)
    temp0_59[0] = temp0_39[0]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc6)
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc9)
    temp0_60[0] = zmm0_1[0]
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xc6)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc9)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
    temp0_62[0] = zmm1_1[0]
    float temp0_65[0x4] = _mm_mul_ps(temp0_64, temp0_63)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
    float temp0_67[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xc9)
    float temp0_68[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xaa)
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
    float temp0_71[0x4] = _mm_add_ps(temp0_65, _mm_mul_ps(temp0_66, temp0_67))
    float var_178[0x4]
    var_178[0] = var_1b8_1[0]
    float temp0_72[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
    temp0_72[0] = var_1a8_1[0]
    float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xc6)
    temp0_73[0] = var_1a4_1[0]
    float var_168[0x4]
    var_168[0] = (*(arg1 + 0x38))[0]
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xc9)
    zmm0_1 = *(arg1 + 0x3c)
    float temp0_75[0x4] = _mm_mul_ps(temp0_68, temp0_74)
    float temp0_76[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
    temp0_76[0] = zmm0_1[0]
    zmm0_1 = *(arg1 + 0x40)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc6)
    float temp0_78[0x4] = _mm_add_ps(temp0_71, temp0_75)
    temp0_77[0] = zmm0_1[0]
    float temp0_79[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc9)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, _mm_mul_ps(temp0_69, temp0_79))
    float var_148[0x4]
    var_148[0] = temp0_52[0]
    float temp0_82[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
    temp0_82[0] = temp0_52[0]
    float temp0_83[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0xc6)
    temp0_83[0] = (temp0_51 ^ 0x80000000)[0]
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0xc9)
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0)
    float temp0_86[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
    float temp0_87[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
    float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xff), temp0_79)
    float temp0_90[0x4] = _mm_mul_ps(temp0_85, temp0_67)
    float temp0_91[0x4] = _mm_mul_ps(temp0_87, temp0_74)
    float temp0_95[0x4] = _mm_add_ps(
        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_86, temp0_63), temp0_90), temp0_91), temp0_89)
    float var_138[0x4]
    var_138[0] = (temp0_54 ^ 0x80000000)[0]
    float temp0_96[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
    temp0_96[0] = temp0_55[0]
    float temp0_97[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0xc6)
    temp0_97[0] = temp0_54[0]
    float temp0_98[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xc9)
    float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x55)
    float temp0_100[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0)
    float temp0_101[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xaa)
    float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xff), temp0_79)
    float temp0_104[0x4] = _mm_mul_ps(temp0_99, temp0_63)
    float temp0_105[0x4] = _mm_mul_ps(temp0_100, temp0_67)
    float temp0_106[0x4] = _mm_mul_ps(temp0_101, temp0_74)
    float temp0_107[0x4] = _mm_add_ps(temp0_104, temp0_105)
    zmm0_1 = *(arg4 + 8)
    float temp0_109[0x4] = _mm_add_ps(_mm_add_ps(temp0_107, temp0_106), temp0_103)
    float var_128[0x4]
    var_128[0] = zmm14.d
    float temp0_110[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
    temp0_110[0] = zmm15.d
    float temp0_111[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xc6)
    temp0_111[0] = zmm0_1[0]
    float temp0_112[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xc9)
    float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0)
    float temp0_114[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xaa)
    float temp0_115[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0x55)
    result.b = 1
    float temp0_116[0x4] = _mm_mul_ps(temp0_113, temp0_67)
    float temp0_117[0x4] = _mm_mul_ps(temp0_114, temp0_74)
    float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0xff), temp0_79)
    float temp0_120[0x4] = _mm_mul_ps(temp0_115, temp0_63)
    float zmm6[0x4] = var_f8
    float temp0_121[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0x55)
    float temp0_122[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0x55)
    float temp0_123[0x4] = _mm_add_ps(temp0_120, temp0_116)
    float var_e8[0x4]
    float temp0_124[0x4] = _mm_mul_ps(temp0_121, var_e8)
    float temp0_125[0x4] = _mm_mul_ps(temp0_122, var_e8)
    float temp0_127[0x4] = _mm_add_ps(_mm_add_ps(temp0_123, temp0_117), temp0_119)
    float temp0_128[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0)
    float temp0_129[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0xaa)
    float temp0_130[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0x55)
    float temp0_131[0x4] = _mm_mul_ps(temp0_128, zmm6)
    float var_d8[0x4]
    float temp0_132[0x4] = _mm_mul_ps(temp0_129, var_d8)
    float var_c8[0x4]
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xff), var_c8)
    float temp0_136[0x4] = _mm_add_ps(_mm_mul_ps(temp0_130, var_e8), temp0_131)
    float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0), zmm6)
    float temp0_139[0x4] = _mm_add_ps(temp0_136, temp0_132)
    float temp0_140[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xaa)
    float temp0_141[0x4] = _mm_add_ps(temp0_124, temp0_138)
    float temp0_142[0x4] = _mm_mul_ps(temp0_140, var_d8)
    float temp0_143[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xff)
    float temp0_144[0x4] = _mm_add_ps(temp0_139, temp0_134)
    float temp0_146[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_109, temp0_109, 0), zmm6)
    float temp0_147[0x4] = _mm_add_ps(temp0_141, temp0_142)
    float temp0_149[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0x55), var_e8)
    float temp0_150[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xaa)
    float temp0_151[0x4] = _mm_add_ps(temp0_125, temp0_146)
    float temp0_152[0x4] = _mm_mul_ps(temp0_150, var_d8)
    float temp0_153[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0)
    *arg2 = temp0_144
    float temp0_154[0x4] = _mm_mul_ps(temp0_153, zmm6)
    float temp0_155[0x4] = _mm_add_ps(temp0_151, temp0_152)
    float temp0_156[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xff)
    float temp0_157[0x4] = _mm_mul_ps(temp0_143, var_c8)
    float temp0_158[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xaa)
    float temp0_159[0x4] = _mm_add_ps(temp0_149, temp0_154)
    float temp0_160[0x4] = _mm_mul_ps(temp0_158, var_d8)
    float temp0_161[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xff)
    float temp0_162[0x4] = _mm_add_ps(temp0_147, temp0_157)
    float temp0_163[0x4] = _mm_mul_ps(temp0_156, var_c8)
    float temp0_164[0x4] = _mm_add_ps(temp0_159, temp0_160)
    float temp0_165[0x4] = _mm_mul_ps(temp0_161, var_c8)
    arg2[1] = temp0_162
    float temp0_166[0x4] = _mm_add_ps(temp0_155, temp0_163)
    float temp0_167[0x4] = _mm_add_ps(temp0_164, temp0_165)
    arg2[2] = temp0_166
    arg2[3] = temp0_167

return result

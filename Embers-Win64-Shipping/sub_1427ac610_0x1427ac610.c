// 函数: sub_1427ac610
// 地址: 0x1427ac610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
float zmm8[0x4] = *(arg1 + 0xa0)
float zmm11[0x4] = *(arg2 + 4)
float zmm14[0x4] = arg4
int128_t zmm9 = *(arg2 + 8)
float zmm5[0x4] = *(arg1 + 0xc0)
float zmm13[0x4] = *arg2
float zmm4[0x4] = *(arg1 + 0xb0)
float temp0[0x4] = _mm_unpacklo_ps(zmm11, 0)
float temp0_3[0x4] = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm9.q), temp0[0].q), zmm5)
float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_5)
float temp0_11[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4), temp0_8)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_5)
float temp0_17[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_14, temp0_4), temp0_15)
float temp0_19[0x4] = _mm_add_ps(_mm_mul_ps(temp0_6, temp0_12), temp0_3)
float temp0_20[0x4] = _mm_unpacklo_ps(*(arg2 + 0xc), zmm9.q)
float temp0_22[0x4] = _mm_add_ps(_mm_add_ps(temp0_17, temp0_19), zmm4)
float var_118 = temp0_22[0]
float var_114 = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0]
float var_110 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
float temp0_27[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_20, _mm_unpacklo_ps(zmm11, 0)[0].q), zmm5)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc9), temp0_5)
float temp0_32[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), temp0_4), temp0_29)
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_5)
float temp0_42[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_35, temp0_4), temp0_36), 
        _mm_add_ps(_mm_mul_ps(temp0_6, temp0_33), temp0_27)), 
    zmm4)
float var_10c = temp0_42[0]
float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
float var_104 = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)[0]
float var_108 = temp0_43[0]
arg4 = *(arg2 + 0xc)
float temp0_45[0x4] = _mm_unpacklo_ps(arg2[1].d, 0)
float temp0_48[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(arg4, zmm9.q), temp0_45[0].q), zmm5)
float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xc9), temp0_5)
float temp0_53[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xd2), temp0_4), temp0_50)
float temp0_54[0x4] = _mm_add_ps(temp0_53, temp0_53)
float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xc9), temp0_5)
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xd2), temp0_4)
float zmm7[0x4] = *(arg2 + 0x14)
float temp0_59[0x4] = _mm_mul_ps(temp0_54, temp0_6)
float temp0_60[0x4] = _mm_sub_ps(temp0_58, temp0_56)
float temp0_61[0x4] = _mm_unpacklo_ps(zmm13, zmm9.q)
float temp0_63[0x4] = _mm_add_ps(temp0_60, _mm_add_ps(temp0_59, temp0_48))
float zmm2[0x4] = arg2[1].d
float temp0_64[0x4] = _mm_add_ps(temp0_63, zmm4)
float var_100 = temp0_64[0]
float var_fc = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)[0]
float var_f8 = _mm_shuffle_ps(temp0_64, temp0_64, 0xaa)[0]
float temp0_69[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_61, _mm_unpacklo_ps(zmm2, 0)[0].q), zmm5)
zmm5 = *(arg1 + 0xa0)
float temp0_70[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_71[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_72[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xd2)
float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xc9), temp0_70)
float temp0_75[0x4] = _mm_mul_ps(temp0_72, temp0_71)
float temp0_76[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_77[0x4] = _mm_sub_ps(temp0_75, temp0_74)
float temp0_78[0x4] = _mm_add_ps(temp0_77, temp0_77)
float temp0_79[0x4] = _mm_mul_ps(temp0_76, temp0_78)
float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xd2), temp0_71)
float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_69)
float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xc9), temp0_70)
float temp0_88[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm7[0].q), _mm_unpacklo_ps(zmm11, 0)[0].q), 
    *(arg1 + 0xc0))
float temp0_90[0x4] = _mm_add_ps(_mm_sub_ps(temp0_81, temp0_84), temp0_82)
zmm5 = *(arg1 + 0xa0)
float temp0_91[0x4] = __addps_xmmps_memps(temp0_90, *(arg1 + 0xb0))
float var_f4 = temp0_91[0]
float temp0_92[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0x55)
float var_ec = _mm_shuffle_ps(temp0_91, temp0_91, 0xaa)[0]
float temp0_94[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float var_f0 = temp0_92[0]
float temp0_95[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_96[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xc9)
float temp0_97[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xd2)
float temp0_98[0x4] = _mm_mul_ps(temp0_96, temp0_95)
float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_94)
float temp0_100[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_101[0x4] = _mm_sub_ps(temp0_99, temp0_98)
float temp0_102[0x4] = _mm_add_ps(temp0_101, temp0_101)
float temp0_103[0x4] = _mm_mul_ps(temp0_100, temp0_102)
float temp0_104[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0xc9)
float temp0_105[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0xd2)
float temp0_106[0x4] = _mm_mul_ps(temp0_104, temp0_95)
float temp0_107[0x4] = _mm_mul_ps(temp0_105, temp0_94)
float temp0_108[0x4] = _mm_add_ps(temp0_103, temp0_88)
float zmm6[0x4] = *(arg2 + 0xc)
float temp0_109[0x4] = _mm_unpacklo_ps(zmm11, 0)
float temp0_110[0x4] = _mm_unpacklo_ps(zmm6, zmm7[0].q)
float temp0_111[0x4] = _mm_sub_ps(temp0_107, temp0_106)
float temp0_113[0x4] =
    __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_110, temp0_109[0].q), *(arg1 + 0xc0))
float temp0_114[0x4] = _mm_add_ps(temp0_111, temp0_108)
zmm5 = *(arg1 + 0xa0)
float temp0_115[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_116[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xd2)
float temp0_117[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_118[0x4] = __addps_xmmps_memps(temp0_114, *(arg1 + 0xb0))
float temp0_119[0x4] = _mm_mul_ps(temp0_116, temp0_117)
float temp0_120[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float var_e8 = temp0_118[0]
float temp0_121[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0x55)
float var_e0 = _mm_shuffle_ps(temp0_118, temp0_118, 0xaa)[0]
float var_e4 = temp0_121[0]
float temp0_125[0x4] =
    _mm_sub_ps(temp0_119, _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xc9), temp0_115))
float temp0_126[0x4] = _mm_add_ps(temp0_125, temp0_125)
float temp0_127[0x4] = _mm_mul_ps(temp0_120, temp0_126)
float temp0_128[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0xc9)
float temp0_129[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0xd2)
zmm2 = arg2[1].d
float temp0_130[0x4] = _mm_mul_ps(temp0_128, temp0_115)
float temp0_131[0x4] = _mm_add_ps(temp0_127, temp0_113)
zmm6 = *(arg2 + 0xc)
float temp0_132[0x4] = _mm_mul_ps(temp0_129, temp0_117)
float temp0_133[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_136[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm7[0].q), temp0_133[0].q), *(arg1 + 0xc0))
float temp0_138[0x4] = _mm_add_ps(_mm_sub_ps(temp0_132, temp0_130), temp0_131)
zmm5 = *(arg1 + 0xa0)
float temp0_139[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_140[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_141[0x4] = __addps_xmmps_memps(temp0_138, *(arg1 + 0xb0))
float var_dc = temp0_141[0]
float temp0_142[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0x55)
float var_d4 = _mm_shuffle_ps(temp0_141, temp0_141, 0xaa)[0]
float temp0_144[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xd2)
float var_d8 = temp0_142[0]
float temp0_145[0x4] = _mm_mul_ps(temp0_144, temp0_139)
float temp0_146[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
int64_t i = 0
float temp0_149[0x4] =
    _mm_sub_ps(temp0_145, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_140))
float temp0_150[0x4] = _mm_add_ps(temp0_149, temp0_149)
float temp0_151[0x4] = _mm_mul_ps(temp0_146, temp0_150)
float temp0_152[0x4] = _mm_shuffle_ps(temp0_150, temp0_150, 0xd2)
float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xc9), temp0_140)
zmm2 = arg2[1].d
float temp0_155[0x4] = _mm_add_ps(temp0_151, temp0_136)
float temp0_156[0x4] = _mm_mul_ps(temp0_152, temp0_139)
float temp0_160[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm7[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q), 
    *(arg1 + 0xc0))
float temp0_162[0x4] = _mm_add_ps(_mm_sub_ps(temp0_156, temp0_154), temp0_155)
zmm5 = *(arg1 + 0xa0)
float temp0_163[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xd2)
float temp0_164[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_165[0x4] = __addps_xmmps_memps(temp0_162, *(arg1 + 0xb0))
float var_d0 = temp0_165[0]
float var_cc = _mm_shuffle_ps(temp0_165, temp0_165, 0x55)[0]
float temp0_168[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xc9), temp0_164)
float var_c8 = _mm_shuffle_ps(temp0_165, temp0_165, 0xaa)[0]
float temp0_170[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_171[0x4] = _mm_mul_ps(temp0_163, temp0_170)
float temp0_172[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_173[0x4] = _mm_sub_ps(temp0_171, temp0_168)
float temp0_174[0x4] = _mm_add_ps(temp0_173, temp0_173)
float temp0_175[0x4] = _mm_mul_ps(temp0_172, temp0_174)
float temp0_176[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xc9)
float temp0_178[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0xd2), temp0_170)
float temp0_179[0x4] = _mm_mul_ps(temp0_176, temp0_164)
float temp0_180[0x4] = _mm_add_ps(temp0_175, temp0_160)
float temp0_183[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_178, temp0_179), temp0_180), *(arg1 + 0xb0))
float var_c4 = temp0_183[0]
float temp0_184[0x4] = _mm_shuffle_ps(temp0_183, temp0_183, 0x55)
float var_bc = _mm_shuffle_ps(temp0_183, temp0_183, 0xaa)[0]
float var_c0 = temp0_184[0]
int64_t result

do
    result = 0xc
    int64_t result_1 = 0
    int64_t j_1 = 4
    int64_t j
    
    do
        (*(*arg1 + 8))(arg1, &(&var_118)[sx.q(*(i + result + &data_1434b9e80)) * 3], 
            &(&var_118)[sx.q(*(i + &data_1434b9e80 + result_1)) * 3], arg3, zmm14[0], arg5)
        result = result_1
        result_1 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    i += 0x10
while (i s< 0x60)

__security_check_cookie(rax_1 ^ &var_148)
return result

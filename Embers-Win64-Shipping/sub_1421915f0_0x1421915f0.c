// 函数: sub_1421915f0
// 地址: 0x1421915f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4]

if (arg2 == 0)
    float zmm1[0x4] = data_143dbb0d0
    *arg1 = data_143dbb0c0
    zmm0 = data_143dbb0e0
    arg1[1] = zmm1
    arg1[2] = zmm0
else
    zmm0 = *(arg2 + 0x2c0)
    zmm0[0] = zmm0[0] * 0.00872664619f
    float zmm8[0x4] = *(arg2 + 0x2a0)
    float zmm11[0x4] = *(arg2 + 0x290)
    float zmm15[0x4] = *(arg2 + 0x2b0)
    float zmm7[0x4] = tanf(zmm0[0])
    float zmm0_1[0x4] = arg5
    zmm0_1[0] = zmm0_1[0] * 0.00872664619f
    float zmm0_2[0x4] = tanf(zmm0_1[0])
    zmm7[0] = zmm7[0] / zmm0_2[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
    zmm7[0] = zmm7[0] * zmm8[0]
    float temp0_3[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm8, zmm8, 0x55), 0)
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, temp0_1[0].q), temp0_3[0].q)
    uint32_t var_f8[0x4]
    sub_140ade170(arg4, &var_f8)
    float zmm2_1[0x4] = *(arg3 + 4)
    float zmm8_1[0x4] = data_14399f668
    float zmm5_1[0x4] = var_f8
    float temp0_6[0x4] = _mm_unpacklo_ps(*arg3, (*(arg3 + 8))[0].q)
    float temp0_7[0x4] = _mm_unpacklo_ps(zmm8_1, data_14399f670[0].q)
    float temp0_9[0x4] = _mm_unpacklo_ps(temp0_6, _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float temp0_11[0x4] = _mm_unpacklo_ps(temp0_7, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float zmm14[0x4]
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm15, temp0_11), data_143f4d7c0, 1))
            == 0)
        float temp0_144[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x1b)
        float temp0_146[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_144)
        float temp0_147[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
        float temp0_148[0x4] = _mm_mul_ps(temp0_11, temp0_5)
        float temp0_149[0x4] = __mulps_xmmps_memps(temp0_146, data_143f4d780)
        float temp0_150[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_151[0x4] = _mm_mul_ps(zmm11, temp0_150)
        float temp0_152[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xd2)
        zmm14 = _mm_mul_ps(temp0_11, zmm15)
        float temp0_154[0x4] = _mm_add_ps(temp0_149, temp0_151)
        float temp0_156[0x4] = _mm_mul_ps(temp0_147, _mm_shuffle_ps(zmm11, zmm11, 0x4e))
        float temp0_159[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), _mm_shuffle_ps(zmm11, zmm11, 0xb1))
        float temp0_160[0x4] = __mulps_xmmps_memps(temp0_156, data_143f4d770)
        float temp0_161[0x4] = __mulps_xmmps_memps(temp0_159, data_143f4d760)
        float temp0_162[0x4] = _mm_add_ps(temp0_154, temp0_160)
        float temp0_163[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_164[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_165[0x4] = _mm_mul_ps(temp0_152, temp0_164)
        zmm6_1 = _mm_add_ps(temp0_162, temp0_161)
        float temp0_169[0x4] =
            _mm_sub_ps(temp0_165, _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0xc9), temp0_163))
        float temp0_170[0x4] = _mm_add_ps(temp0_169, temp0_169)
        float temp0_171[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xd2)
        float temp0_172[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xc9)
        float temp0_173[0x4] = _mm_mul_ps(temp0_171, temp0_164)
        float temp0_174[0x4] = _mm_mul_ps(temp0_172, temp0_163)
        float temp0_175[0x4] = _mm_mul_ps(temp0_170, temp0_150)
        zmm7_1 = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_173, temp0_174), _mm_add_ps(temp0_175, temp0_148)), temp0_9)
    else
        float zmm9[0x4] = data_143f4d4a0
        float temp0_15[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
        float temp0_16[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
        _mm_mul_ps(zmm15, temp0_11)
        float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x29), temp0_16)
        float temp0_21[0x4] = _mm_mul_ps(temp0_15, zmm5_1)
        float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x12), 
            _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff))
        float temp0_27[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0x1a), 
            _mm_shuffle_ps(temp0_21, temp0_21, 1))
        float temp0_28[0x4] = _mm_add_ps(temp0_24, temp0_20)
        float temp0_29[0x4] = _mm_sub_ps(temp0_20, temp0_24)
        float temp0_30[0x4] = _mm_add_ps(zmm11, zmm11)
        float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_11)
        float temp0_32[0x4] = _mm_mul_ps(temp0_17, temp0_29)
        float temp0_33[0x4] = _mm_sub_ps(zmm9, temp0_27)
        float temp0_34[0x4] = _mm_mul_ps(zmm11, temp0_30)
        float zmm1_1[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_33, temp0_11), data_143f4d4b0)
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_32, zmm1_1, 0x32)
        float temp0_39[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_31, zmm1_1, 0), temp0_37, 0x82)
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_31, zmm1_1, 0x31)
        float temp0_42[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_32, zmm1_1, 0x10), temp0_40, 0x88)
        float temp0_44[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_31, temp0_32, 0x12), zmm1_1, 0xe8)
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x29)
        zmm9[0].q = temp0_9 u>> 0x40
        float temp0_46[0x4] = _mm_shuffle_ps(temp0_9, zmm9, 0xc4)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, _mm_shuffle_ps(zmm11, zmm11, 4))
        float temp0_51[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x1a), 
            _mm_shuffle_ps(temp0_34, temp0_34, 1))
        float temp0_52[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
        float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x12), temp0_52)
        float temp0_55[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
        float temp0_56[0x4] = _mm_add_ps(temp0_54, temp0_48)
        float temp0_57[0x4] = _mm_sub_ps(temp0_48, temp0_54)
        float temp0_58[0x4] = _mm_mul_ps(temp0_56, zmm15)
        float temp0_59[0x4] = _mm_mul_ps(temp0_55, temp0_57)
        zmm1_1 =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, temp0_51), zmm15), data_143f4d4b0)
        float temp0_65[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_58, zmm1_1, 0), 
            _mm_shuffle_ps(temp0_59, zmm1_1, 0x32), 0x82)
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_59, zmm1_1, 0x10)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_66, _mm_shuffle_ps(temp0_58, zmm1_1, 0x31), 0x88)
        float temp0_70[0x4] = _mm_mul_ps(temp0_67, temp0_42)
        zmm9[0].q = temp0_5 u>> 0x40
        float temp0_71[0x4] = _mm_shuffle_ps(temp0_5, zmm9, 0xc4)
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0), temp0_39)
        float temp0_75[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_58, temp0_59, 0x12), zmm1_1, 0xe8)
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xaa)
        float temp0_77[0x4] = _mm_add_ps(temp0_70, temp0_73)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_46)
        float temp0_80[0x4] = _mm_mul_ps(temp0_76, temp0_44)
        float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0), temp0_39)
        float temp0_83[0x4] = _mm_add_ps(temp0_77, temp0_80)
        float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_44)
        float temp0_86[0x4] = _mm_add_ps(temp0_83, temp0_79)
        float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0x55), temp0_42)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xff)
        float var_e8[0x4] = temp0_86
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x55)
        float temp0_91[0x4] = _mm_add_ps(temp0_88, temp0_82)
        float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_42)
        float temp0_93[0x4] = _mm_mul_ps(temp0_89, temp0_46)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0)
        float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_85)
        float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_39)
        float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xaa), temp0_44)
        float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_93)
        float temp0_100[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xff)
        float temp0_101[0x4] = _mm_add_ps(temp0_92, temp0_96)
        float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_46)
        float temp0_103[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0)
        int96_t var_d8_1 = temp0_99[0].12
        float temp0_104[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
        float temp0_105[0x4] = _mm_add_ps(temp0_101, temp0_98)
        float temp0_106[0x4] = _mm_mul_ps(temp0_104, temp0_42)
        float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xaa), temp0_44)
        float temp0_109[0x4] = _mm_mul_ps(temp0_103, temp0_39)
        float temp0_110[0x4] = _mm_add_ps(temp0_105, temp0_102)
        float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xff), temp0_46)
        float temp0_113[0x4] = _mm_add_ps(temp0_106, temp0_109)
        int96_t var_c8_1 = temp0_110[0].12
        int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_113, temp0_108), temp0_112)[0].12
        int128_t zmm9_1
        zmm9_1, zmm14 = sub_1407740e0(&var_e8, 0x322bcc77)
        float zmm2_2[0x4] = var_e8[0]
        float zmm1_2 = var_e8[1]
        float zmm4_2[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(data_143f4d7c0, zmm14, 2), data_143f4d7b0 ^ zmm9_1)
            ^ data_143f4d7b0
        zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
        zmm1_2 = zmm1_2 * zmm4_2[0]
        uint32_t zmm0_4[0x4] = var_e8[2]
        zmm0_4[0] = zmm0_4[0] f* zmm4_2[0]
        var_e8[0] = zmm2_2[0]
        float temp0_118[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        var_e8[2] = zmm0_4[0]
        zmm0_4 = var_d8_1:8.d
        zmm0_4[0] = zmm0_4[0] f* temp0_118[0]
        var_e8[1] = zmm1_2
        zmm1_2 = var_d8_1:4.d * temp0_118[0]
        float zmm3_2 = var_d8_1.d * temp0_118[0]
        zmm2_2 = var_c8_1.d
        float temp0_119[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        var_d8_1:8.d = zmm0_4[0]
        zmm0_4 = var_c8_1:8.d
        var_d8_1:4.d = zmm1_2
        zmm0_4[0] = zmm0_4[0] f* temp0_119[0]
        zmm2_2[0] = zmm2_2[0] * temp0_119[0]
        zmm1_2 = var_c8_1:4.d * temp0_119[0]
        var_c8_1:8.d = zmm0_4[0]
        var_d8_1.d = zmm3_2
        var_c8_1.d = zmm2_2[0]
        var_c8_1:4.d = zmm1_2
        sub_14077e4a0(&var_f8, &var_e8)
        uint32_t zmm5_2[0x4] = var_f8
        zmm6_1 = data_143f4d7a0
        float temp0_120[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        float temp0_122[0x4] = _mm_add_ps(temp0_120, _mm_shuffle_ps(temp0_120, temp0_120, 0x4e))
        float temp0_124[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_122, temp0_122, 0x39), temp0_122)
        float temp0_125[0x4] = _mm_rsqrt_ps(temp0_124)
        float temp0_126[0x4] = _mm_mul_ps(temp0_124, zmm6_1)
        float temp0_131[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_125, temp0_125), temp0_126)), 
                temp0_125), 
            temp0_125)
        float temp0_134[0x4] =
            _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_131, temp0_131), temp0_126))
        float temp0_136[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_124, 2)
        float temp0_138[0x4] = _mm_add_ps(_mm_mul_ps(temp0_134, temp0_131), temp0_131)
        float temp0_139[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
        zmm6_1 =
            _mm_and_ps(_mm_mul_ps(temp0_138, zmm5_2) ^ data_143f4d790, temp0_136) ^ data_143f4d790
        zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_139[0].q)
    
    *arg1 = zmm6_1
    arg1[1] = zmm7_1
    arg1[2] = zmm14
return arg1

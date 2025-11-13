// 函数: sub_141de06c0
// 地址: 0x141de06c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    *arg1 = 1
    *(arg1 + 0x10) = *arg2
    *(arg1 + 0x20) = arg2[1]
    *(arg1 + 0x30) = arg2[2]
    *(arg1 + 0x30) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143a2d2d0, data_143a2d2d8[0].q), 
        _mm_unpacklo_ps(data_143a2d2d4, 0)[0].q)
    *(arg1 + 4) = 0x3f800000
    return 

float zmm8[0x4] = *(arg1 + 0x30)
float zmm14[0x4] = arg2[2]
float zmm6[0x4]
float zmm7[0x4]
float zmm13[0x4]
float zmm3[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143f39140, 1)) == 0)
    float zmm4[0x4] = *(arg1 + 0x10)
    float zmm2[0x4] = *arg2
    zmm3 = arg2[1]
    float temp0_135[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_135)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_139[0x4] = _mm_mul_ps(zmm3, zmm8)
    float temp0_140[0x4] = __mulps_xmmps_memps(temp0_137, data_143f39110)
    float temp0_141[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    zmm13 = _mm_mul_ps(zmm14, zmm8)
    float temp0_144[0x4] = _mm_add_ps(temp0_140, _mm_mul_ps(temp0_141, zmm2))
    float temp0_146[0x4] = _mm_mul_ps(temp0_138, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_149[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_150[0x4] = __mulps_xmmps_memps(temp0_146, data_143f39100)
    float temp0_151[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xd2)
    float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f390f0)
    float temp0_153[0x4] = _mm_add_ps(temp0_144, temp0_150)
    float temp0_154[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_155[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_156[0x4] = _mm_mul_ps(temp0_151, temp0_155)
    zmm6 = _mm_add_ps(temp0_153, temp0_152)
    float temp0_160[0x4] =
        _mm_sub_ps(temp0_156, _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xc9), temp0_154))
    float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
    float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
    float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
    float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_155)
    float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_154)
    float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_141)
    zmm7 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_164, temp0_165), _mm_add_ps(temp0_166, temp0_139)), 
        *(arg1 + 0x20))
else
    zmm3 = *(arg1 + 0x10)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
    float temp0_7[0x4] = _mm_add_ps(zmm3, zmm3)
    float zmm9[0x4] = *(arg1 + 0x20)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_10[0x4] = _mm_mul_ps(zmm3, temp0_7)
    float temp0_12[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(temp0_7, temp0_7, 0x29))
    float temp0_14[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_7, temp0_7, 0x12))
    float temp0_17[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), _mm_shuffle_ps(temp0_10, temp0_10, 1))
    float zmm11[0x4] = data_143f39070
    _mm_mul_ps(zmm8, zmm14)
    float temp0_19[0x4] = _mm_sub_ps(zmm11, temp0_17)
    float temp0_20[0x4] = _mm_add_ps(temp0_14, temp0_12)
    float temp0_21[0x4] = _mm_sub_ps(temp0_12, temp0_14)
    float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm8)
    float temp0_23[0x4] = _mm_mul_ps(temp0_6, temp0_21)
    float temp0_24[0x4] = _mm_mul_ps(temp0_20, zmm8)
    float zmm1[0x4] = __andps_xmmxud_memxud(temp0_22, data_143f39050)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, zmm1, 0x32)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_23, zmm1, 0x10)
    float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm1, 0), temp0_26, 0x82)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, _mm_shuffle_ps(temp0_24, zmm1, 0x31), 0x88)
    float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, temp0_23, 0x12), zmm1, 0xe8)
    zmm1 = *arg2
    zmm11[0].q = zmm9 u>> 0x40
    float temp0_34[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
    float temp0_36[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_38[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_39[0x4] = _mm_mul_ps(zmm1, temp0_34)
    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x29), temp0_37)
    float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x12), temp0_38)
    float temp0_46[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x1a), _mm_shuffle_ps(temp0_39, temp0_39, 1))
    float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_41)
    float temp0_48[0x4] = _mm_sub_ps(temp0_41, temp0_43)
    float temp0_49[0x4] = _mm_sub_ps(zmm11, temp0_46)
    float temp0_50[0x4] = _mm_mul_ps(temp0_47, zmm14)
    float temp0_51[0x4] = _mm_mul_ps(temp0_36, temp0_48)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_49, zmm14), data_143f39050)
    float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1, 0), 
        _mm_shuffle_ps(temp0_51, zmm1, 0x32), 0x82)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_50, zmm1, 0x31)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
    float temp0_60[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, zmm1, 0x10), temp0_57, 0x88)
    float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_31)
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_50, temp0_51, 0x12)
    float zmm5[0x4] = arg2[1]
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, zmm1, 0xe8)
    float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_33)
    zmm11[0].q = zmm5 u>> 0x40
    float temp0_66[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
    float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_35)
    float temp0_71[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_29))
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_29)
    float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_65)
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
    float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
    float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_31)
    float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
    float var_e8[0x4] = temp0_77
    float temp0_81[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
    float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_31)
    float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_35)
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
    float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
    float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_29)
    float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_33)
    float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
    float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
    float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_35)
    float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
    int96_t var_d8_1 = temp0_90[0].12
    float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
    float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
    float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_31)
    float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_33)
    float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_29)
    float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
    float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_35)
    float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
    int96_t var_c8_1 = temp0_101[0].12
    int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_104, temp0_99), temp0_103)[0].12
    int128_t zmm11_1
    float zmm15_1[0x4]
    zmm11_1, zmm13, zmm15_1 = sub_1407740e0(&var_e8, 0x322bcc77)
    zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), data_143f39130 ^ zmm11_1) ^ data_143f39130
    float zmm2_1[0x4] = var_e8[0]
    float zmm1_1 = var_e8[1]
    uint32_t zmm0_1[0x4] = var_e8[2]
    zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
    zmm1_1 = zmm1_1 * zmm15_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
    var_e8[0] = zmm2_1[0]
    float temp0_109[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
    var_e8[1] = zmm1_1
    zmm1_1 = var_d8_1:4.d * temp0_109[0]
    var_e8[2] = zmm0_1[0]
    zmm0_1 = var_d8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
    float zmm3_1 = var_d8_1.d * temp0_109[0]
    zmm2_1 = var_c8_1.d
    var_d8_1:4.d = zmm1_1
    var_d8_1:8.d = zmm0_1[0]
    zmm0_1 = var_c8_1:8.d
    float temp0_110[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
    zmm1_1 = var_c8_1:4.d * temp0_110[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
    zmm2_1[0] = zmm2_1[0] * temp0_110[0]
    var_c8_1:4.d = zmm1_1
    var_c8_1:8.d = zmm0_1[0]
    var_d8_1.d = zmm3_1
    var_c8_1.d = zmm2_1[0]
    uint32_t var_f8[0x4]
    sub_14077e4a0(&var_f8, &var_e8)
    uint32_t zmm5_1[0x4] = var_f8
    zmm6 = data_143f390d0
    float temp0_111[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    float temp0_113[0x4] = _mm_add_ps(temp0_111, _mm_shuffle_ps(temp0_111, temp0_111, 0x4e))
    float temp0_115[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0x39), temp0_113)
    float temp0_116[0x4] = _mm_rsqrt_ps(temp0_115)
    float temp0_117[0x4] = _mm_mul_ps(temp0_115, zmm6)
    float temp0_122[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_116, temp0_116), temp0_117)), 
            temp0_116), 
        temp0_116)
    float temp0_125[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
    float temp0_127[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_115, 2)
    float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
    float temp0_130[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_129, zmm5_1) ^ data_143f390c0, temp0_127) ^ data_143f390c0
    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_130[0].q)
*(arg1 + 0x10) = zmm6
*(arg1 + 0x20) = zmm7
*(arg1 + 0x30) = zmm13
*(arg1 + 0x30) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143a2d2d0, data_143a2d2d8[0].q), 
    _mm_unpacklo_ps(data_143a2d2d4, 0)[0].q)

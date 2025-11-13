// 函数: sub_141b00170
// 地址: 0x141b00170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = arg2[2]
float zmm13[0x4] = arg3
float zmm15[0x4] = *(arg1 + 0xaf0)
uint32_t result =
    _mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm15, zmm8), data_143f2c530, 1))
float zmm6[0x4]
float zmm7[0x4]
float zmm14[0x4]
float zmm3[0x4]

if (result == 0)
    float zmm4[0x4] = *arg2
    arg3 = *(arg1 + 0xad0)
    zmm3 = *(arg1 + 0xae0)
    float temp0_132[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0x1b), temp0_132)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_136[0x4] = _mm_mul_ps(zmm3, zmm8)
    float temp0_137[0x4] = __mulps_xmmps_memps(temp0_134, data_143f2c500)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    zmm14 = _mm_mul_ps(zmm15, zmm8)
    float temp0_141[0x4] = _mm_add_ps(temp0_137, _mm_mul_ps(temp0_138, arg3))
    float temp0_143[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(arg3, arg3, 0x4e))
    float temp0_146[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(arg3, arg3, 0xb1))
    float temp0_147[0x4] = __mulps_xmmps_memps(temp0_143, data_143f2c4f0)
    float temp0_148[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_146, data_143f2c4e0)
    float temp0_150[0x4] = _mm_add_ps(temp0_141, temp0_147)
    float temp0_151[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xd2), temp0_151)
    zmm6 = _mm_add_ps(temp0_150, temp0_149)
    float temp0_157[0x4] =
        _mm_sub_ps(temp0_153, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_148))
    float temp0_158[0x4] = _mm_add_ps(temp0_157, temp0_157)
    float temp0_159[0x4] = _mm_mul_ps(temp0_138, temp0_158)
    float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_158, temp0_158, 0xd2), temp0_151)
    float temp0_162[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xc9)
    float temp0_163[0x4] = _mm_add_ps(temp0_159, temp0_136)
    zmm7 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_161, _mm_mul_ps(temp0_162, temp0_148)), temp0_163), arg2[1])
else
    zmm3 = *arg2
    float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
    float temp0_4[0x4] = _mm_add_ps(zmm3, zmm3)
    float zmm9[0x4] = arg2[1]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_7[0x4] = _mm_mul_ps(zmm3, temp0_4)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_5)
    float temp0_11[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_4, temp0_4, 0x12))
    float temp0_14[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), _mm_shuffle_ps(temp0_7, temp0_7, 1))
    float zmm11[0x4] = data_143f2c440
    _mm_mul_ps(zmm8, zmm15)
    float temp0_16[0x4] = _mm_sub_ps(zmm11, temp0_14)
    float temp0_17[0x4] = _mm_add_ps(temp0_11, temp0_9)
    float temp0_18[0x4] = _mm_sub_ps(temp0_9, temp0_11)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm8)
    float temp0_20[0x4] = _mm_mul_ps(temp0_3, temp0_18)
    float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm8)
    float zmm1[0x4] = __andps_xmmxud_memxud(temp0_19, data_143f2c450)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x32)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x10)
    float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0), temp0_23, 0x82)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_24, _mm_shuffle_ps(temp0_21, zmm1, 0x31), 0x88)
    float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_20, 0x12), zmm1, 0xe8)
    zmm1 = *(arg1 + 0xad0)
    zmm11[0].q = zmm9 u>> 0x40
    float temp0_31[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_36[0x4] = _mm_mul_ps(zmm1, temp0_31)
    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x29), temp0_34)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x12), temp0_35)
    float temp0_43[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), _mm_shuffle_ps(temp0_36, temp0_36, 1))
    float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_38)
    float temp0_45[0x4] = _mm_sub_ps(temp0_38, temp0_40)
    float temp0_46[0x4] = _mm_sub_ps(zmm11, temp0_43)
    float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm15)
    float temp0_48[0x4] = _mm_mul_ps(temp0_33, temp0_45)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_46, zmm15), data_143f2c450)
    float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0), 
        _mm_shuffle_ps(temp0_48, zmm1, 0x32), 0x82)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_47, zmm1, 0x31)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
    float temp0_57[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0x10), temp0_54, 0x88)
    float temp0_58[0x4] = _mm_mul_ps(temp0_55, temp0_28)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
    float zmm5[0x4] = *(arg1 + 0xae0)
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, zmm1, 0xe8)
    float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_30)
    zmm11[0].q = zmm5 u>> 0x40
    float temp0_63[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
    float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), temp0_32)
    float temp0_68[0x4] = _mm_add_ps(temp0_58, _mm_mul_ps(temp0_64, temp0_26))
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_26)
    float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_62)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_30)
    float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_66)
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_28)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
    float var_e8[0x4] = temp0_74
    float temp0_78[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
    float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_28)
    float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_32)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
    float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_73)
    float temp0_84[0x4] = _mm_mul_ps(temp0_82, temp0_26)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_30)
    float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
    float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_84)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_32)
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
    int96_t var_d8_1 = temp0_87[0].12
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_86)
    float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_28)
    float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_30)
    float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_26)
    float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_90)
    float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), temp0_32)
    float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
    int96_t var_c8_1 = temp0_98[0].12
    int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_101, temp0_96), temp0_100)[0].12
    int128_t zmm11_1
    zmm11_1, zmm13, zmm14 = sub_1407740e0(&var_e8, 0x322bcc77)
    uint32_t zmm0_1[0x4] = data_143f2c460
    float temp0_104[0x4] = _mm_cmpeq_ps(data_143f2c530, zmm14, 2)
    float zmm2[0x4] = var_e8[0]
    float zmm1_1 = var_e8[1]
    float zmm4_1[0x4] = _mm_and_ps(temp0_104, zmm0_1 ^ zmm11_1) ^ data_143f2c460
    zmm0_1 = var_e8[2]
    zmm2[0] = zmm2[0] * zmm4_1[0]
    zmm1_1 = zmm1_1 * zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    var_e8[0] = zmm2[0]
    float temp0_106[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_e8[1] = zmm1_1
    zmm1_1 = var_d8_1:4.d * temp0_106[0]
    var_e8[2] = zmm0_1[0]
    zmm0_1 = var_d8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_106[0]
    float zmm3_1 = var_d8_1.d * temp0_106[0]
    zmm2 = var_c8_1.d
    float temp0_107[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_d8_1:4.d = zmm1_1
    var_d8_1:8.d = zmm0_1[0]
    zmm0_1 = var_c8_1:8.d
    zmm1_1 = var_c8_1:4.d * temp0_107[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
    zmm2[0] = zmm2[0] * temp0_107[0]
    var_c8_1:4.d = zmm1_1
    var_c8_1:8.d = zmm0_1[0]
    var_d8_1.d = zmm3_1
    var_c8_1.d = zmm2[0]
    uint32_t var_f8[0x4]
    result = sub_14077e4a0(&var_f8, &var_e8)
    uint32_t zmm5_1[0x4] = var_f8
    zmm6 = data_143f2c520
    uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
    uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
    zmm1_2 = _mm_rsqrt_ps(zmm4_2)
    uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6)
    float temp0_119[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), zmm1_2), 
        zmm1_2)
    float temp0_122[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), zmm3_2))
    uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
    float temp0_126[0x4] = _mm_add_ps(_mm_mul_ps(temp0_122, temp0_119), temp0_119)
    float temp0_127[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_126, zmm5_1) ^ data_143f2c510, zmm0_2) ^ data_143f2c510
    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_127[0].q)
*(arg1 + 0xad0) = zmm6
*(arg1 + 0xae0) = zmm7
*(arg1 + 0xaf0) = zmm14
zmm13[0] = zmm13[0] f+ *(arg1 + 0xb00)
*(arg1 + 8) = 1
*(arg1 + 0xb00) = zmm13[0]
return result

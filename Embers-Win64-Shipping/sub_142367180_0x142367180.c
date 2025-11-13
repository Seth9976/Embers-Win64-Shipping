// 函数: sub_142367180
// 地址: 0x142367180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_108[0x4]
float zmm8[0x4] = sub_140ade170(arg1 + 0x3c, &var_108)
float zmm2[0x4] = *(arg1 + 0x34)
float zmm13[0x4] = *(arg1 + 0x48)
float zmm6[0x4] = *(arg3 + 0x1e0)
float zmm12[0x4] = var_108
float zmm5[0x4] = *(arg3 + 0x1c0)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0x30), (*(arg1 + 0x38))[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm13, (*(arg1 + 0x50))[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(*(arg1 + 0x4c), 0)[0].q)
float zmm7[0x4]
float zmm15[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_5, zmm6), data_143f594c0, 1)) == 0)
    float temp0_140[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), _mm_shuffle_ps(zmm5, zmm5, 0))
    float temp0_141[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x4e)
    float temp0_142[0x4] = _mm_mul_ps(zmm6, temp0_3)
    float temp0_143[0x4] = __mulps_xmmps_memps(temp0_140, data_143f59480)
    float temp0_144[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_145[0x4] = _mm_mul_ps(zmm12, temp0_144)
    float temp0_146[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xd2)
    float temp0_147[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xb1)
    zmm15 = _mm_mul_ps(zmm6, temp0_5)
    float temp0_149[0x4] = _mm_add_ps(temp0_143, temp0_145)
    float temp0_151[0x4] = _mm_mul_ps(temp0_141, _mm_shuffle_ps(zmm5, zmm5, 0x55))
    float temp0_153[0x4] = _mm_mul_ps(temp0_147, _mm_shuffle_ps(zmm5, zmm5, 0xaa))
    float temp0_154[0x4] = __mulps_xmmps_memps(temp0_151, data_143f59470)
    float temp0_155[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xc9)
    float temp0_156[0x4] = __mulps_xmmps_memps(temp0_153, data_143f59460)
    float temp0_157[0x4] = _mm_add_ps(temp0_149, temp0_154)
    float temp0_158[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_159[0x4] = _mm_mul_ps(temp0_155, temp0_158)
    float temp0_160[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_161[0x4] = _mm_mul_ps(temp0_146, temp0_160)
    zmm6 = _mm_add_ps(temp0_157, temp0_156)
    float temp0_163[0x4] = _mm_sub_ps(temp0_161, temp0_159)
    float temp0_164[0x4] = _mm_add_ps(temp0_163, temp0_163)
    float temp0_165[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xd2)
    float temp0_166[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xc9)
    float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_160)
    float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_158)
    float temp0_169[0x4] = _mm_mul_ps(temp0_164, temp0_144)
    zmm7 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_167, temp0_168), _mm_add_ps(temp0_169, temp0_142)), 
        *(arg3 + 0x1d0))
else
    float var_38_1[0x4] = zmm8
    zmm8 = *(arg3 + 0x1d0)
    float temp0_9[0x4] = _mm_add_ps(zmm5, zmm5)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float zmm10[0x4] = data_143f593d0
    float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
    float temp0_12[0x4] = _mm_mul_ps(zmm5, temp0_9)
    float temp0_14[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_9, temp0_9, 0x29))
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x12)
    float temp0_18[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x1a), _mm_shuffle_ps(temp0_12, temp0_12, 1))
    float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), temp0_15)
    _mm_mul_ps(zmm6, temp0_5)
    float temp0_22[0x4] = _mm_sub_ps(zmm10, temp0_18)
    float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_14)
    float temp0_24[0x4] = _mm_sub_ps(temp0_14, temp0_20)
    float temp0_25[0x4] = _mm_mul_ps(temp0_22, zmm6)
    float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm6)
    float temp0_27[0x4] = _mm_mul_ps(temp0_10, temp0_24)
    float zmm1[0x4] = __andps_xmmxud_memxud(temp0_25, data_143f593e0)
    float temp0_29[0x4] = _mm_add_ps(zmm12, zmm12)
    float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1, 0), 
        _mm_shuffle_ps(temp0_27, zmm1, 0x32), 0x82)
    float temp0_35[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm1, 0x10), 
        _mm_shuffle_ps(temp0_26, zmm1, 0x31), 0x88)
    float temp0_36[0x4] = _mm_mul_ps(temp0_29, zmm12)
    float temp0_38[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, temp0_27, 0x12), zmm1, 0xe8)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x29)
    zmm10[0].q = zmm8 u>> 0x40
    float temp0_40[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
    float temp0_42[0x4] = _mm_mul_ps(temp0_39, _mm_shuffle_ps(zmm12, zmm12, 4))
    float temp0_45[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), _mm_shuffle_ps(temp0_36, temp0_36, 1))
    float temp0_46[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
    float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0x12), temp0_46)
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
    float temp0_50[0x4] = _mm_add_ps(temp0_48, temp0_42)
    float temp0_51[0x4] = _mm_sub_ps(temp0_42, temp0_48)
    float temp0_52[0x4] = _mm_mul_ps(temp0_50, temp0_5)
    float temp0_53[0x4] = _mm_mul_ps(temp0_49, temp0_51)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_45), temp0_5), data_143f593e0)
    float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, zmm1, 0), 
        _mm_shuffle_ps(temp0_53, zmm1, 0x32), 0x82)
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_52, zmm1, 0x31)
    float temp0_63[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1, 0x10), temp0_61, 0x88)
    float temp0_64[0x4] = _mm_mul_ps(temp0_60, temp0_35)
    zmm10[0].q = temp0_3 u>> 0x40
    float temp0_65[0x4] = _mm_shuffle_ps(temp0_3, zmm10, 0xc4)
    float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_32)
    float temp0_69[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, temp0_53, 0x12), zmm1, 0xe8)
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)
    float temp0_71[0x4] = _mm_add_ps(temp0_64, temp0_67)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xff), temp0_40)
    float temp0_74[0x4] = _mm_mul_ps(temp0_70, temp0_38)
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0), temp0_32)
    float temp0_77[0x4] = _mm_add_ps(temp0_71, temp0_74)
    float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_38)
    float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_73)
    float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0x55), temp0_35)
    float temp0_83[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
    float var_e8[0x4] = temp0_80
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
    float temp0_85[0x4] = _mm_add_ps(temp0_82, temp0_76)
    float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_35)
    float temp0_87[0x4] = _mm_mul_ps(temp0_83, temp0_40)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0)
    float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_79)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_32)
    float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_38)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_87)
    float temp0_94[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xff)
    float temp0_95[0x4] = _mm_add_ps(temp0_86, temp0_90)
    float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_40)
    float temp0_97[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
    int96_t var_d8_1 = temp0_93[0].12
    float temp0_98[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
    float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_92)
    float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_35)
    float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_38)
    float temp0_103[0x4] = _mm_mul_ps(temp0_97, temp0_32)
    float temp0_104[0x4] = _mm_add_ps(temp0_99, temp0_96)
    float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_40)
    float temp0_107[0x4] = _mm_add_ps(temp0_100, temp0_103)
    int96_t var_c8_1 = temp0_104[0].12
    int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_107, temp0_102), temp0_106)[0].12
    int512_t zmm8_1
    int128_t zmm10_1
    zmm8_1, zmm10_1, zmm15 = sub_1407740e0(&var_e8, 0x322bcc77)
    float zmm2_1[0x4] = var_e8[0]
    float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f594c0, zmm15, 2), data_143f594b0 ^ zmm10_1)
        ^ data_143f594b0
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    uint32_t zmm0_1[0x4] = var_e8[2]
    float zmm1_1 = var_e8[1] * zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    var_e8[0] = zmm2_1[0]
    float temp0_112[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_e8[1] = zmm1_1
    zmm1_1 = var_d8_1:4.d * temp0_112[0]
    var_e8[2] = zmm0_1[0]
    zmm0_1 = var_d8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_112[0]
    float zmm3_1 = var_d8_1.d * temp0_112[0]
    zmm2_1 = var_c8_1.d
    float temp0_113[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_d8_1:4.d = zmm1_1
    var_d8_1:8.d = zmm0_1[0]
    zmm0_1 = var_c8_1:8.d
    zmm1_1 = var_c8_1:4.d * temp0_113[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_113[0]
    zmm2_1[0] = zmm2_1[0] * temp0_113[0]
    var_c8_1:4.d = zmm1_1
    var_c8_1:8.d = zmm0_1[0]
    var_d8_1.d = zmm3_1
    var_c8_1.d = zmm2_1[0]
    uint32_t var_f8[0x4]
    sub_14077e4a0(&var_f8, &var_e8)
    uint32_t zmm5_1[0x4] = var_f8
    zmm6 = data_143f594a0
    zmm8_1.o = var_38_1
    uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
    uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
    zmm1_2 = _mm_rsqrt_ps(zmm4_2)
    uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6)
    float temp0_125[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), zmm1_2), 
        zmm1_2)
    float temp0_128[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_125, temp0_125), zmm3_2))
    uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
    float temp0_132[0x4] = _mm_add_ps(_mm_mul_ps(temp0_128, temp0_125), temp0_125)
    float temp0_133[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_132, zmm5_1) ^ data_143f59490, zmm0_2) ^ data_143f59490
    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_133[0].q)

*arg2 = zmm6
uint32_t result
result.b = 1
arg2[1] = zmm7
arg2[2] = zmm15
return result

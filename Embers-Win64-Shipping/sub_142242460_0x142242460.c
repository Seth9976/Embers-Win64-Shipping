// 函数: sub_142242460
// 地址: 0x142242460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = *(arg2 + 0x1e0)
float zmm13[0x4] = data_143f515b0
float zmm14[0x4] = data_143f519a0
float (* r9_2)[0x4] = sx.q(arg4) * 0x30 + *arg3
zmm13[0].q = zx.o(0) u>> 0x40
*arg1 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
float zmm0[0x4] = __andps_xmmxud_memxud(zmm13, data_143f515c0)
float zmm12[0x4] = r9_2[2]
arg1[2] = zmm0
float temp0_2[0x4] = _mm_min_ps(zmm12, zmm7)
arg1[1] = zx.o(0)
float zmm5[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, zmm14, 1)) == 0)
    zmm5 = *(arg2 + 0x1c0)
    float zmm2[0x4] = *r9_2
    float zmm4[0x4] = r9_2[1]
    float temp0_134[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_134)
    float temp0_137[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_139[0x4] = _mm_mul_ps(zmm4, zmm7)
    float temp0_140[0x4] = __mulps_xmmps_memps(temp0_136, data_143f51580)
    float temp0_141[0x4] = _mm_mul_ps(temp0_138, zmm2)
    float temp0_142[0x4] = _mm_mul_ps(zmm12, zmm7)
    float temp0_143[0x4] = _mm_add_ps(temp0_140, temp0_141)
    float temp0_145[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_148[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, data_143f51570)
    float temp0_150[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xd2)
    float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143f51560)
    float temp0_152[0x4] = _mm_add_ps(temp0_143, temp0_149)
    arg1[2] = temp0_142
    float temp0_153[0x4] = _mm_add_ps(temp0_152, temp0_151)
    float temp0_154[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xc9)
    *arg1 = temp0_153
    float temp0_155[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_156[0x4] = _mm_mul_ps(temp0_154, temp0_155)
    float temp0_157[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_159[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_150, temp0_157), temp0_156)
    float temp0_160[0x4] = _mm_add_ps(temp0_159, temp0_159)
    float temp0_161[0x4] = _mm_mul_ps(temp0_138, temp0_160)
    float temp0_163[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xd2), temp0_157)
    float temp0_164[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc9)
    float temp0_165[0x4] = _mm_add_ps(temp0_161, temp0_139)
    arg1[1] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_163, _mm_mul_ps(temp0_164, temp0_155)), temp0_165), 
        *(arg2 + 0x1d0))
else
    float zmm3[0x4] = *(arg2 + 0x1c0)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    float temp0_6[0x4] = _mm_add_ps(zmm3, zmm3)
    float zmm8[0x4] = *(arg2 + 0x1d0)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(zmm3, temp0_6)
    float temp0_11[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_6, temp0_6, 0x29))
    float temp0_13[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(temp0_6, temp0_6, 0x12))
    float temp0_16[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x1a), _mm_shuffle_ps(temp0_9, temp0_9, 1))
    float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_11)
    _mm_mul_ps(zmm12, zmm7)
    float temp0_19[0x4] = _mm_sub_ps(temp0_11, temp0_13)
    float temp0_20[0x4] = _mm_sub_ps(zmm13, temp0_16)
    float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm7)
    float temp0_22[0x4] = _mm_mul_ps(temp0_5, temp0_19)
    float zmm1[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_20, zmm7), data_143f515c0)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_22, zmm1, 0x32)
    float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0), temp0_25, 0x82)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x31)
    float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0x10), temp0_28, 0x88)
    float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1, 0xe8)
    zmm1 = *r9_2
    zmm13[0].q = zmm8 u>> 0x40
    float temp0_33[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm8, zmm13, 0xc4)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
    float temp0_36[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_38[0x4] = _mm_mul_ps(zmm1, temp0_33)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x29), temp0_36)
    float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x12), temp0_37)
    float temp0_45[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0x1a), _mm_shuffle_ps(temp0_38, temp0_38, 1))
    float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_40)
    float temp0_47[0x4] = _mm_sub_ps(temp0_40, temp0_42)
    float temp0_48[0x4] = _mm_sub_ps(zmm13, temp0_45)
    float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm12)
    float temp0_50[0x4] = _mm_mul_ps(temp0_35, temp0_47)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_48, zmm12), data_143f515c0)
    float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0), 
        _mm_shuffle_ps(temp0_50, zmm1, 0x32), 0x82)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_50, zmm1, 0x10)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, _mm_shuffle_ps(temp0_49, zmm1, 0x31), 0x88)
    float temp0_60[0x4] = _mm_mul_ps(temp0_57, temp0_30)
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_49, temp0_50, 0x12)
    zmm5 = r9_2[1]
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, zmm1, 0xe8)
    float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xaa), temp0_32)
    zmm13[0].q = zmm5 u>> 0x40
    float temp0_65[0x4] = _mm_shuffle_ps(zmm5, zmm13, 0xc4)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0)
    float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xff), temp0_34)
    float temp0_70[0x4] = _mm_add_ps(temp0_60, _mm_mul_ps(temp0_66, temp0_27))
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_27)
    float temp0_73[0x4] = _mm_add_ps(temp0_70, temp0_64)
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_32)
    float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_68)
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_30)
    float temp0_79[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
    float var_d8[0x4] = temp0_76
    float temp0_80[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_72)
    float temp0_82[0x4] = _mm_mul_ps(temp0_80, temp0_30)
    float temp0_83[0x4] = _mm_mul_ps(temp0_79, temp0_34)
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
    float temp0_85[0x4] = _mm_add_ps(temp0_81, temp0_75)
    float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_27)
    float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_32)
    float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_83)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
    float temp0_91[0x4] = _mm_add_ps(temp0_82, temp0_86)
    float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_34)
    float temp0_93[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
    int96_t var_c8_1 = temp0_89[0].12
    float temp0_94[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
    float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_88)
    float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_30)
    float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_32)
    float temp0_99[0x4] = _mm_mul_ps(temp0_93, temp0_27)
    float temp0_100[0x4] = _mm_add_ps(temp0_95, temp0_92)
    float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_34)
    float temp0_103[0x4] = _mm_add_ps(temp0_96, temp0_99)
    int96_t var_b8_1 = temp0_100[0].12
    int96_t var_a8_1 = _mm_add_ps(_mm_add_ps(temp0_103, temp0_98), temp0_102)[0].12
    float zmm11_1[0x4]
    int128_t zmm13_1
    float zmm14_1[0x4]
    zmm11_1, zmm13_1, zmm14_1 = sub_1407740e0(&var_d8, 0x322bcc77)
    zmm14_1 =
        _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm11_1, 2), data_143f51990 ^ zmm13_1) ^ data_143f51990
    float zmm2_1[0x4] = var_d8[0]
    float zmm1_1 = var_d8[1]
    uint32_t zmm0_1[0x4] = var_d8[2]
    zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
    zmm1_1 = zmm1_1 * zmm14_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
    var_d8[0] = zmm2_1[0]
    float temp0_108[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
    var_d8[1] = zmm1_1
    zmm1_1 = var_c8_1:4.d * temp0_108[0]
    var_d8[2] = zmm0_1[0]
    zmm0_1 = var_c8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
    float zmm3_1 = var_c8_1.d * temp0_108[0]
    zmm2_1 = var_b8_1.d
    var_c8_1:4.d = zmm1_1
    var_c8_1:8.d = zmm0_1[0]
    zmm0_1 = var_b8_1:8.d
    float temp0_109[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
    zmm1_1 = var_b8_1:4.d * temp0_109[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
    zmm2_1[0] = zmm2_1[0] * temp0_109[0]
    var_b8_1:4.d = zmm1_1
    var_b8_1:8.d = zmm0_1[0]
    var_c8_1.d = zmm3_1
    var_b8_1.d = zmm2_1[0]
    uint32_t var_e8[0x4]
    sub_14077e4a0(&var_e8, &var_d8)
    uint32_t zmm6_1[0x4] = var_e8
    float zmm5_1[0x4] = data_143f515a0
    uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
    arg1[2] = zmm11_1
    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
    uint32_t zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
    zmm1_2 = _mm_rsqrt_ps(zmm4_1)
    float temp0_116[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
    float temp0_121[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_116)), zmm1_2), 
        zmm1_2)
    float temp0_124[0x4] =
        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), temp0_116))
    uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
    float temp0_128[0x4] = _mm_add_ps(_mm_mul_ps(temp0_124, temp0_121), temp0_121)
    float temp0_129[0x4] = _mm_unpacklo_ps(var_a8_1:4.d, 0)
    zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_128, zmm6_1) ^ data_143f51590, zmm0_2) ^ data_143f51590
    arg1[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_a8_1.d, var_a8_1:8.d[0].q), temp0_129[0].q)
    *arg1 = zmm5_1
return arg1

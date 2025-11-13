// 函数: sub_141f3d840
// 地址: 0x141f3d840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *(arg1 + 0x1c0)
float zmm7[0x4] = *(arg1 + 0x1e0)
float zmm8[0x4] = data_143f3b4c0
float zmm13[0x4] = data_14327af40
float zmm14[0x4] = data_143f3b4b0
float zmm15[0x4] = data_143f3b4e0
zmm14[0].q = zx.o(0) u>> 0x40
uint32_t temp0[0x4] = _mm_and_ps(zmm14, zmm8)
float temp0_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm14, 0xc4)
float temp0_2[0x4] = _mm_min_ps(temp0, zmm7)
*arg2 = temp0_1
uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, zmm15, 1))
arg2[1] = zx.o(0)
arg2[2] = temp0

if (temp0_4 == 0)
    float temp0_134[0x4] = _mm_mul_ps(zmm13, zmm7)
    float temp0_135[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x1b)
    float temp0_136[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x4e)
    float temp0_138[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm6, zmm6, 0))
    float temp0_139[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xd2)
    float temp0_140[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_141[0x4] = _mm_mul_ps(temp0_1, temp0_140)
    float temp0_142[0x4] = __mulps_xmmps_memps(temp0_138, data_143f3b3b0)
    float temp0_143[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xb1)
    uint32_t zmm12[0x4] = _mm_mul_ps(temp0, zmm7)
    float temp0_145[0x4] = _mm_add_ps(temp0_142, temp0_141)
    float temp0_147[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm6, zmm6, 0x55))
    float temp0_149[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
    float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f3b3a0)
    float temp0_151[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xc9)
    float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f3b390)
    float temp0_153[0x4] = _mm_add_ps(temp0_145, temp0_150)
    arg2[2] = zmm12
    *arg2 = _mm_add_ps(temp0_153, temp0_152)
    float temp0_155[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_156[0x4] = _mm_mul_ps(temp0_151, temp0_155)
    float temp0_157[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_159[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_139, temp0_157), temp0_156)
    float temp0_160[0x4] = _mm_add_ps(temp0_159, temp0_159)
    float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xd2)
    float temp0_162[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc9)
    float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_157)
    float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_155)
    float temp0_165[0x4] = _mm_mul_ps(temp0_160, temp0_140)
    arg2[1] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_163, temp0_164), _mm_add_ps(temp0_165, temp0_134)), 
        *(arg1 + 0x1d0))
else
    float temp0_5[0x4] = _mm_add_ps(zmm6, zmm6)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    float temp0_8[0x4] = _mm_mul_ps(zmm6, temp0_5)
    float temp0_10[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x12)
    float temp0_14[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x1a), _mm_shuffle_ps(temp0_8, temp0_8, 1))
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), temp0_11)
    _mm_mul_ps(zmm7, temp0)
    float temp0_18[0x4] = _mm_sub_ps(zmm14, temp0_14)
    float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_10)
    float temp0_20[0x4] = _mm_sub_ps(temp0_10, temp0_16)
    float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm7)
    float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm7)
    float temp0_23[0x4] = _mm_mul_ps(temp0_7, temp0_20)
    float zmm1[0x4] = _mm_and_ps(temp0_21, zmm8)
    float temp0_25[0x4] = _mm_add_ps(temp0_1, temp0_1)
    zmm8 = *(arg1 + 0x1d0)
    float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0), 
        _mm_shuffle_ps(temp0_23, zmm1, 0x32), 0x82)
    float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1, 0x10), 
        _mm_shuffle_ps(temp0_22, zmm1, 0x31), 0x88)
    float temp0_32[0x4] = _mm_mul_ps(temp0_25, temp0_1)
    float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_23, 0x12), zmm1, 0xe8)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x29)
    zmm14[0].q = zmm8 u>> 0x40
    float temp0_36[0x4] = _mm_shuffle_ps(zmm8, zmm14, 0xc4)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(temp0_1, temp0_1, 4))
    float temp0_41[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x1a), _mm_shuffle_ps(temp0_32, temp0_32, 1))
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
    float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0x12), temp0_42)
    float temp0_45[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
    float temp0_46[0x4] = _mm_add_ps(temp0_44, temp0_38)
    float temp0_47[0x4] = _mm_sub_ps(temp0_38, temp0_44)
    float temp0_48[0x4] = _mm_mul_ps(temp0_46, temp0)
    float temp0_49[0x4] = _mm_mul_ps(temp0_45, temp0_47)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm14, temp0_41), temp0), data_143f3b4c0)
    float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
        _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_49, zmm1, 0x10)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, temp0_57, 0x88)
    float temp0_60[0x4] = _mm_mul_ps(temp0_58, temp0_31)
    zmm14[0].q = zmm13 u>> 0x40
    float temp0_61[0x4] = _mm_shuffle_ps(zmm13, zmm14, 0xc4)
    float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0), temp0_28)
    float temp0_65[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, temp0_49, 0x12), zmm1, 0xe8)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)
    float temp0_67[0x4] = _mm_add_ps(temp0_60, temp0_63)
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xff), temp0_36)
    float temp0_70[0x4] = _mm_mul_ps(temp0_66, temp0_34)
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_28)
    float temp0_73[0x4] = _mm_add_ps(temp0_67, temp0_70)
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_34)
    float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_69)
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_31)
    float temp0_79[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
    float var_e8[0x4] = temp0_76
    float temp0_80[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_72)
    float temp0_82[0x4] = _mm_mul_ps(temp0_80, temp0_31)
    float temp0_83[0x4] = _mm_mul_ps(temp0_79, temp0_36)
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
    float temp0_85[0x4] = _mm_add_ps(temp0_81, temp0_75)
    float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_28)
    float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_34)
    float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_83)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
    float temp0_91[0x4] = _mm_add_ps(temp0_82, temp0_86)
    float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_36)
    float temp0_93[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
    int96_t var_d8_1 = temp0_89[0].12
    float temp0_94[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
    float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_88)
    float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_31)
    float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_34)
    float temp0_99[0x4] = _mm_mul_ps(temp0_93, temp0_28)
    float temp0_100[0x4] = _mm_add_ps(temp0_95, temp0_92)
    float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), temp0_36)
    float temp0_103[0x4] = _mm_add_ps(temp0_96, temp0_99)
    int96_t var_c8_1 = temp0_100[0].12
    int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_103, temp0_98), temp0_102)[0].12
    float zmm11_1[0x4]
    int128_t zmm14_1
    float zmm15_1[0x4]
    zmm11_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_e8, 0x322bcc77)
    float zmm2_1[0x4] = var_e8[0]
    float zmm1_1 = var_e8[1]
    zmm15_1 =
        _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm11_1, 2), data_143f3b4d0 ^ zmm14_1) ^ data_143f3b4d0
    zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
    zmm1_1 = zmm1_1 * zmm15_1[0]
    uint32_t zmm0_1[0x4] = var_e8[2]
    zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
    var_e8[0] = zmm2_1[0]
    float temp0_108[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
    var_e8[2] = zmm0_1[0]
    zmm0_1 = var_d8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
    var_e8[1] = zmm1_1
    zmm1_1 = var_d8_1:4.d * temp0_108[0]
    float zmm3_1 = var_d8_1.d * temp0_108[0]
    zmm2_1 = var_c8_1.d
    var_d8_1:8.d = zmm0_1[0]
    zmm0_1 = var_c8_1:8.d
    var_d8_1:4.d = zmm1_1
    float temp0_109[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
    zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
    zmm2_1[0] = zmm2_1[0] * temp0_109[0]
    zmm1_1 = var_c8_1:4.d * temp0_109[0]
    var_c8_1:8.d = zmm0_1[0]
    var_d8_1.d = zmm3_1
    var_c8_1.d = zmm2_1[0]
    var_c8_1:4.d = zmm1_1
    uint32_t var_f8[0x4]
    sub_14077e4a0(&var_f8, &var_e8)
    uint32_t zmm6_1[0x4] = var_f8
    float zmm5_1[0x4] = data_143f3b3d0
    uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
    arg2[2] = zmm11_1
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
    float temp0_129[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
    zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_128, zmm6_1) ^ data_143f3b3c0, zmm0_2) ^ data_143f3b3c0
    arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_129[0].q)
    *arg2 = zmm5_1

return arg2

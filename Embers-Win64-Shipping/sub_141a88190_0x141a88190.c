// 函数: sub_141a88190
// 地址: 0x141a88190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x3c))
float zmm0[0x4]
float zmm1[0x4]

if (rdx.d == 0xffffffff)
    zmm1 = data_143dbb0d0
    *arg2 = data_143dbb0c0
    zmm0 = data_143dbb0e0
    arg2[1] = zmm1
    arg2[2] = zmm0
else
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    float zmm11[0x4]
    float var_78_1[0x4] = zmm11
    float zmm12[0x4]
    float var_88_1[0x4] = zmm12
    float zmm13[0x4]
    float var_98_1[0x4] = zmm13
    float zmm15[0x4]
    float var_a8_1[0x4] = zmm15
    float zmm10[0x4]
    
    if (*(rdx + arg3[3]) == 0)
        arg4, arg5, zmm10 = sub_141a98300(arg3, rdx.d)
    
    int64_t rax_2 = *arg3
    zmm12 = data_143f2b810
    int64_t rcx_2 = rdx * 6
    zmm11 = arg1[2]
    zmm13 = data_143f2b8d0
    float zmm2[0x4] = zx.o(0)
    zmm7 = *(rax_2 + (rcx_2 << 3) + 0x20)
    zmm6 = *(rax_2 + (rcx_2 << 3))
    zmm15 = *(rax_2 + (rcx_2 << 3) + 0x10)
    zmm12[0].q = zmm2 u>> 0x40
    *arg2 = _mm_shuffle_ps(zx.o(0), zmm12, 0xc4)
    zmm0 = __andps_xmmxud_memxud(zmm12, data_143f2b820)
    float temp0_3[0x4] = _mm_min_ps(zmm11, zmm7)
    arg2[2] = zmm0
    uint32_t temp0_5 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_3, zmm13, 1))
    arg2[1] = zmm2
    
    if (temp0_5 == 0)
        float zmm3[0x4] = *arg1
        float zmm4[0x4] = arg1[1]
        float temp0_137[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), _mm_shuffle_ps(zmm6, zmm6, 0))
        float temp0_138[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
        float temp0_139[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_140[0x4] = _mm_mul_ps(zmm4, zmm7)
        float temp0_141[0x4] = __mulps_xmmps_memps(temp0_137, data_143f2b850)
        float temp0_142[0x4] = _mm_mul_ps(temp0_139, zmm3)
        float temp0_143[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
        float temp0_144[0x4] = _mm_mul_ps(zmm11, zmm7)
        float temp0_145[0x4] = _mm_add_ps(temp0_141, temp0_142)
        float temp0_147[0x4] = _mm_mul_ps(temp0_138, _mm_shuffle_ps(zmm6, zmm6, 0x55))
        float temp0_149[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
        float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f2b840)
        float temp0_151[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xc9)
        float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f2b830)
        float temp0_153[0x4] = _mm_add_ps(temp0_145, temp0_150)
        arg2[2] = temp0_144
        float temp0_154[0x4] = _mm_add_ps(temp0_153, temp0_152)
        float temp0_155[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_156[0x4] = _mm_mul_ps(temp0_151, temp0_155)
        float temp0_157[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        *arg2 = temp0_154
        float temp0_160[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_140, temp0_140, 0xd2), temp0_157), temp0_156)
        float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
        float temp0_162[0x4] = _mm_mul_ps(temp0_139, temp0_161)
        float temp0_164[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xd2), temp0_157)
        float temp0_165[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
        float temp0_166[0x4] = _mm_add_ps(temp0_162, temp0_140)
        arg2[1] = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_164, _mm_mul_ps(temp0_165, temp0_155)), temp0_166), zmm15)
    else
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
        float temp0_7[0x4] = _mm_add_ps(zmm6, zmm6)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        float var_68_1[0x4] = zmm10
        _mm_mul_ps(zmm11, zmm7)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
        float temp0_11[0x4] = _mm_mul_ps(temp0_7, zmm6)
        float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x29), temp0_6)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x12)
        float temp0_17[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x1a), 
            _mm_shuffle_ps(temp0_11, temp0_11, 1))
        float temp0_19[0x4] = _mm_mul_ps(temp0_14, _mm_shuffle_ps(zmm6, zmm6, 0xff))
        float temp0_20[0x4] = _mm_add_ps(temp0_19, temp0_13)
        float temp0_21[0x4] = _mm_sub_ps(temp0_13, temp0_19)
        float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm7)
        float temp0_23[0x4] = _mm_mul_ps(temp0_8, temp0_21)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm12, temp0_17), zmm7), data_143f2b820)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_23, zmm1, 0x32)
        float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0), temp0_27, 0x82)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_22, zmm1, 0x31)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1, 0x10), temp0_30, 0x88)
        float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_23, 0x12), zmm1, 0xe8)
        zmm1 = *arg1
        zmm12[0].q = zmm15 u>> 0x40
        float temp0_35[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm15, zmm12, 0xc4)
        float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_38[0x4] = _mm_mul_ps(temp0_35, zmm1)
        float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x29), temp0_37)
        float temp0_41[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x1a)
        float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x12), temp0_41)
        float temp0_46[0x4] = _mm_add_ps(temp0_42, _mm_shuffle_ps(temp0_38, temp0_38, 1))
        float temp0_47[0x4] = _mm_add_ps(temp0_44, temp0_40)
        float temp0_48[0x4] = _mm_sub_ps(temp0_40, temp0_44)
        float temp0_49[0x4] = _mm_sub_ps(zmm12, temp0_46)
        float temp0_50[0x4] = _mm_mul_ps(temp0_47, zmm11)
        float temp0_51[0x4] = _mm_mul_ps(temp0_10, temp0_48)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_49, zmm11), data_143f2b820)
        float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1, 0), 
            _mm_shuffle_ps(temp0_51, zmm1, 0x32), 0x82)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_51, zmm1, 0x10)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, _mm_shuffle_ps(temp0_50, zmm1, 0x31), 0x88)
        float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_32)
        float temp0_62[0x4] = _mm_shuffle_ps(temp0_50, temp0_51, 0x12)
        float zmm5[0x4] = arg1[1]
        float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, zmm1, 0xe8)
        float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_34)
        zmm12[0].q = zmm5 u>> 0x40
        float temp0_66[0x4] = _mm_shuffle_ps(zmm5, zmm12, 0xc4)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
        float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_36)
        float temp0_71[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_29))
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_29)
        float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_65)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_34)
        float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_32)
        float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
        float var_e8[0x4] = temp0_77
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
        float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
        float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_32)
        float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_36)
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
        float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
        float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_29)
        float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_34)
        float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
        float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
        float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
        float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_36)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
        int96_t var_d8_1 = temp0_90[0].12
        float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
        float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
        float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_32)
        float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_34)
        float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_29)
        float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_36)
        float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
        int96_t var_c8_1 = temp0_101[0].12
        int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_104, temp0_99), temp0_103)[0].12
        int512_t zmm8
        int512_t zmm9
        float zmm10_1[0x4]
        zmm8, zmm9, zmm10_1, zmm12, zmm13 = sub_1407740e0(&var_e8, 0x322bcc77)
        float zmm2_1[0x4] = var_e8[0]
        float zmm1_1 = var_e8[1]
        zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm10_1, 2), data_143f2b8c0 ^ zmm12) ^ data_143f2b8c0
        zmm2_1[0] = zmm2_1[0] * zmm13[0]
        zmm1_1 = zmm1_1 * zmm13[0]
        uint32_t zmm0_1[0x4] = var_e8[2]
        zmm0_1[0] = zmm0_1[0] f* zmm13[0]
        var_e8[0] = zmm2_1[0]
        float temp0_109[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
        var_e8[2] = zmm0_1[0]
        zmm0_1 = var_d8_1:8.d
        zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
        var_e8[1] = zmm1_1
        zmm1_1 = var_d8_1:4.d * temp0_109[0]
        float zmm3_1 = var_d8_1.d * temp0_109[0]
        zmm2_1 = var_c8_1.d
        var_d8_1:8.d = zmm0_1[0]
        zmm0_1 = var_c8_1:8.d
        var_d8_1:4.d = zmm1_1
        float temp0_110[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
        zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
        zmm2_1[0] = zmm2_1[0] * temp0_110[0]
        zmm1_1 = var_c8_1:4.d * temp0_110[0]
        var_c8_1:8.d = zmm0_1[0]
        var_d8_1.d = zmm3_1
        var_c8_1.d = zmm2_1[0]
        var_c8_1:4.d = zmm1_1
        uint32_t var_f8[0x4]
        sub_14077e4a0(&var_f8, &var_e8)
        zmm6 = var_f8
        float zmm5_1[0x4] = data_143f2b8b0
        zmm9.o = arg5
        zmm8.o = arg4
        float temp0_111[0x4] = _mm_mul_ps(zmm6, zmm6)
        arg2[2] = zmm10_1
        float temp0_113[0x4] = _mm_add_ps(temp0_111, _mm_shuffle_ps(temp0_111, temp0_111, 0x4e))
        float temp0_115[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0x39), temp0_113)
        float temp0_116[0x4] = _mm_rsqrt_ps(temp0_115)
        float temp0_117[0x4] = _mm_mul_ps(temp0_115, zmm5_1)
        float temp0_122[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_116, temp0_116), temp0_117)), 
                temp0_116), 
            temp0_116)
        float temp0_125[0x4] =
            _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
        float temp0_127[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_115, 2)
        float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
        float temp0_130[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
        zmm5_1 =
            _mm_and_ps(_mm_mul_ps(temp0_129, zmm6) ^ data_143f2b8a0, temp0_127) ^ data_143f2b8a0
        arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_130[0].q)
        *arg2 = zmm5_1
return arg2

// 函数: sub_14209a7c0
// 地址: 0x14209a7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t result
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13
int128_t zmm14
int128_t zmm15
result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
    sub_141f20c10(arg1, arg2 | 1, arg3)
int64_t r14
r14.b = arg3 == 1

if ((arg1[0x11].b & 4) != 0 && (not.b(arg2.b) & 1) != 0)
    int32_t i = 0
    
    if (arg1[0x94].d s> 0)
        int512_t zmm6_3
        int512_t zmm7_2
        int512_t zmm8_2
        int512_t zmm9_2
        int512_t zmm10_2
        int512_t zmm11_3
        int512_t zmm12_2
        int512_t zmm13_2
        int512_t zmm14_3
        int512_t zmm15_3
        
        do
            float var_168[0x4]
            float zmm13_1[0x4] = sub_1407c8dd0(&var_168, (sx.q(i) << 6) + arg1[0x93])
            float zmm14_1[0x4] = data_143f47560
            float zmm7_1[0x4] = *(arg1 + 0x1e0)
            float zmm15_1[0x4] = data_143f47880
            float zmm5_1[0x4] = data_143f47570
            float zmm6_1[0x4] = *(arg1 + 0x1c0)
            zmm14_1[0].q = zmm13_1 u>> 0x40
            float var_108[0x4] = _mm_shuffle_ps(zmm13_1, zmm14_1, 0xc4)
            float var_f8_1[0x4] = zmm13_1
            float var_e8_1[0x4] = _mm_and_ps(zmm14_1, zmm5_1)
            float var_148[0x4]
            float var_158[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_148, zmm7_1), zmm15_1, 1)) == 0)
                float zmm2_1[0x4] = var_168
                float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), 
                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0))
                float temp0_138[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                float temp0_139[0x4] = _mm_mul_ps(var_158, zmm7_1)
                float temp0_140[0x4] = __mulps_xmmps_memps(temp0_137, data_143f47840)
                float temp0_141[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                float temp0_142[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                float temp0_143[0x4] = _mm_mul_ps(zmm2_1, temp0_142)
                float temp0_144[0x4] = _mm_mul_ps(var_148, zmm7_1)
                float temp0_145[0x4] = _mm_add_ps(temp0_140, temp0_143)
                float temp0_147[0x4] = _mm_mul_ps(temp0_138, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
                float temp0_149[0x4] = _mm_mul_ps(temp0_141, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
                float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f47830)
                float temp0_151[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xc9)
                float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f47820)
                float var_e8_3[0x4] = temp0_144
                float temp0_154[0x4] = _mm_add_ps(_mm_add_ps(temp0_145, temp0_150), temp0_152)
                float temp0_155[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
                float temp0_156[0x4] = _mm_mul_ps(temp0_151, temp0_155)
                float temp0_157[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
                var_108 = temp0_154
                float temp0_160[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xd2), temp0_157), temp0_156)
                float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
                float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
                float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
                float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_157)
                float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_155)
                float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_142)
                float var_f8_3[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_164, temp0_165), _mm_add_ps(temp0_166, temp0_139)), 
                    *(arg1 + 0x1d0))
            else
                float zmm8_1[0x4] = *(arg1 + 0x1d0)
                float temp0_6[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
                float temp0_7[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
                float temp0_8[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                _mm_mul_ps(zmm7_1, var_148)
                float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x29), temp0_6)
                float temp0_12[0x4] = _mm_mul_ps(temp0_7, zmm6_1)
                float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x12), 
                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff))
                float temp0_18[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x1a), 
                    _mm_shuffle_ps(temp0_12, temp0_12, 1))
                float temp0_19[0x4] = _mm_add_ps(temp0_15, temp0_11)
                float temp0_20[0x4] = _mm_sub_ps(temp0_11, temp0_15)
                float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm7_1)
                float temp0_22[0x4] = _mm_mul_ps(temp0_8, temp0_20)
                float zmm1_1[0x4] =
                    _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm14_1, temp0_18), zmm7_1), zmm5_1)
                float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, zmm1_1, 0x32)
                float temp0_28[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0), temp0_26, 0x82)
                float temp0_29[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x31)
                float temp0_31[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1_1, 0x10), temp0_29, 0x88)
                float temp0_33[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1_1, 0xe8)
                zmm1_1 = var_168
                zmm14_1[0].q = zmm8_1 u>> 0x40
                float temp0_34[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                float temp0_35[0x4] = _mm_shuffle_ps(zmm8_1, zmm14_1, 0xc4)
                float temp0_36[0x4] = _mm_shuffle_ps(var_148, var_148, 0xc9)
                float temp0_37[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                float temp0_38[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                float temp0_39[0x4] = _mm_mul_ps(zmm1_1, temp0_34)
                float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x29), temp0_37)
                float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x12), temp0_38)
                float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x1a), 
                    _mm_shuffle_ps(temp0_39, temp0_39, 1))
                float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_41)
                float temp0_48[0x4] = _mm_sub_ps(temp0_41, temp0_43)
                float temp0_49[0x4] = _mm_sub_ps(zmm14_1, temp0_46)
                float temp0_50[0x4] = _mm_mul_ps(temp0_47, var_148)
                float temp0_51[0x4] = _mm_mul_ps(temp0_36, temp0_48)
                zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_49, var_148), data_143f47570)
                float temp0_54[0x4] = _mm_shuffle_ps(temp0_51, zmm1_1, 0x32)
                float temp0_56[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1_1, 0), temp0_54, 0x82)
                float temp0_57[0x4] = _mm_shuffle_ps(temp0_50, zmm1_1, 0x31)
                float temp0_59[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, zmm1_1, 0x10), temp0_57, 0x88)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_50, temp0_51, 0x12)
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
                float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, zmm1_1, 0xe8)
                float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_33)
                float temp0_65[0x4] = _mm_mul_ps(temp0_61, temp0_31)
                zmm14_1[0].q = var_158 u>> 0x40
                float temp0_66[0x4] = _mm_shuffle_ps(var_158, zmm14_1, 0xc4)
                float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
                float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_35)
                float temp0_71[0x4] = _mm_add_ps(temp0_65, _mm_mul_ps(temp0_67, temp0_28))
                float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_28)
                float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_64)
                float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_33)
                float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
                float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_31)
                float temp0_80[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
                var_168 = temp0_77
                float temp0_81[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
                float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
                float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_31)
                float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_35)
                float temp0_85[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
                float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
                float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_28)
                float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_33)
                float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
                float temp0_91[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
                float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
                float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_35)
                float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
                var_158 = temp0_90
                float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
                float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
                float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_31)
                float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_33)
                float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_28)
                float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
                float temp0_103[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_35)
                var_148 = temp0_101
                int96_t var_138_1 = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(temp0_97, temp0_100), temp0_99), temp0_103)[0].12
                float zmm11_2[0x4]
                int128_t zmm14_2
                float zmm15_2[0x4]
                zmm11_2, zmm14_2, zmm15_2 = sub_1407740e0(&var_168, 0x322bcc77)
                float zmm2_2[0x4] = var_168[0]
                float zmm1_2 = var_168[1]
                zmm15_2 = _mm_and_ps(_mm_cmpeq_ps(zmm15_2, zmm11_2, 2), data_143f47870 ^ zmm14_2)
                uint32_t zmm0_2[0x4] = var_168[2]
                zmm15_2 ^= data_143f47870
                zmm2_2[0] = zmm2_2[0] * zmm15_2[0]
                zmm1_2 = zmm1_2 * zmm15_2[0]
                zmm0_2[0] = zmm0_2[0] f* zmm15_2[0]
                float zmm3_2 = var_158[0]
                var_168[0] = zmm2_2[0]
                var_168[1] = zmm1_2
                zmm1_2 = var_158[1]
                float temp0_109[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0x55)
                zmm1_2 = zmm1_2 * temp0_109[0]
                var_168[2] = zmm0_2[0]
                zmm0_2 = var_158[2]
                zmm0_2[0] = zmm0_2[0] f* temp0_109[0]
                zmm3_2 = zmm3_2 * temp0_109[0]
                zmm2_2 = var_148[0]
                var_158[1] = zmm1_2
                zmm1_2 = var_148[1]
                var_158[2] = zmm0_2[0]
                zmm0_2 = var_148[2]
                float temp0_110[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0xaa)
                zmm1_2 = zmm1_2 * temp0_110[0]
                zmm0_2[0] = zmm0_2[0] f* temp0_110[0]
                zmm2_2[0] = zmm2_2[0] * temp0_110[0]
                var_148[1] = zmm1_2
                var_148[2] = zmm0_2[0]
                var_158[0] = zmm3_2
                var_148[0] = zmm2_2[0]
                uint32_t var_118[0x4]
                sub_14077e4a0(&var_118, &var_168)
                uint32_t zmm5_2[0x4] = var_118
                float zmm6_2[0x4] = data_143f47860
                uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                float var_e8_2[0x4] = zmm11_2
                zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                zmm1_3 = _mm_rsqrt_ps(zmm4_2)
                float temp0_117[0x4] = _mm_mul_ps(zmm4_2, zmm6_2)
                float temp0_122[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), temp0_117)), 
                        zmm1_3), 
                    zmm1_3)
                float temp0_125[0x4] =
                    _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
                uint32_t zmm0_3[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
                float temp0_130[0x4] = _mm_unpacklo_ps(var_138_1:4.d, 0)
                zmm6_2 = _mm_and_ps(_mm_mul_ps(temp0_129, zmm5_2) ^ data_143f47850, zmm0_3)
                    ^ data_143f47850
                float var_f8_2[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(var_138_1.d, var_138_1:8.d[0].q), temp0_130[0].q)
                var_118 = zmm6_2
                var_108 = zmm6_2
            result, zmm6_3, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_3, zmm12_2, zmm13_2, zmm14_3, 
                zmm15_3 = sub_1420aac20(arg1, i, &var_108, r14.b)
            i += 1
        while (i s< arg1[0x94].d)
        
        zmm15_3.o = zmm15
        zmm14_3.o = zmm14
        zmm13_2.o = zmm13
        zmm12_2.o = zmm12
        zmm11_3.o = zmm11
        zmm10_2.o = zmm10
        zmm9_2.o = zmm9
        zmm8_2.o = zmm8
        zmm7_2.o = zmm7
        zmm6_3.o = zmm6

__security_check_cookie(rax_1 ^ &var_188)
return result

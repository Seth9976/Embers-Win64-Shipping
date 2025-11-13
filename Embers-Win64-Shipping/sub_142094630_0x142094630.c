// 函数: sub_142094630
// 地址: 0x142094630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t* i = *(arg1 + 0x498)

for (void* r15_2 = &i[sx.q(*(arg1 + 0x4a0)) * 4]; i != r15_2; i = &i[4])
    float var_f8[0x4]
    float zmm14_1
    result, zmm14_1 = sub_1407c8dd0(&var_f8, i)
    float var_d8[0x4]
    int96_t var_118_1 = var_d8[0].12
    
    if (var_d8[0] != zmm14_1 || var_118_1:4.d[0] != zmm14_1 || var_118_1:8.d[0] != zmm14_1)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        float zmm6_1[0x4] = *(arg1 + 0x1e0)
        float zmm5_1[0x4] = *(arg1 + 0x1c0)
        float zmm7_1[0x4]
        float zmm13_1[0x4]
        float var_e8[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_d8, zmm6_1), data_143f47880, 1)) == 0)
            float zmm2_1[0x4] = var_f8
            float temp0_135[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
            float temp0_136[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
            float temp0_137[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
            float temp0_138[0x4] = _mm_mul_ps(var_e8, zmm6_1)
            float temp0_139[0x4] = __mulps_xmmps_memps(temp0_135, data_143f47840)
            float temp0_140[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_141[0x4] = _mm_mul_ps(zmm2_1, temp0_140)
            zmm13_1 = _mm_mul_ps(zmm6_1, var_d8)
            float temp0_143[0x4] = _mm_add_ps(temp0_139, temp0_141)
            float temp0_145[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
            float temp0_147[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_145, data_143f47830)
            float temp0_149[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xc9)
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f47820)
            float temp0_151[0x4] = _mm_add_ps(temp0_143, temp0_148)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_153[0x4] = _mm_mul_ps(temp0_149, temp0_152)
            float temp0_154[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            zmm6_1 = _mm_add_ps(temp0_151, temp0_150)
            float temp0_158[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xd2), temp0_154), temp0_153)
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_154)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_140)
            zmm7_1 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_138)), 
                *(arg1 + 0x1d0))
        else
            float zmm10_1[0x4] = data_143f47560
            float zmm8_1[0x4] = *(arg1 + 0x1d0)
            float temp0_4[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
            _mm_mul_ps(zmm6_1, var_d8)
            float temp0_9[0x4] = _mm_mul_ps(zmm5_1, temp0_4)
            float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_5)
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x1a)
            float temp0_14[0x4] = _mm_mul_ps(temp0_12, temp0_6)
            float temp0_16[0x4] = _mm_add_ps(temp0_13, _mm_shuffle_ps(temp0_9, temp0_9, 1))
            float temp0_17[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xc9)
            float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_11)
            float temp0_19[0x4] = _mm_sub_ps(temp0_11, temp0_14)
            float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm6_1)
            float temp0_21[0x4] = _mm_mul_ps(temp0_7, temp0_19)
            float zmm1_1[0x4] = __andps_xmmxud_memxud(
                _mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_16), zmm6_1), data_143f47570)
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x32)
            float temp0_27[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1_1, 0), temp0_25, 0x82)
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1_1, 0x31)
            float temp0_30[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0x10), temp0_28, 0x88)
            float temp0_32[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1_1, 0xe8)
            zmm1_1 = var_f8
            zmm10_1[0].q = zmm8_1 u>> 0x40
            float temp0_33[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm8_1, zmm10_1, 0xc4)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            float temp0_37[0x4] = _mm_mul_ps(zmm1_1, temp0_33)
            float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x29), temp0_35)
            float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x12), temp0_36)
            float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                _mm_shuffle_ps(temp0_37, temp0_37, 1))
            float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
            float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
            float temp0_47[0x4] = _mm_sub_ps(zmm10_1, temp0_44)
            float temp0_48[0x4] = _mm_mul_ps(temp0_45, var_d8)
            float temp0_49[0x4] = _mm_mul_ps(temp0_17, temp0_46)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, var_d8), data_143f47570)
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_49, zmm1_1, 0x32)
            float temp0_54[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_1, 0), temp0_52, 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1_1, 0x31)
            float temp0_57[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1_1, 0x10), temp0_55, 0x88)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, zmm1_1, 0xe8)
            float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
            float temp0_63[0x4] = _mm_mul_ps(temp0_59, temp0_30)
            zmm10_1[0].q = var_e8 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(var_e8, zmm10_1, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
            float temp0_69[0x4] = _mm_add_ps(temp0_63, _mm_mul_ps(temp0_65, temp0_27))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_27)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_62)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_32)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_30)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
            var_f8 = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_32)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            var_e8 = temp0_88
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
            var_d8 = temp0_99
            int96_t var_c8_1 =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_95, temp0_98), temp0_97), temp0_101)[0].12
            int128_t zmm10_2
            int64_t zmm14_2
            float zmm15_2[0x4]
            zmm10_2, zmm13_1, zmm14_2, zmm15_2 = sub_1407740e0(&var_f8, 0x322bcc77)
            float zmm2_2[0x4] = var_f8[0]
            float zmm1_2 = var_f8[1]
            zmm15_2 = _mm_and_ps(_mm_cmpeq_ps(zmm15_2, zmm13_1, 2), data_143f47870 ^ zmm10_2)
            uint32_t zmm0_2[0x4] = var_f8[2]
            zmm15_2 ^= data_143f47870
            zmm2_2[0] = zmm2_2[0] * zmm15_2[0]
            zmm1_2 = zmm1_2 * zmm15_2[0]
            zmm0_2[0] = zmm0_2[0] f* zmm15_2[0]
            float zmm3_2 = var_e8[0]
            var_f8[0] = zmm2_2[0]
            var_f8[1] = zmm1_2
            zmm1_2 = var_e8[1]
            float temp0_107[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0x55)
            zmm1_2 = zmm1_2 * temp0_107[0]
            var_f8[2] = zmm0_2[0]
            zmm0_2 = var_e8[2]
            zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
            zmm3_2 = zmm3_2 * temp0_107[0]
            zmm2_2 = var_d8[0]
            var_e8[1] = zmm1_2
            zmm1_2 = var_d8[1]
            var_e8[2] = zmm0_2[0]
            zmm0_2 = var_d8[2]
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0xaa)
            zmm1_2 = zmm1_2 * temp0_108[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
            zmm2_2[0] = zmm2_2[0] * temp0_108[0]
            var_d8[1] = zmm1_2
            var_d8[2] = zmm0_2[0]
            var_e8[0] = zmm3_2
            var_d8[0] = zmm2_2[0]
            uint32_t var_108[0x4]
            sub_14077e4a0(&var_108, &var_f8)
            uint32_t zmm5_2[0x4] = var_108
            zmm6_1 = data_143f47860
            uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
            zmm1_3 = _mm_rsqrt_ps(temp0_113)
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6_1)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), temp0_115)), 
                    zmm1_3), 
                zmm1_3)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
            uint32_t zmm0_3[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_c8_1:4.d, zmm14_2)
            zmm6_1 =
                _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f47850, zmm0_3) ^ data_143f47850
            zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_c8_1.d, var_c8_1:8.d[0].q), temp0_128[0].q)
            var_108 = zmm6_1
        int64_t rsi_1 = sx.q(arg3[1].d)
        int32_t rax_1 = (rsi_1 + 1).d
        arg3[1].d = rax_1
        
        if (rax_1 s> *(arg3 + 0xc))
            sub_140638970(arg3)
        
        result = *arg3
        int64_t rcx_5 = rsi_1 * 6
        *(result + (rcx_5 << 3)) = zmm6_1
        *(result + (rcx_5 << 3) + 0x10) = zmm7_1
        *(result + (rcx_5 << 3) + 0x20) = zmm13_1

return result

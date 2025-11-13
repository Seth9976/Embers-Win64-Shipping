// 函数: sub_142090f40
// 地址: 0x142090f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x4a0))
    result.b = 0
else
    float var_e8[0x4]
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm13_1[0x4]
    float zmm15_1[0x4]
    result, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm13_1, zmm15_1 =
        sub_1407c8dd0(&var_e8, (sx.q(arg2) << 6) + *(arg1 + 0x498))
    float zmm12_1[0x4] = var_e8
    float var_d8[0x4]
    arg3[1] = var_d8
    *arg3 = zmm12_1
    float var_c8[0x4]
    arg3[2] = var_c8
    
    if (arg4 != 0)
        float zmm5_1[0x4] = *(arg1 + 0x1c0)
        float var_18_1[0x4] = zmm6_1
        zmm6_1 = *(arg1 + 0x1e0)
        float var_28_1[0x4] = zmm7_1
        float var_88_1[0x4] = zmm13_1
        float var_a8_1[0x4] = zmm15_1
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_c8, zmm6_1), data_143f47880, 1)) == 0)
            float temp0_133[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), 
                _mm_shuffle_ps(zmm12_1, zmm12_1, 0x1b))
            float temp0_137[0x4] = _mm_mul_ps(zmm6_1, var_d8)
            float temp0_138[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_139[0x4] = __mulps_xmmps_memps(temp0_136, data_143f47840)
            float temp0_140[0x4] = _mm_mul_ps(temp0_138, zmm12_1)
            float temp0_141[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
            zmm13_1 = _mm_mul_ps(zmm6_1, var_c8)
            float temp0_143[0x4] = _mm_add_ps(temp0_139, temp0_140)
            float temp0_145[0x4] = _mm_mul_ps(temp0_133, _mm_shuffle_ps(zmm12_1, zmm12_1, 0x4e))
            float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), 
                _mm_shuffle_ps(zmm12_1, zmm12_1, 0xb1))
            float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, data_143f47830)
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_148, data_143f47820)
            float temp0_151[0x4] = _mm_add_ps(temp0_143, temp0_149)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            float temp0_154[0x4] = _mm_mul_ps(temp0_141, temp0_153)
            zmm6_1 = _mm_add_ps(temp0_151, temp0_150)
            float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_138)
            zmm7_1 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
                *(arg1 + 0x1d0))
        else
            float temp0_4[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
            float var_38_1[0x4] = zmm8_1
            zmm8_1 = *(arg1 + 0x1d0)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
            float temp0_7[0x4] = _mm_mul_ps(zmm5_1, temp0_4)
            float temp0_9[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
            float temp0_13[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), 
                _mm_shuffle_ps(temp0_7, temp0_7, 1))
            float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), temp0_10)
            float var_58_1[0x4] = zmm10_1
            zmm10_1 = data_143f47560
            float temp0_16[0x4] = _mm_sub_ps(zmm10_1, temp0_13)
            _mm_mul_ps(zmm6_1, var_c8)
            float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_9)
            float temp0_19[0x4] = _mm_sub_ps(temp0_9, temp0_15)
            float temp0_20[0x4] = _mm_mul_ps(temp0_16, zmm6_1)
            float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm6_1)
            float temp0_22[0x4] = _mm_mul_ps(temp0_6, temp0_19)
            float zmm1_1[0x4] = __andps_xmmxud_memxud(temp0_20, data_143f47570)
            float temp0_24[0x4] = _mm_add_ps(zmm12_1, zmm12_1)
            float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0), 
                _mm_shuffle_ps(temp0_22, zmm1_1, 0x32), 0x82)
            float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1_1, 0x10), 
                _mm_shuffle_ps(temp0_21, zmm1_1, 0x31), 0x88)
            float temp0_31[0x4] = _mm_mul_ps(temp0_24, zmm12_1)
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1_1, 0xe8)
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x29)
            zmm10_1[0].q = zmm8_1 u>> 0x40
            float temp0_35[0x4] = _mm_shuffle_ps(zmm8_1, zmm10_1, 0xc4)
            float temp0_37[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(zmm12_1, zmm12_1, 4))
            float temp0_40[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x1a), 
                _mm_shuffle_ps(temp0_31, temp0_31, 1))
            float temp0_41[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0x12), temp0_41)
            float temp0_44[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xc9)
            float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_37)
            float temp0_46[0x4] = _mm_sub_ps(temp0_37, temp0_43)
            float temp0_47[0x4] = _mm_mul_ps(temp0_45, var_c8)
            float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_46)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_40), var_c8), 
                data_143f47570)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1_1, 0), 
                _mm_shuffle_ps(temp0_48, zmm1_1, 0x32), 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1_1, 0x10)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_47, zmm1_1, 0x31)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
            float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_30)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
            float zmm4_1[0x4] = arg3[1]
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1_1, 0xe8)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_33)
            zmm10_1[0].q = zmm4_1 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm4_1, zmm10_1, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
            float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_33)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
            var_e8 = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_33)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_d8_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_35)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_c8_1 = temp0_99[0].12
            int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            int512_t zmm8_2
            int512_t zmm9_2
            float zmm10_2[0x4]
            int512_t zmm11_2
            zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm13_1, zmm15_1 = sub_1407740e0(&var_e8, 0x322bcc77)
            float zmm2_2[0x4] = var_e8[0]
            float zmm1_2 = var_e8[1]
            zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13_1, 2), data_143f47870 ^ zmm10_2)
                ^ data_143f47870
            zmm2_2[0] = zmm2_2[0] * zmm15_1[0]
            uint32_t zmm0_2[0x4] = var_e8[2]
            zmm0_2[0] = zmm0_2[0] f* zmm15_1[0]
            zmm1_2 = zmm1_2 * zmm15_1[0]
            var_e8[0] = zmm2_2[0]
            float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
            var_e8[2] = zmm0_2[0]
            zmm0_2 = var_d8_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
            var_e8[1] = zmm1_2
            zmm1_2 = var_d8_1:4.d * temp0_107[0]
            float zmm3_2 = var_d8_1.d * temp0_107[0]
            zmm2_2 = var_c8_1.d
            var_d8_1:8.d = zmm0_2[0]
            zmm0_2 = var_c8_1:8.d
            var_d8_1:4.d = zmm1_2
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
            zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
            zmm2_2[0] = zmm2_2[0] * temp0_108[0]
            zmm1_2 = var_c8_1:4.d * temp0_108[0]
            var_c8_1:8.d = zmm0_2[0]
            var_d8_1.d = zmm3_2
            var_c8_1.d = zmm2_2[0]
            var_c8_1:4.d = zmm1_2
            uint32_t var_f8[0x4]
            sub_14077e4a0(&var_f8, &var_e8)
            uint32_t zmm5_2[0x4] = var_f8
            zmm6_1 = data_143f47860
            zmm11_2.o = zmm11_1
            zmm9_2.o = zmm9_1
            zmm8_2.o = var_38_1
            uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
            uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
            zmm1_3 = _mm_rsqrt_ps(zmm4_2)
            uint32_t zmm3_3[0x4] = _mm_mul_ps(zmm4_2, zmm6_1)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), zmm3_3)), 
                    zmm1_3), 
                zmm1_3)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), zmm3_3))
            uint32_t zmm0_3[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
            zmm6_1 =
                _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f47850, zmm0_3) ^ data_143f47850
            zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_128[0].q)
        
        *arg3 = zmm6_1
        arg3[1] = zmm7_1
        arg3[2] = zmm13_1
    
    result.b = 1

return result

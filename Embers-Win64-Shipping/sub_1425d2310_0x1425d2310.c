// 函数: sub_1425d2310
// 地址: 0x1425d2310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg2 + 0x430)
uint64_t result = sub_140d3c6e0(arg2 + 0x438)
uint64_t result_1 = result

if (result == 0)
    result = ((sx.q(*(arg2 + 0x494)) + 0x45) << 4) + arg2
    
    if (arg1 + 8 != result)
        int64_t rdi_2 = sx.q(*(result + 8))
        int64_t rsi_2 = *result
        int32_t r8_3 = *(arg1 + 0x14)
        *(arg1 + 0x10) = rdi_2.d
        
        if (rdi_2.d == 0 && r8_3 == 0)
            *(arg1 + 0x14) = 0
            return result
        
        sub_1405a4b40(arg1 + 8, rdi_2.d, r8_3)
        return memcpy(*(arg1 + 8), rsi_2, (rdi_2 * 0x30).d) __tailcall
else
    int64_t rbx = sx.q(*(arg2 + 0x4b8))
    
    if (rbx.d != 0)
        int32_t rdi_1 = 0
        *(arg1 + 0x10) = 0
        
        if (rbx.d s> *(arg1 + 0x14))
            sub_1405a5220(arg1 + 8, rbx.d)
        
        result = sub_140783960(arg1 + 8, rbx.d)
        int64_t r8_2 = rbx
        void* r12_4 = ((sx.q(*(result_1 + 0x494)) + 0x45) << 4) + result_1
        
        if (rbx.d s> 0)
            int64_t rdx_5 = 0
            float zmm15[0x4] = data_143f707b0
            int64_t rsi_1 = 0
            float zmm6[0x4]
            float var_48_1[0x4] = zmm6
            int128_t* rbx_2 = nullptr
            float zmm7[0x4]
            float var_58_1[0x4] = zmm7
            float zmm8[0x4]
            float var_68_1[0x4] = zmm8
            float zmm9[0x4]
            float var_78_1[0x4] = zmm9
            float zmm10[0x4]
            float var_88_1[0x4] = zmm10
            float zmm11[0x4]
            float var_98_1[0x4] = zmm11
            float zmm12[0x4]
            float var_a8_1[0x4] = zmm12
            float zmm13[0x4]
            float var_b8_1[0x4] = zmm13
            float zmm14[0x4]
            float var_c8_1[0x4] = zmm14
            int64_t var_108_1 = 0
            
            do
                int64_t rcx_6
                
                if (rsi_1 s>= 0 && rdi_1 s< *(arg2 + 0x4b8))
                    result = *(arg2 + 0x4b0)
                    rcx_6 = sx.q(*(result + (rsi_1 << 2)))
                
                if (rsi_1 s>= 0 && rdi_1 s< *(arg2 + 0x4b8) && rcx_6.d != 0xffffffff
                        && rcx_6.d s< *(r12_4 + 8))
                    result = *(arg1 + 8)
                    int128_t* rcx_9 = rcx_6 * 0x30 + *r12_4
                    *(rbx_2 + result) = *rcx_9
                    *(rbx_2 + result + 0x10) = rcx_9[1]
                    *(rbx_2 + result + 0x20) = rcx_9[2]
                else if (r14 != 0)
                    int64_t rcx_10 = sx.q(*(*(r14 + 0x1a8) + rdx_5 + 8))
                    
                    if (rcx_10.d s< 0 || rcx_10.d s>= *(arg1 + 0x10) || rcx_10.d s>= rdi_1)
                        float (* rax_4)[0x4] = *(r14 + 0x1b8)
                        zmm8 = *(rax_4 + rbx_2)
                        zmm9 = *(rax_4 + rbx_2 + 0x10)
                        zmm12 = *(rax_4 + rbx_2 + 0x20)
                    else
                        int64_t rdx_6 = *(r14 + 0x1b8)
                        zmm14 = data_143f70810
                        int128_t* rcx_13 = rcx_10 * 0x30 + *(arg1 + 8)
                        zmm8 = *(rbx_2 + rdx_6 + 0x20)
                        zmm13 = rcx_13[2]
                        float temp0_1[0x4] = _mm_min_ps(zmm13, zmm8)
                        zmm12 = _mm_mul_ps(zmm13, zmm8)
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, zmm14, 1)) == 0)
                            zmm7 = *(rbx_2 + rdx_6)
                            zmm6 = *rcx_13
                            float temp0_133[0x4] = _mm_mul_ps(rcx_13[1], zmm8)
                            float temp0_134[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                            float temp0_135[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
                            float temp0_136[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
                            float temp0_137[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                            float temp0_138[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xd2)
                            float temp0_139[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xc9)
                            float temp0_142[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_138, temp0_134), 
                                _mm_mul_ps(temp0_139, temp0_135))
                            float temp0_143[0x4] = _mm_add_ps(temp0_142, temp0_142)
                            float temp0_144[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xc9)
                            float temp0_146[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xd2), temp0_134)
                            float temp0_147[0x4] = _mm_mul_ps(temp0_144, temp0_135)
                            float temp0_148[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                            float temp0_149[0x4] = _mm_mul_ps(temp0_143, temp0_137)
                            float temp0_150[0x4] = _mm_sub_ps(temp0_146, temp0_147)
                            float temp0_151[0x4] = _mm_mul_ps(temp0_137, zmm6)
                            float temp0_152[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
                            float temp0_153[0x4] = _mm_add_ps(temp0_149, temp0_133)
                            float temp0_154[0x4] = _mm_mul_ps(temp0_136, temp0_152)
                            float temp0_155[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
                            float temp0_156[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                            float temp0_157[0x4] = _mm_mul_ps(temp0_148, temp0_155)
                            float temp0_158[0x4] = _mm_add_ps(temp0_150, temp0_153)
                            float temp0_159[0x4] = _mm_mul_ps(temp0_154, zmm15)
                            float temp0_160[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
                            float temp0_161[0x4] = __mulps_xmmps_memps(temp0_157, data_143f707a0)
                            zmm9 = __addps_xmmps_memps(temp0_158, *(rbx_2 + rdx_6 + 0x10))
                            rdx_5 = var_108_1
                            float temp0_163[0x4] = _mm_add_ps(temp0_159, temp0_151)
                            float temp0_164[0x4] = _mm_mul_ps(temp0_156, temp0_160)
                            zmm8 = _mm_add_ps(_mm_add_ps(temp0_163, temp0_161), 
                                __mulps_xmmps_memps(temp0_164, data_143f70790))
                        else
                            float zmm1_2[0x4] = *(rbx_2 + rdx_6)
                            zmm10 = data_143f707c0
                            float temp0_5[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
                            float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                            float temp0_7[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
                            float temp0_8[0x4] = _mm_mul_ps(temp0_5, zmm1_2)
                            float temp0_10[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x29), temp0_7)
                            float temp0_11[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
                            float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
                            float temp0_14[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x12), temp0_11)
                            float temp0_16[0x4] =
                                _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
                            float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_10)
                            float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_14)
                            float zmm3_2[0x4] = *rcx_13
                            float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_16)
                            float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm8)
                            float temp0_21[0x4] = _mm_mul_ps(temp0_6, temp0_18)
                            float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm8)
                            zmm8 = *(rbx_2 + rdx_6 + 0x10)
                            float temp0_23[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 4)
                            zmm1_2 = __andps_xmmxud_memxud(temp0_22, data_143f707d0)
                            float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1_2, 0x32)
                            float temp0_27[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1_2, 0), temp0_25, 0x82)
                            float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1_2, 0x31)
                            float temp0_30[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_21, zmm1_2, 0x10), temp0_28, 0x88)
                            float temp0_32[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1_2, 0xe8)
                            float temp0_33[0x4] = _mm_add_ps(zmm3_2, zmm3_2)
                            zmm10[0].q = zmm8 u>> 0x40
                            float temp0_34[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                            float temp0_35[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                            float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x29)
                            float temp0_37[0x4] = _mm_mul_ps(temp0_33, zmm3_2)
                            float temp0_38[0x4] = _mm_mul_ps(temp0_23, temp0_36)
                            float temp0_39[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x12)
                            float temp0_41[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xff), temp0_39)
                            float temp0_44[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                                _mm_shuffle_ps(temp0_37, temp0_37, 1))
                            float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_38)
                            float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_41)
                            float temp0_47[0x4] = _mm_sub_ps(zmm10, temp0_44)
                            float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm13)
                            float temp0_49[0x4] = _mm_mul_ps(temp0_35, temp0_46)
                            zmm1_2 =
                                __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm13), data_143f707d0)
                            float temp0_52[0x4] = _mm_shuffle_ps(temp0_49, zmm1_2, 0x32)
                            float temp0_54[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_2, 0), temp0_52, 0x82)
                            float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1_2, 0x10)
                            float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, zmm1_2, 0x31)
                            float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
                            float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
                            float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_27)
                            float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
                            float zmm5_2[0x4] = rcx_13[1]
                            float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1_2, 0xe8)
                            float temp0_63[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
                            zmm10[0].q = zmm5_2 u>> 0x40
                            float temp0_64[0x4] = _mm_shuffle_ps(zmm5_2, zmm10, 0xc4)
                            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
                            float temp0_67[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
                            float temp0_69[0x4] =
                                _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_30))
                            float temp0_71[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
                            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
                            float temp0_74[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
                            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
                            float temp0_77[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
                            float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
                            float var_148[0x4] = temp0_75
                            float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
                            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
                            float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
                            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
                            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
                            float temp0_87[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_32)
                            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
                            float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
                            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
                            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
                            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                            int96_t var_138_1 = temp0_88[0].12
                            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
                            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
                            float temp0_97[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
                            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
                            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
                            float temp0_101[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
                            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
                            int96_t var_128_1 = temp0_99[0].12
                            int96_t var_118_1 =
                                _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
                            zmm10, zmm12, zmm14, zmm15 = sub_1407740e0(&var_148, 0x322bcc77)
                            float zmm2_3[0x4] = var_148[0]
                            float zmm1_3 = var_148[1]
                            zmm14 =
                                _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm12, 2), data_143f70800 ^ zmm10)
                            uint32_t zmm0_3[0x4] = var_148[2]
                            zmm14 ^= data_143f70800
                            zmm2_3[0] = zmm2_3[0] * zmm14[0]
                            zmm1_3 = zmm1_3 * zmm14[0]
                            zmm0_3[0] = zmm0_3[0] f* zmm14[0]
                            var_148[0] = zmm2_3[0]
                            float temp0_107[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                            var_148[2] = zmm0_3[0]
                            zmm0_3 = var_138_1:8.d
                            zmm0_3[0] = zmm0_3[0] f* temp0_107[0]
                            var_148[1] = zmm1_3
                            zmm1_3 = var_138_1:4.d * temp0_107[0]
                            float zmm3_3 = var_138_1.d * temp0_107[0]
                            zmm2_3 = var_128_1.d
                            var_138_1:8.d = zmm0_3[0]
                            zmm0_3 = var_128_1:8.d
                            var_138_1:4.d = zmm1_3
                            float temp0_108[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                            zmm0_3[0] = zmm0_3[0] f* temp0_108[0]
                            zmm2_3[0] = zmm2_3[0] * temp0_108[0]
                            zmm1_3 = var_128_1:4.d * temp0_108[0]
                            var_128_1:8.d = zmm0_3[0]
                            var_138_1.d = zmm3_3
                            var_128_1.d = zmm2_3[0]
                            var_128_1:4.d = zmm1_3
                            uint32_t var_e8[0x4]
                            sub_14077e4a0(&var_e8, &var_148)
                            zmm5_2 = var_e8
                            zmm8 = data_143f707f0
                            r8_2 = rbx
                            rdx_5 = var_108_1
                            float temp0_109[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                            float temp0_111[0x4] =
                                _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                            float temp0_113[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                            float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm8)
                            float temp0_120[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm8, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                                    temp0_114), 
                                temp0_114)
                            float temp0_123[0x4] = _mm_sub_ps(zmm8, 
                                _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
                            float temp0_125[0x4] = _mm_cmpeq_ps(
                                _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                            float temp0_127[0x4] =
                                _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
                            float temp0_128[0x4] = _mm_unpacklo_ps(var_118_1:4.d, 0)
                            zmm8 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f707e0, 
                                temp0_125) ^ data_143f707e0
                            zmm9 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_118_1.d, var_118_1:8.d[0].q), temp0_128[0].q)
                            var_e8 = zmm8
                    
                    result = *(arg1 + 8)
                    *(rbx_2 + result) = zmm8
                    *(rbx_2 + result + 0x10) = zmm9
                    *(rbx_2 + result + 0x20) = zmm12
                
                rdx_5 += 0xc
                rdi_1 += 1
                rsi_1 += 1
                var_108_1 = rdx_5
                rbx_2 = &rbx_2[3]
            while (rsi_1 s< r8_2)
    else if (r14 != 0)
        int32_t rsi = *(r14 + 0x1b0)
        *(arg1 + 0x10) = 0
        
        if (*(arg1 + 0x14) != rsi)
            sub_1405a5220(arg1 + 8, rsi)
        
        return sub_140783960(arg1 + 8, rsi) __tailcall

return result

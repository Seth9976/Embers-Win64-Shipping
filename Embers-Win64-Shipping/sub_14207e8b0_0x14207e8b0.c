// 函数: sub_14207e8b0
// 地址: 0x14207e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
uint64_t var_e8 = __security_cookie ^ &var_218
uint64_t result

if (arg2 s< 0)
    result.b = 0
else
    result = zx.q(arg1[0x94].d)
    
    if (arg2 s>= result.d)
        result.b = 0
    else
        int64_t r8 = sx.q(arg3[1].d)
        
        if (arg2 - 1 + r8.d s< 0 || arg2 - 1 + r8.d s>= result.d)
            result.b = 0
        else
            float (* rbx_1)[0x4] = *arg3
            void* r12_3 = &rbx_1[r8 * 3]
            int32_t r15_1 = arg2
            
            if (rbx_1 != r12_3)
                float zmm6[0x4] = data_143f47570
                float zmm8[0x4]
                float var_68_1[0x4] = zmm8
                float zmm11[0x4]
                float var_98_1[0x4] = zmm11
                float zmm12[0x4]
                float var_a8_1[0x4] = zmm12
                float zmm13[0x4]
                float var_b8_1[0x4] = zmm13
                float zmm14[0x4]
                float var_c8_1[0x4] = zmm14
                float zmm15[0x4]
                float var_d8_1[0x4] = zmm15
                float zmm7[0x4]
                float var_58_1[0x4] = zmm7
                float zmm9[0x4]
                float var_78_1[0x4] = zmm9
                float zmm10[0x4]
                float var_88_1[0x4] = zmm10
                int64_t rsi_2 = sx.q(arg2) << 6
                
                do
                    int64_t r14_1 = arg1[0x93]
                    uint32_t var_178[0x4]
                    float var_148[0x4]
                    float (* rax_1)[0x4]
                    float zmm1[0x4]
                    
                    if (arg4 == 0)
                        rax_1 = &var_178
                        zmm1 = rbx_1[1]
                        var_178 = *rbx_1
                        float var_158_1[0x4] = rbx_1[2]
                        float var_168_1[0x4] = zmm1
                    else
                        rax_1 = sub_140ad7d70(rbx_1, &var_148, &arg1[0x38])
                        zmm6 = data_143f47570
                    
                    zmm11 = *rax_1
                    zmm12 = rax_1[2]
                    float zmm4[0x4] = data_143f47560
                    zmm13 = _mm_add_ps(zmm11, zmm11)
                    zmm8 = rax_1[1]
                    float zmm2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 4)
                    zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                    float var_198_1[0x4] = zmm8
                    float zmm3[0x4] = _mm_mul_ps(zmm11, zmm13)
                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm13, zmm13, 0x29))
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm13, zmm13, 0x12))
                    float zmm0[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
                    zmm14 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                    zmm15 = _mm_add_ps(zmm1, zmm2)
                    zmm2 = _mm_sub_ps(zmm2, zmm1)
                    float zmm5[0x4] = _mm_mul_ps(zmm12, zmm15)
                    zmm14 = _mm_mul_ps(zmm14, zmm2)
                    zmm2 = _mm_sub_ps(zmm4, zmm0)
                    zmm4[0].q = zmm8 u>> 0x40
                    zmm2 = _mm_and_ps(_mm_mul_ps(zmm2, zmm12), zmm6)
                    zmm0 = _mm_shuffle_ps(zmm14, zmm2, 0x32)
                    *(rsi_2 + r14_1) = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm2, 0), zmm0, 0x82)
                    zmm0 = _mm_shuffle_ps(zmm5, zmm2, 0x31)
                    *(rsi_2 + r14_1 + 0x10) =
                        _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm2, 0x10), zmm0, 0x88)
                    *(rsi_2 + r14_1 + 0x20) =
                        _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm14, 0x12), zmm2, 0xe8)
                    *(rsi_2 + r14_1 + 0x30) = _mm_shuffle_ps(zmm8, zmm4, 0xc4)
                    
                    if ((arg1[0x11].b & 4) != 0)
                        uint32_t (* rax_2)[0x4]
                        
                        if (arg4 == 0)
                            zmm7 = *(arg1 + 0x1e0)
                            zmm1 = data_143f47880
                            zmm6 = *(arg1 + 0x1c0)
                            float var_188_1[0x4] = zmm1
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm7), zmm1, 1))
                                    == 0)
                                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), 
                                    _mm_shuffle_ps(zmm11, zmm11, 0x1b))
                                zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                zmm4 = _mm_mul_ps(zmm7, zmm8)
                                zmm2 = __mulps_xmmps_memps(zmm2, data_143f47840)
                                zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                                zmm12 = _mm_mul_ps(zmm12, zmm7)
                                zmm0 = _mm_mul_ps(zmm5, zmm11)
                                zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                                float var_158_3[0x4] = zmm12
                                zmm2 = _mm_add_ps(zmm2, zmm0)
                                zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm11, zmm11, 0x4e))
                                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), 
                                    _mm_shuffle_ps(zmm11, zmm11, 0xb1))
                                zmm1 = __mulps_xmmps_memps(zmm1, data_143f47830)
                                zmm0 = __mulps_xmmps_memps(zmm0, data_143f47820)
                                zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm1), zmm0)
                                zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                                var_178 = zmm2
                                zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                                zmm0 = _mm_mul_ps(zmm0, zmm2)
                                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                                zmm3 = _mm_sub_ps(_mm_mul_ps(zmm3, zmm6), zmm0)
                                zmm3 = _mm_add_ps(zmm3, zmm3)
                                zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm0 = _mm_mul_ps(zmm0, zmm2)
                                zmm3 = _mm_mul_ps(zmm3, zmm5)
                                float var_168_3[0x4] = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(zmm1, zmm0), _mm_add_ps(zmm3, zmm4)), 
                                    *(arg1 + 0x1d0))
                            else
                                zmm8 = data_143f47560
                                zmm2 = _mm_add_ps(zmm6, zmm6)
                                zmm4 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                                zmm0 = _mm_shuffle_ps(zmm6, zmm6, 4)
                                zmm13 = _mm_mul_ps(zmm13, zmm11)
                                zmm3 = _mm_mul_ps(zmm2, zmm6)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), zmm0)
                                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x12)
                                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), 
                                    _mm_shuffle_ps(zmm3, zmm3, 1))
                                zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm6, zmm6, 0xff))
                                zmm6 = *(arg1 + 0x1d0)
                                _mm_mul_ps(zmm12, zmm7)
                                zmm15 = _mm_mul_ps(zmm15, zmm12)
                                zmm9 = _mm_add_ps(zmm2, zmm1)
                                zmm1 = _mm_sub_ps(zmm1, zmm2)
                                zmm9 = _mm_mul_ps(zmm9, zmm7)
                                zmm4 = _mm_mul_ps(zmm4, zmm1)
                                zmm1 = __andps_xmmxud_memxud(
                                    _mm_mul_ps(_mm_sub_ps(zmm8, zmm0), zmm7), data_143f47570)
                                zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
                                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm1, 0), zmm0, 0x82)
                                zmm0 = _mm_shuffle_ps(zmm9, zmm1, 0x31)
                                zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
                                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4, 0x12), zmm1, 0xe8)
                                zmm8[0].q = zmm6 u>> 0x40
                                zmm6 = _mm_shuffle_ps(zmm6, zmm8, 0xc4)
                                zmm1 = __andps_xmmxud_memxud(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm8, 
                                            _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1a), 
                                                _mm_shuffle_ps(zmm13, zmm13, 1))), 
                                        zmm12), 
                                    data_143f47570)
                                zmm0 = _mm_shuffle_ps(zmm14, zmm1, 0x32)
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm1, 0), zmm0, 0x82)
                                zmm0 = _mm_shuffle_ps(zmm15, zmm1, 0x31)
                                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm1, 0x10), zmm0, 0x88)
                                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                                zmm8[0].q = var_198_1 u>> 0x40
                                zmm11 = _mm_shuffle_ps(var_198_1, zmm8, 0xc4)
                                zmm2 = _mm_mul_ps(zmm2, zmm5)
                                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm15 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm14, 0x12), zmm1, 0xe8)
                                zmm0 = _mm_mul_ps(zmm0, zmm7)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm9)
                                zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0), zmm1)
                                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm6)
                                zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm9)
                                zmm2 = _mm_add_ps(zmm2, zmm3)
                                zmm0 = _mm_mul_ps(zmm0, zmm7)
                                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm5)
                                float var_1e8[0x4] = zmm2
                                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0x55), zmm5)
                                zmm3 = _mm_add_ps(zmm3, zmm0)
                                zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm6)
                                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm7)
                                zmm3 = _mm_add_ps(zmm3, zmm1)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xaa), zmm9)
                                zmm2 = _mm_add_ps(zmm2, zmm0)
                                zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xff)
                                zmm3 = _mm_add_ps(zmm3, zmm4)
                                zmm15 = _mm_mul_ps(zmm15, zmm6)
                                zmm0 = _mm_shuffle_ps(zmm11, zmm11, 0)
                                zmm2 = _mm_add_ps(zmm2, zmm1)
                                zmm0 = _mm_mul_ps(zmm0, zmm7)
                                int96_t var_1d8_1 = zmm3[0].12
                                zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x55), zmm5)
                                zmm2 = _mm_add_ps(zmm2, zmm15)
                                zmm1 = _mm_mul_ps(zmm1, zmm9)
                                zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                                zmm3 = _mm_add_ps(zmm3, zmm0)
                                zmm11 = _mm_mul_ps(zmm11, zmm6)
                                int96_t var_1c8_1 = zmm2[0].12
                                int96_t var_1b8_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm11)[0].12
                                int128_t zmm8_1
                                float zmm10_1[0x4]
                                zmm8_1, zmm10_1 = sub_1407740e0(&var_1e8, 0x322bcc77)
                                float zmm2_1[0x4] = var_1e8[0]
                                float zmm1_1 = var_1e8[1]
                                float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_188_1, zmm10_1, 2), 
                                    data_143f47870 ^ zmm8_1)
                                uint32_t zmm0_1[0x4] = var_1e8[2]
                                zmm4_1 ^= data_143f47870
                                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                                zmm1_1 = zmm1_1 * zmm4_1[0]
                                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                                var_1e8[0] = zmm2_1[0]
                                zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                                float zmm3_1 = var_1d8_1.d * zmm2_1[0]
                                var_1e8[1] = zmm1_1
                                zmm1_1 = var_1d8_1:4.d * zmm2_1[0]
                                var_1e8[2] = zmm0_1[0]
                                zmm0_1 = var_1d8_1:8.d
                                zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
                                zmm2_1 = var_1c8_1.d
                                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                                var_1d8_1.d = zmm3_1
                                var_1d8_1:4.d = zmm1_1
                                var_1d8_1:8.d = zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                                zmm0_1 = var_1c8_1:8.d
                                zmm1_1 = var_1c8_1:4.d * zmm4_1[0]
                                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                                var_1c8_1:4.d = zmm1_1
                                var_1c8_1.d = zmm2_1[0]
                                var_1c8_1:8.d = zmm0_1[0]
                                uint32_t var_1a8[0x4]
                                sub_14077e4a0(&var_1a8, &var_1e8)
                                uint32_t zmm5_1[0x4] = var_1a8
                                uint32_t zmm6_1[0x4] = data_143f47860
                                zmm1 = _mm_mul_ps(zmm5_1, zmm5_1)
                                float var_158_2[0x4] = zmm10_1
                                zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                                float zmm4_2[0x4] =
                                    _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                                zmm1 = _mm_rsqrt_ps(zmm4_2)
                                float zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6_1)
                                float zmm2_2[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6_1, 
                                            _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3_2)), 
                                        zmm1), 
                                    zmm1)
                                zmm6_1 = _mm_sub_ps(zmm6_1, 
                                    _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_2))
                                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), 
                                    zmm4_2, 2)
                                zmm6_1 = _mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_2), zmm2_2)
                                zmm2_2 = _mm_unpacklo_ps(var_1b8_1:4.d, 0)
                                zmm6_1 =
                                    _mm_and_ps(_mm_mul_ps(zmm6_1, zmm5_1) ^ data_143f47850, zmm0)
                                    ^ data_143f47850
                                float var_168_2[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_1b8_1.d, var_1b8_1:8.d[0].q), zmm2_2[0].q)
                                var_1a8 = zmm6_1
                                var_178 = zmm6_1
                            
                            rax_2 = &var_178
                        else
                            uint32_t var_118[0x4]
                            rax_2 = &var_118
                            zmm1 = rbx_1[1]
                            var_118 = *rbx_1
                            float var_f8_1[0x4] = rbx_1[2]
                            float var_108_1[0x4] = zmm1
                        
                        zmm1 = rax_2[1]
                        var_148 = *rax_2
                        float var_128_1[0x4] = rax_2[2]
                        float var_138_1[0x4] = zmm1
                        sub_1420aac20(arg1, r15_1, &var_148, arg6)
                        zmm6 = data_143f47570
                    
                    r15_1 += 1
                    rsi_2 += 0x40
                    rbx_1 = &rbx_1[3]
                while (rbx_1 != r12_3)
            
            (*(*arg1 + 0x968))(arg1, arg2)
            *(arg1 + 0x50c) += 1
            
            if (arg5 != 0)
                sub_141ee8490(arg1)
            
            result.b = 1

__security_check_cookie(var_e8 ^ &var_218)
return result

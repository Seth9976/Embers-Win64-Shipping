// 函数: sub_1420ad180
// 地址: 0x1420ad180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rcx = *(arg3 + 0x20)
uint128_t zmm6 = arg2

if (rcx != 0)
    result = (*(*rcx + 0x260))(rcx)
    void* const* result_1 = result
    
    if (result != 0)
        int64_t* rcx_1 = result[0x26]
        
        if (rcx_1 != 0)
            int64_t r8 = *rcx_1
            int64_t arg_18 = 0
            result = (*(r8 + 0x3e8))(rcx_1, 0, r8)
            
            if (result.b == 0)
                result = result_1[0x26]
                int96_t var_68_1 = (*(result + 0x1d0)).12
                
                if ((arg1[0x18].b & 4) != 0)
                    zmm6 = zx.o(0)
                
                if (arg1[8].d != 0 || arg1[0x12].d != 0)
                    float var_38_1[0x4] = arg4
                    float var_48_1[0x4] = arg5
                    int64_t var_b8
                    int64_t var_78
                    (*(*arg1 + 0x370))(arg1, arg3, zmm6, &var_b8, &var_78)
                    char rax_2 = *(arg1 + 0xc4)
                    int32_t var_70
                    int512_t zmm7
                    int512_t zmm8
                    int32_t var_b0
                    uint64_t var_a8
                    uint64_t var_98
                    uint64_t var_88
                    uint128_t zmm0
                    uint128_t zmm2
                    uint128_t zmm3
                    uint128_t zmm4_1
                    uint32_t zmm5_1[0x4]
                    float zmm9[0x4]
                    float zmm10[0x4]
                    
                    if (rax_2 == 2)
                        int64_t* rbx_1 = result_1[0x26]
                        var_98 = var_b8
                        zmm0 = zx.o(rbx_1[0x25])
                        bool cond:1_1 = zmm0.d f!= rbx_1[0x36].d
                        int32_t var_90_1 = var_b0
                        int32_t rax_4 = rbx_1[0x26].d
                        var_a8 = zmm0.q
                        
                        if (cond:1_1 || var_a8:4.d.d f!= *(rbx_1 + 0x1b4)
                                || not(rax_4.d f== rbx_1[0x37].d))
                            arg4 = data_143f47910
                            zmm4_1 = zx.o(rbx_1[0x25])
                            zmm5_1 = data_143f478d0
                            zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                            uint32_t temp0_2[0x4] = _mm_and_ps(zmm5_1, arg4)
                            zmm2 = _mm_unpacklo_ps(zmm0, 0)
                            zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_4.q), zmm2.q)
                            zmm2 = data_143f47920
                            zmm3 = _mm_div_ps(zmm6, arg4)
                            var_a8 = zmm4_1.q
                            zmm4_1 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3))
                            zmm6 = _mm_sub_ps(zmm6, 
                                _mm_mul_ps(
                                    _mm_and_ps(
                                        _mm_cmpeq_ps(zmm2, 
                                            __andps_xmmxud_memxud(zmm3, data_143f478d0), 2), 
                                        zmm4_1 ^ zmm3) ^ zmm4_1, 
                                    arg4))
                            zmm2 =
                                _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_2), _mm_min_ps(zmm6, temp0_2))
                            float temp0_17[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
                            arg2 = _mm_add_ps(zmm2, arg4)
                            arg5 = _mm_and_ps(temp0_17, arg2 ^ zmm2) ^ arg2
                            zmm0 = _mm_cmpeq_ps(data_143f47900, arg5, 1)
                            zmm2 = _mm_and_ps(_mm_sub_ps(arg5, arg4) ^ arg5, zmm0) ^ arg5
                            int32_t var_a0_3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
                            rbx_1[0x36] =
                                (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
                            rbx_1[0x37].d = var_a0_3
                            float (* rax_6)[0x4]
                            rax_6, arg4, arg5 = sub_140ade170(&rbx_1[0x36], &var_a8)
                            *(rbx_1 + 0x1a0) = *rax_6
                        
                        var_88.o = *(rbx_1 + 0x1a0)
                        result, zmm7, zmm8 =
                            sub_141f48240(rbx_1, &var_98, &var_88, 0, arg4, arg5, zmm9, zmm10, 0, 0)
                    else if (rax_2 != 1)
                        int64_t* rcx_9 = result_1[0x26]
                        var_88 = var_78
                        int32_t var_80_1 = var_70
                        var_98 = var_b8
                        int32_t var_90_4 = var_b0
                        result, zmm7, zmm8 = sub_141f48a10(rcx_9, &var_98, &var_88, 0, 0, 0)
                    else
                        int64_t* rsi_1 = result_1[0x26]
                        var_98 = var_b8
                        int32_t var_90_2 = var_b0
                        zmm0 = zx.o(rsi_1[0x25])
                        bool cond:2_1 = zmm0.d f!= rsi_1[0x36].d
                        int32_t rax_8 = rsi_1[0x26].d
                        var_a8 = zmm0.q
                        
                        if (cond:2_1 || var_a8:4.d.d f!= *(rsi_1 + 0x1b4)
                                || not(rax_8.d f== rsi_1[0x37].d))
                            arg5 = data_143f47910
                            zmm4_1 = zx.o(rsi_1[0x25])
                            zmm5_1 = data_143f478d0
                            zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                            uint32_t temp0_27[0x4] = _mm_and_ps(zmm5_1, arg5)
                            zmm2 = _mm_unpacklo_ps(zmm0, 0)
                            float temp0_30[0x4] =
                                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_8.q), zmm2.q)
                            zmm2 = data_143f47920
                            zmm3 = _mm_div_ps(temp0_30, arg5)
                            var_a8 = zmm4_1.q
                            zmm4_1 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3))
                            zmm2 = _mm_and_ps(
                                _mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f478d0), 2), 
                                zmm4_1 ^ zmm3) ^ zmm4_1
                            arg2 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_27), 
                                _mm_min_ps(_mm_sub_ps(temp0_30, _mm_mul_ps(zmm2, arg5)), temp0_27))
                            zmm0 = _mm_add_ps(arg2, arg5)
                            zmm2 = _mm_and_ps(zmm0 ^ arg2, _mm_cmpeq_ps(zx.o(0), arg2, 2)) ^ zmm0
                            zmm0 = _mm_cmpeq_ps(data_143f47900, zmm2, 1)
                            zmm3 = _mm_and_ps(_mm_sub_ps(zmm2, arg5) ^ zmm2, zmm0) ^ zmm2
                            int32_t var_a0_6 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
                            rsi_1[0x36] =
                                (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55).q)).q
                            rsi_1[0x37].d = var_a0_6
                            float var_58[0x4]
                            float (* rax_10)[0x4]
                            rax_10, arg4, arg5 = sub_140ade170(&rsi_1[0x36], &var_58)
                            *(rsi_1 + 0x1a0) = *rax_10
                        
                        var_a8.o = *(rsi_1 + 0x1a0)
                        sub_141f48240(rsi_1, &var_98, &var_a8, 0, arg4, arg5, zmm9, zmm10, 0, 0)
                        (*(*arg1 + 0x388))(arg1, &var_88, arg3)
                        int64_t* rcx_8 = result_1[0x26]
                        var_98 = var_88
                        int32_t var_80
                        int32_t var_90_3 = var_80
                        result, zmm7, zmm8 = sub_141f4a3b0(rcx_8, &var_98, 0, 0, 0)
                    void* rcx_10 = result_1[0x26]
                    uint128_t zmm2_1 = zx.o(data_14399f938)
                    zmm8.o = var_48_1
                    zmm7.o = var_38_1
                    var_78.o = *(rcx_10 + 0x1d0)
                    
                    if (not(zmm2_1.q f<= (zx.o(0)).q))
                        float zmm3_1[0x4] = var_78.d
                        int64_t zmm1 = var_78:4.d
                        zmm3_1[0] = zmm3_1[0] f- var_68_1.d
                        zmm1.d = zmm1.d f- var_68_1:4.d
                        zmm2_1.d = 1f / _mm_cvtpd_ps(zmm2_1)[0]
                        float zmm0_1[0x4] = var_70
                        zmm0_1[0] = zmm0_1[0] f- var_68_1:8.d
                        zmm3_1[0] = zmm3_1[0] f* zmm2_1.d
                        zmm1.d = zmm1.d f* zmm2_1.d
                        zmm0_1[0] = zmm0_1[0] f* zmm2_1.d
                        result = zx.q(zmm0_1[0])
                        *(rcx_10 + 0x140) = (_mm_unpacklo_ps(zmm3_1, zmm1)).q
                        *(rcx_10 + 0x148) = result.d

return result

// 函数: sub_141f9bc60
// 地址: 0x141f9bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
uint128_t zmm6 = zx.o(*arg2)
uint128_t zmm0
zmm0.q = fconvert.d(zmm6.d)
uint64_t var_58 = zmm6.q
uint64_t result = _finite(zmm0.q)

if (result.d != 0)
    uint32_t zmm8[0x4] = var_58:4.d
    result = _finite(_mm_cvtps_pd(zmm8[0].q).q)
    
    if (result.d != 0)
        uint32_t zmm7[0x4] = rax
        result = _finite(_mm_cvtps_pd(zmm7[0].q).q)
        
        if (result.d != 0)
            float zmm1[0x4] = data_143a2d8e8
            
            if (not(_mm_and_ps(zmm6, 0x7fffffff).d f>= zmm1[0])
                    && not(_mm_and_ps(zmm8, 0x7fffffff)[0] f>= zmm1[0])
                    && not(_mm_and_ps(zmm7, 0x7fffffff)[0] f>= zmm1[0]))
                zmm8 = data_143f3c590
                float zmm2[0x4] = *(arg1 + 0x28c)
                zmm7 = arg1[0x51].d
                float zmm3[0x4] = *arg2
                float zmm5_1[0x4] = __andps_xmmxud_memxud(zmm8, data_143f3c560)
                zmm2 = _mm_unpacklo_ps(zmm2, 0)
                zmm7 = _mm_unpacklo_ps(zmm7, arg1[0x52].d.q)
                zmm0 = arg2[1].d
                zmm7 = _mm_unpacklo_ps(zmm7, zmm2[0].q)
                zmm2 = _mm_unpacklo_ps(*(arg2 + 4), 0)
                zmm3 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), zmm2[0].q)
                zmm2 = data_143f3c5a0
                zmm7 = _mm_sub_ps(zmm7, zmm3)
                zmm3 = _mm_div_ps(zmm7, zmm8)
                float zmm4_1[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3))
                zmm2 = _mm_and_ps(
                    _mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f3c560), 2), 
                    zmm4_1 ^ zmm3)
                zmm1 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), 
                    _mm_min_ps(_mm_sub_ps(zmm7, _mm_mul_ps(zmm2 ^ zmm4_1, zmm8)), zmm5_1))
                zmm0 = _mm_add_ps(zmm1, zmm8)
                zmm2 = _mm_and_ps(zmm0 ^ zmm1, _mm_cmpeq_ps(zx.o(0), zmm1, 2)) ^ zmm0
                zmm0 = _mm_cmpeq_ps(data_143f3c580, zmm2, 1)
                zmm1 = _mm_and_ps(_mm_sub_ps(zmm2, zmm8) ^ zmm2, zmm0) ^ zmm2
                result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_shuffle_ps(0x3a83126f, 0x3a83126f, 0), 
                    __andps_xmmxud_memxud(zmm1, data_143f3c560), 1)))
                
                if (result.d != 0)
                    arg1[0x51] = *arg2
                    arg1[0x52].d = arg2[1].d
                    result = arg1[0x26]
                    
                    if (result != 0 && (*(result + 0x14c) & 8) != 0)
                        void var_48
                        int64_t* rax_3 = (*(*arg1 + 0x660))(arg1, &var_48)
                        int64_t* rcx_1 = arg1[0x26]
                        int32_t rax_4 = rax_3[1].d
                        var_58 = *rax_3
                        int32_t var_50_1 = rax_4
                        return sub_141f4a3b0(rcx_1, &var_58, 0, 0, 0)

return result

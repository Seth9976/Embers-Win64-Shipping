// 函数: sub_1422750d0
// 地址: 0x1422750d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t* var_48

if (arg1[0x4c5].d s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + arg1[0x4c4])
        
        if (rcx != 0 && (*(*rcx + 0x280))(rcx) == 0)
            var_48 = arg4
            int64_t* rcx_1 = *(rdi_1 + arg1[0x4c4])
            
            if ((*(*rcx_1 + 0x2a8))(rcx_1, arg1[0x1ca], arg2, arg3, var_48) != 0)
                break
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[0x4c5].d)

uint128_t zmm0
zmm0.d = (*arg3).d f+ *arg4
*arg3 = zmm0.d
arg2 = arg4[1]
arg2[0] = arg2[0] f+ *(arg3 + 4)
*(arg3 + 4) = arg2[0]
zmm0.d = arg4[2].d f+ *(arg3 + 8)
*(arg3 + 8) = zmm0.d
*arg4 = data_143dbb208
arg4[2] = data_143dbb210
int64_t* rcx_2 = *(data_143f5b298 + 0xb08)

if (rcx_2 != 0)
    char result = (*(*rcx_2 + 0x120))(rcx_2)
    
    if (result != 0)
        zmm0 = *(arg3 + 8)
        float zmm6[0x4] = *arg3
        uint32_t zmm5[0x4] = data_143f525c0
        float temp0[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
        float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0.q), temp0[0].q)
        float zmm2[0x4] = data_143f526c0
        float zmm7[0x4] = data_143f526b0
        float temp0_3[0x4] = _mm_div_ps(temp0_2, zmm7)
        uint32_t temp0_4[0x4] = _mm_and_ps(zmm5, zmm7)
        float temp0_6[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3))
        float temp0_11[0x4] = _mm_sub_ps(temp0_2, 
            _mm_mul_ps(
                _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_3, data_143f525c0), 2), 
                    temp0_6 ^ temp0_3) ^ temp0_6, 
                zmm7))
        float temp0_14[0x4] =
            _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_4), _mm_min_ps(temp0_11, temp0_4))
        float temp0_15[0x4] = _mm_add_ps(zmm7, temp0_14)
        float zmm8[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_14, 2), temp0_15 ^ temp0_14) ^ temp0_15
        zmm0 = _mm_cmpeq_ps(data_143f526a0, zmm8, 1)
        arg2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
        *arg3 = arg2[0]
        zmm0 = _mm_shuffle_ps(arg2, arg2, 0x55)
        *(arg3 + 8) = _mm_shuffle_ps(arg2, arg2, 0xaa)[0]
        *(arg3 + 4) = zmm0.d
        return result

(*(*arg1 + 0x7f0))(arg1, arg3, *(arg1 + 0x2714), arg1[0x4e3].d, var_48)
(*(*arg1 + 0x800))(arg1, arg3, *(arg1 + 0x271c), arg1[0x4e4].d)
arg1[0x4e5].d
*(arg1 + 0x2724)
jump(*(*arg1 + 0x7f8))

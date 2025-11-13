// 函数: sub_141f42080
// 地址: 0x141f42080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_58

if (arg1[0x18] != 0)
    return (*(*arg1 + 0x470))(arg1, arg2, sub_140ade170(arg3, &var_58), zx.q(arg4), arg5, arg6, 
        arg7)

float zmm10[0x4]

if (0f f!= *arg2 || 0f f!= arg2[1] || 0f f!= arg2[2])
    zmm10 = *arg3
else
    uint128_t zmm5 = zx.o(arg1[0x25])
    int32_t rax_1 = arg1[0x26].d
    zmm10 = *arg3
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
    uint128_t zmm6 = data_143f3b410
    float zmm0[0x4] = zmm5
    float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm10, (*(arg3 + 8))[0].q), temp0_1[0].q)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    uint128_t zmm4 =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, rax_1[0].q), _mm_unpacklo_ps(temp0_4, 0)[0].q)
    float zmm2[0x4] = data_143f3b420
    float temp0_8[0x4] = _mm_sub_ps(temp0_3, zmm4)
    var_58 = zmm5.q
    zmm5 = __andps_xmmxud_memxud(zmm6, data_143f3b3e0)
    float temp0_10[0x4] = _mm_div_ps(temp0_8, zmm6)
    zmm4 = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_10))
    float temp0_17[0x4] = _mm_sub_ps(temp0_8, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_10, data_143f3b3e0), 2), 
                zmm4 ^ temp0_10) ^ zmm4, 
            zmm6))
    float temp0_20[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5), _mm_min_ps(temp0_17, zmm5))
    float temp0_21[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_20, 2)
    float temp0_22[0x4] = _mm_add_ps(temp0_20, zmm6)
    float zmm7[0x4] = _mm_and_ps(temp0_21, temp0_22 ^ temp0_20) ^ temp0_22
    float temp0_24[0x4] = _mm_cmpeq_ps(data_143f3b400, zmm7, 1)
    float zmm1[0x4] = _mm_and_ps(_mm_sub_ps(zmm7, zmm6) ^ zmm7, temp0_24) ^ zmm7
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
            __andps_xmmxud_memxud(zmm1, data_143f3b3e0), 1)) == 0)
        if (arg5 != 0)
            memset(arg5, 0, 0x88)
            *(arg5 + 8) = 0x3f800000
        
        uint32_t result
        result.b = 1
        return result

if (zmm10[0] f!= arg1[0x36].d || (*(arg3 + 4))[0] f!= *(arg1 + 0x1b4)
        || (*(arg3 + 8))[0] f!= arg1[0x37].d)
    sub_140ade170(arg3, &var_58)
else
    var_58.o = *(arg1 + 0x1a0)

return (*(*arg1 + 0x470))(arg1, arg2, &var_58, zx.q(arg4), arg5, arg6, arg7)

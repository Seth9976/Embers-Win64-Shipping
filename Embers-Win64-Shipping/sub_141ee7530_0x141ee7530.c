// 函数: sub_141ee7530
// 地址: 0x141ee7530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t rax
    rax.b = 0
    return rax

float arg_10 = data_143a2d67c[0]
void var_48
int128_t* rax_2 = (*(*arg2 + 0x660))(arg2, &var_48)
float zmm7[0x4] = data_143f3abe0
float zmm6[0x4] = *(arg1 + 0x100)
float zmm0[0x4] = *(rax_2 + 8)
float zmm2[0x4] = *(rax_2 + 4)
float zmm3[0x4] = *rax_2
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm7, data_143f3a9d0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm6, (*(arg1 + 0x108))[0].q)
float temp0_4[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
float temp0_6[0x4] = _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(*(arg1 + 0x104), 0)[0].q)
zmm2 = data_143f3abf0
float temp0_7[0x4] = _mm_sub_ps(temp0_6, temp0_4)
float temp0_8[0x4] = _mm_div_ps(temp0_7, zmm7)
float temp0_10[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_8))
float temp0_15[0x4] = _mm_sub_ps(temp0_7, 
    _mm_mul_ps(
        _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_8, data_143f3a9d0), 2), 
            temp0_10 ^ temp0_8) ^ temp0_10, 
        zmm7))
float temp0_18[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0), _mm_min_ps(temp0_15, temp0))
float temp0_19[0x4] = _mm_add_ps(zmm7, temp0_18)
float zmm8[0x4] = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_18, 2), temp0_19 ^ temp0_18) ^ temp0_19
float temp0_22[0x4] = _mm_cmpeq_ps(data_143f3abd0, zmm8, 1)
zmm0 = arg_10
float zmm1[0x4] = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, temp0_22) ^ zmm8
uint32_t rax_3
rax_3.b = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), 
    __andps_xmmxud_memxud(zmm1, data_143f3a9d0), 1)) == 0
return rax_3

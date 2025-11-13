// 函数: sub_1426abdf0
// 地址: 0x1426abdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
uint128_t zmm6 = data_143f72030
uint128_t zmm7 = zx.o(*arg3)
int64_t* rax_1 = arg4
arg4.d = 0x38d1b717
uint128_t zmm4 = zx.o(*rax_1)
int32_t rax_2 = rax_1[1].d
float temp0_1[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
uint128_t zmm5 = _mm_unpacklo_ps(zmm4, rax_2[0].q)
zmm7 = _mm_unpacklo_ps(zmm7, rax[0].q)
zmm5 = _mm_unpacklo_ps(zmm5, temp0_1[0].q)
zmm7 = _mm_unpacklo_ps(zmm7, _mm_unpacklo_ps(*(arg3 + 4), 0)[0].q)
float zmm2[0x4] = data_143f72040
zmm7 = _mm_sub_ps(zmm7, zmm5)
zmm5 = __andps_xmmxud_memxud(zmm6, data_143f72010)
uint128_t zmm3 = _mm_div_ps(zmm7, zmm6)
zmm4 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3))
zmm7 = _mm_sub_ps(zmm7, 
    _mm_mul_ps(
        _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f72010), 2), zmm4 ^ zmm3)
            ^ zmm4, 
        zmm6))
float temp0_19[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5), _mm_min_ps(zmm7, zmm5))
float temp0_20[0x4] = _mm_add_ps(zmm6, temp0_19)
float zmm8[0x4] = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_19, 2), temp0_20 ^ temp0_19) ^ temp0_20
uint128_t zmm0 = _mm_cmpeq_ps(data_143f72020, zmm8, 1)
float zmm1[0x4] = _mm_and_ps(_mm_sub_ps(zmm8, zmm6) ^ zmm8, zmm0) ^ zmm8
int64_t result
result.b = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
    __andps_xmmxud_memxud(zmm1, data_143f72010), 1)) != 0
return result

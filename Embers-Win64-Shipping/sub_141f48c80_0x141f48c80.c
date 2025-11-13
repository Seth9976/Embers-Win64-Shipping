// 函数: sub_141f48c80
// 地址: 0x141f48c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = zx.o(arg1[0x25])
int32_t rax = arg1[0x26].d
float temp0[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
uint128_t zmm6 = data_143f3b410
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, (*(arg2 + 8)).q), temp0[0].q)
float zmm2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
uint128_t zmm4 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, rax[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
zmm2 = data_143f3b420
float temp0_7[0x4] = _mm_sub_ps(temp0_2, zmm4)
uint64_t var_58 = zmm5.q
zmm5 = __andps_xmmxud_memxud(zmm6, data_143f3b3e0)
float temp0_9[0x4] = _mm_div_ps(temp0_7, zmm6)
zmm4 = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_9))
float temp0_16[0x4] = _mm_sub_ps(temp0_7, 
    _mm_mul_ps(
        _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_9, data_143f3b3e0), 2), 
            zmm4 ^ temp0_9) ^ zmm4, 
        zmm6))
float temp0_19[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5), _mm_min_ps(temp0_16, zmm5))
float temp0_20[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_19, 2)
float temp0_21[0x4] = _mm_add_ps(temp0_19, zmm6)
float zmm7[0x4] = _mm_and_ps(temp0_20, temp0_21 ^ temp0_19) ^ temp0_21
uint128_t zmm0 = _mm_cmpeq_ps(data_143f3b400, zmm7, 1)
float zmm1[0x4] = _mm_and_ps(_mm_sub_ps(zmm7, zmm6) ^ zmm7, zmm0) ^ zmm7
uint32_t result = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
    __andps_xmmxud_memxud(zmm1, data_143f3b3e0), 1))

if (result == 0)
    return result

int32_t rax_1 = *(arg1 + 0x124)
var_58 = *(arg1 + 0x11c)
int32_t var_50_1 = rax_1
float var_48[0x4]
float (* rax_2)[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
rax_2, zmm7_1, zmm8_1 = sub_140ade170(arg2, &var_48)
float zmm9[0x4]
float zmm10[0x4]
return sub_141f48240(arg1, &var_58, rax_2, arg3, zmm7_1, zmm8_1, zmm9, zmm10, arg4, arg5)

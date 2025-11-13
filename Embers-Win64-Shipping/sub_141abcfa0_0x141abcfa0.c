// 函数: sub_141abcfa0
// 地址: 0x141abcfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc) == 0)
    *arg2 = *arg1
    arg2[2] = *(arg1 + 8)
    return arg2

float zmm5[0x4] = *arg3
uint128_t zmm0 = *(arg1 + 8)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 4), 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg1, zmm0.q), temp0[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_2)
float temp0_10[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_1), zmm0)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_5, temp0_11)
zmm0 = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_2)
float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_1)
float temp0_17[0x4] = _mm_add_ps(temp0_12, temp0_4)
float temp0_19[0x4] = _mm_add_ps(_mm_sub_ps(temp0_16, zmm0), temp0_17)
*arg2 = temp0_19[0]
zmm0 = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)[0]
arg2[1] = zmm0.d
return arg2

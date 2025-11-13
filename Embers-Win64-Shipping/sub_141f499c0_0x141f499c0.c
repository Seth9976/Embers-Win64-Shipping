// 函数: sub_141f499c0
// 地址: 0x141f499c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0xb0)

if (result != 0)
    float zmm5[0x4] = *(result + 0x1c0)
    float zmm0[0x4] = *(arg2 + 8)
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), temp0_1[0].q)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_2)
    float temp0_11[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_3), temp0_8)
    float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
    float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_12)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_2)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
    float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_5)
    float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_16, temp0_3), temp0_15), temp0_17)
    result = zx.q(_mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0])
    *(arg1 + 0xc4) = (_mm_unpacklo_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x55)[0].q)).q
    *(arg1 + 0xcc) = result.d

return result

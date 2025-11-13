// 函数: sub_141f61450
// 地址: 0x141f61450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 1)
    *arg2 = *(arg1 + 0x4e8)
    arg2[2] = *(arg1 + 0x4f0)
    return arg2

float zmm5[0x4] = *(arg1 + 0x1c0)
float zmm0[0x4] = *(arg1 + 0x4f0)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0x4ec), 0)
float temp0_3[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x4e8), zmm0[0].q), temp0[0].q), *(arg1 + 0x1e0))
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_5)
float temp0_11[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4), temp0_8)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_5)
float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_4)
float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_3)
float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(temp0_17, temp0_16), temp0_18)
*arg2 = temp0_20[0]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
arg2[1] = temp0_21[0]
return arg2

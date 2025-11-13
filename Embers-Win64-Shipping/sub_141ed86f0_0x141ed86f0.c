// 函数: sub_141ed86f0
// 地址: 0x141ed86f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg1 + 0x1c0)
float zmm2[0x4] = *(arg1 + 0x420)
zmm2[0] = zmm2[0] f- *(arg1 + 0x424)
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float zmm7[0x4] = *(arg1 + 0x1e0)
float temp0_1[0x4] = _mm_max_ss(zmm2[0], 0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
temp0_1[0] = temp0_1[0] * temp0_2[0]
float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zx.o(0), temp0_1[0].q), 0)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0)
float temp0_10[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_7)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_12)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_5)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_4)
float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0)
float temp0_20[0x4] = _mm_max_ss(_mm_shuffle_ps(zmm7, zmm7, 0x55)[0], zmm7[0])
float temp0_21[0x4] = _mm_sub_ps(temp0_18, temp0_15)
temp0_20[0] = temp0_20[0] f* *(arg1 + 0x424)
float temp0_22[0x4] = _mm_add_ps(temp0_21, temp0_17)
temp0_22[0] = temp0_22[0] * temp0_22[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
temp0_23[0] = temp0_23[0] * temp0_23[0]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
temp0_24[0] = temp0_24[0] + temp0_20[0]
temp0_23[0] = temp0_23[0] + temp0_22[0]
float result[0x4] = _mm_sqrt_ss(0, temp0_23[0])
result[0] = result[0] + temp0_20[0]
*arg2 = result[0]
*arg3 = temp0_24[0]
return result

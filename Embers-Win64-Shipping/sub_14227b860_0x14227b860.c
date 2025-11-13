// 函数: sub_14227b860
// 地址: 0x14227b860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = data_142d4cc00
float zmm5[0x4] = *(arg1 + 0x1c0)
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_1)
float zmm7[0x4] = arg3
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_7[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0), temp0_3)
float temp0_8[0x4] = _mm_add_ps(temp0_7, temp0_7)
float temp0_9[0x4] = _mm_mul_ps(temp0_4, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xd2)
arg3 = *(arg1 + 0x1d0)
float temp0_12[0x4] = _mm_mul_ps(temp0_10, temp0_1)
float temp0_13[0x4] = _mm_add_ps(temp0_9, zmm4)
float temp0_16[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_11, temp0), temp0_12), temp0_13)
temp0_16[0] = temp0_16[0] * zmm7[0]
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
arg3[0] = arg3[0] + temp0_16[0]
temp0_18[0] = temp0_18[0] * zmm7[0]
temp0_17[0] = temp0_17[0] * zmm7[0]
float temp0_19[0x4] = _mm_shuffle_ps(arg3, arg3, 0x55)
float temp0_20[0x4] = _mm_shuffle_ps(arg3, arg3, 0xaa)
temp0_19[0] = temp0_19[0] + temp0_17[0]
temp0_20[0] = temp0_20[0] + temp0_18[0]
*arg2 = arg3[0]
arg2[1] = temp0_19[0]
arg2[2] = temp0_20[0]
return arg2

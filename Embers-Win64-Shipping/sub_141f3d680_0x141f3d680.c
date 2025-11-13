// 函数: sub_141f3d680
// 地址: 0x141f3d680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = data_142d4cc30
float zmm6[0x4] = *(arg1 + 0x1c0)
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_3[0x4] = _mm_mul_ps(temp0, temp0_2)
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_7[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_4, temp0_1), temp0_3)
float temp0_8[0x4] = _mm_add_ps(temp0_7, temp0_7)
float temp0_9[0x4] = _mm_mul_ps(temp0_5, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xd2)
float temp0_12[0x4] = _mm_mul_ps(temp0_10, temp0_2)
float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_1)
float temp0_14[0x4] = _mm_add_ps(temp0_9, zmm5)
float temp0_16[0x4] = _mm_add_ps(_mm_sub_ps(temp0_13, temp0_12), temp0_14)
*arg2 = temp0_16[0]
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)[0]
arg2[1] = temp0_17[0]
return arg2

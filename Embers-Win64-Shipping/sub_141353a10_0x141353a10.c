// 函数: sub_141353a10
// 地址: 0x141353a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg1[0xc]
float zmm4[0x4] = arg1[0xd]
float zmm5[0x4] = *arg1
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_4[0x4] = _mm_mul_ps(temp0, zmm5)
float zmm6[0x4] = arg1[0xe]
float zmm7[0x4] = arg1[1]
float temp0_5[0x4] = _mm_mul_ps(temp0_2, zmm7)
float zmm8[0x4] = arg1[2]
float temp0_6[0x4] = _mm_mul_ps(temp0_1, zmm8)
float temp0_7[0x4] = _mm_add_ps(temp0_4, temp0_5)
float zmm9[0x4] = arg1[3]
float temp0_8[0x4] = _mm_mul_ps(temp0_3, zmm9)
float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_10[0x4] = _mm_add_ps(temp0_7, temp0_6)
float temp0_11[0x4] = _mm_mul_ps(temp0_9, zmm5)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm8)
float temp0_14[0x4] = _mm_add_ps(temp0_10, temp0_8)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm7)
float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
*arg2 = temp0_14
float temp0_18[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_11)
float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm7)
float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm9)
float temp0_22[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_23[0x4] = _mm_add_ps(temp0_19, temp0_13)
float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm5)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm8)
float temp0_27[0x4] = _mm_add_ps(temp0_20, temp0_24)
float temp0_28[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_29[0x4] = _mm_add_ps(temp0_23, temp0_21)
float temp0_30[0x4] = _mm_mul_ps(temp0_28, zmm9)
float temp0_31[0x4] = _mm_add_ps(temp0_27, temp0_26)
arg2[1] = temp0_29
arg2[2] = _mm_add_ps(temp0_31, temp0_30)
float temp0_33[0x4] = _mm_shuffle_ps(0, 0, 0)
float temp0_34[0x4] = _mm_shuffle_ps(0, 0, 0x55)
float temp0_35[0x4] = _mm_mul_ps(temp0_33, zmm5)
float temp0_36[0x4] = _mm_shuffle_ps(0, 0, 0xaa)
float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm7)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm8)
float temp0_39[0x4] = _mm_add_ps(temp0_35, temp0_37)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(0, 0, 0xff), zmm9)
arg2[3] = _mm_add_ps(_mm_add_ps(temp0_39, temp0_38), temp0_41)
return arg2

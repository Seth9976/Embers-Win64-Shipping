// 函数: sub_1417629b0
// 地址: 0x1417629b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg1
float zmm6[0x4] = *arg3
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float zmm7[0x4] = arg3[1]
float temp0_2[0x4] = _mm_mul_ps(temp0, zmm7)
float zmm8[0x4] = arg3[2]
float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm8)
float zmm9[0x4] = arg3[3]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_10[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_4, zmm6), temp0_2), temp0_3), temp0_6)
zmm2 = arg1[1]
float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, zmm7)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm8)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_18[0x4] = _mm_mul_ps(temp0_13, zmm6)
*arg2 = temp0_10
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_18, temp0_14), temp0_15), temp0_17)
zmm2 = arg1[2]
float temp0_22[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm7)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm8)
float temp0_27[0x4] = _mm_mul_ps(temp0_22, zmm6)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_30[0x4] = _mm_add_ps(temp0_27, temp0_25)
arg2[1] = temp0_21
float temp0_32[0x4] = _mm_add_ps(_mm_add_ps(temp0_30, temp0_26), temp0_29)
zmm2 = arg1[3]
float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_36[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_37[0x4] = _mm_mul_ps(temp0_35, zmm7)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm8)
float temp0_39[0x4] = _mm_add_ps(temp0_34, temp0_37)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_42[0x4] = _mm_add_ps(temp0_39, temp0_38)
arg2[2] = temp0_32
arg2[3] = _mm_add_ps(temp0_42, temp0_41)
return arg2

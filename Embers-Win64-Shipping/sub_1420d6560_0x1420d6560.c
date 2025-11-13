// 函数: sub_1420d6560
// 地址: 0x1420d6560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg1
float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm3, temp0)
float temp0_5[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float temp0_7[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0, temp0, 0x12))
float zmm1[0x4] = arg1[2]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
float temp0_9[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_3, temp0_3, 1))
float zmm4[0x4] = data_143f47eb0
float temp0_12[0x4] = _mm_add_ps(temp0_7, temp0_5)
float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_7)
float temp0_14[0x4] = _mm_sub_ps(zmm4, temp0_11)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm1)
float temp0_16[0x4] = _mm_mul_ps(temp0_9, temp0_13)
zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_14, zmm1), data_143f47e70)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0), temp0_19, 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x31)
float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0x10), temp0_22, 0x88)
float zmm0[0x4] = arg1[1]
zmm4[0].q = zmm0 u>> 0x40
float temp0_25[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
float temp0_26[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, zmm3, 0xe8)
float var_28[0x4] = temp0_26
float var_58[0x4] = temp0_21
float var_48[0x4] = temp0_24
float var_38[0x4] = temp0_27
return sub_14062b8d0(&var_58)

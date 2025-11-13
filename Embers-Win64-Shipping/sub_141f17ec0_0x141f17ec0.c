// 函数: sub_141f17ec0
// 地址: 0x141f17ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1c0)
float temp0[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm1, temp0)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0x29), temp0_1)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0x12), temp0_2)
zmm1 = *(arg1 + 0x1e0)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
float temp0_9[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 1)
float temp0_11[0x4] = _mm_add_ps(temp0_7, temp0_5)
float temp0_12[0x4] = _mm_add_ps(temp0_8, temp0_10)
float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_7)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, zmm1)
float temp0_15[0x4] = _mm_mul_ps(temp0_9, temp0_13)
float zmm2[0x4] =
    __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(data_143f3ada0, temp0_12), zmm1), data_143f3adb0)
*arg2 =
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm2, 0), _mm_shuffle_ps(temp0_15, zmm2, 0x32), 0x82)
arg2[1] =
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0x10), _mm_shuffle_ps(temp0_14, zmm2, 0x31), 0x88)
arg2[2] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, temp0_15, 0x12), zmm2, 0xe8)
zmm1 = *(arg1 + 0x1d0)
float zmm0[0x4] = data_143f3ada0
zmm0[0].q = zmm1 u>> 0x40
arg2[3] = _mm_shuffle_ps(zmm1, zmm0, 0xc4)
return arg2

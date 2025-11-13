// 函数: sub_140ae2f70
// 地址: 0x140ae2f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg3
float zmm0[0x4] = *(arg1 + 8)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 4), 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg1, zmm0[0].q), temp0[0].q)
float zmm7[0x4] = arg3[2]
float temp0_4[0x4] = _mm_mul_ps(temp0_3, zmm7)
zmm7 = __andps_xmmxud_memxud(zmm7, data_143dbb000)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_1)
float temp0_12[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_6), temp0_9)
float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_1)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_4)
float temp0_22[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18), arg3[1])
float var_30 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
*arg2 = (_mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)).q
float temp0_27[0x4] = _mm_max_ps(zmm7, _mm_shuffle_ps(zmm7, zmm7, 0xc9))
arg2[1].d = var_30
float temp0_29[0x4] = _mm_max_ps(temp0_27, _mm_shuffle_ps(zmm7, zmm7, 0xd2))
temp0_29[0] = temp0_29[0] f* *(arg1 + 0xc)
*(arg2 + 0xc) = temp0_29[0]
return arg2

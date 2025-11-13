// 函数: sub_141f092c0
// 地址: 0x141f092c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg3
float zmm2[0x4] = data_143dbb1fc
float temp0[0x4] = _mm_unpacklo_ps(data_143dbb1f8, data_143dbb200[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0, temp0_1[0].q), arg3[2])
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float zmm7[0x4] = *(arg1 + 0x418)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
float temp0_10[0x4] = _mm_mul_ps(temp0_7, temp0_2)
float var_34 = zmm7[0]
arg2[3].d = zmm7[0]
float temp0_11[0x4] = _mm_sub_ps(temp0_10, temp0_9)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_5)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_2)
float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_4)
float temp0_21[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_17, temp0_16), temp0_18), arg3[1])
float var_40 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
*arg2 = (_mm_unpacklo_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x55)[0].q)).q
float temp0_25[0x4] = _mm_unpacklo_ps(zmm7, zmm7[0].q)
arg2[1].d = var_40
*(arg2 + 0xc) = temp0_25.q
*(arg2 + 0x14) = var_34
return arg2

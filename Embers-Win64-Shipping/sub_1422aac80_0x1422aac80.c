// 函数: sub_1422aac80
// 地址: 0x1422aac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
(*(*arg1 + 0x7c8))(arg1, &var_38, arg4)
float zmm7[0x4] = *(arg1 + 0x1c0)
float zmm0[0x4] = *(arg3 + 8)
float temp0[0x4] = __mulps_xmmps_memps(zmm7, data_143f52ec0)
float zmm6[0x4] = *arg3
float temp0_1[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), temp0_1[0].q)
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4)
float temp0_8[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
float temp0_9[0x4] = _mm_mul_ps(temp0_5, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(temp0, temp0, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_7, temp0_9)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_4)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_8)
float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_3)
float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(temp0_16, temp0_17), temp0_18)
temp0_20[0] = temp0_20[0] f* var_38
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
int32_t var_34
temp0_21[0] = temp0_21[0] f* var_34
float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
int32_t var_30
temp0_22[0] = temp0_22[0] f* var_30
float temp0_23[0x4] = _mm_unpacklo_ps(temp0_21, 0)
float temp0_24[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
float temp0_26[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_20, temp0_22[0].q), temp0_23[0].q)
float temp0_27[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xc9), temp0_24)
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xd2), temp0_27)
float temp0_32[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
float temp0_33[0x4] = _mm_sub_ps(temp0_31, temp0_29)
float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
float temp0_35[0x4] = _mm_mul_ps(temp0_32, temp0_34)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xd2)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, temp0_24)
float temp0_39[0x4] = _mm_mul_ps(temp0_37, temp0_27)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_26)
float temp0_42[0x4] = _mm_add_ps(_mm_sub_ps(temp0_39, temp0_38), temp0_40)
*arg2 = temp0_42[0]
arg2[1] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)[0]
arg2[2] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)[0]
return arg2

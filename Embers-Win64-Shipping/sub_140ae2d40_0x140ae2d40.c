// 函数: sub_140ae2d40
// 地址: 0x140ae2d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg3
float zmm2[0x4] = *(arg1 + 4)
float zmm4[0x4] = *(arg1 + 0xc)
float temp0[0x4] = _mm_unpacklo_ps(*arg1, (*(arg1 + 8))[0].q)
float zmm0[0x4] = *(arg1 + 0x14)
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(arg1[1].d, 0)
float zmm1[0x4] = data_143dbb000
float temp0_4[0x4] = _mm_unpacklo_ps(zmm4, zmm0[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0)
float temp0_6[0x4] = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x55)
float temp0_8[0x4] = _mm_mul_ps(temp0_5, zmm5)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xaa)
float zmm6[0x4] = arg3[2]
float temp0_10[0x4] = _mm_mul_ps(temp0_9, zmm6)
float zmm7[0x4] = arg3[1]
float temp0_12[0x4] = _mm_add_ps(_mm_mul_ps(temp0_7, zmm7), temp0_8)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0), zmm5)
float temp0_15[0x4] = _mm_mul_ps(zmm5, zmm5)
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_10)
zmm0 = _mm_and_ps(temp0_14, zmm1)
float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x55), zmm7)
float temp0_20[0x4] = _mm_mul_ps(zmm7, zmm7)
float temp0_21[0x4] = __addps_xmmps_memps(temp0_16, arg3[3])
float zmm3[0x4] = _mm_and_ps(temp0_19, zmm1)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
float temp0_24[0x4] = _mm_add_ps(zmm3, zmm0)
float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm6)
float temp0_26[0x4] = _mm_add_ps(temp0_20, temp0_15)
float temp0_27[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_29[0x4] = _mm_add_ps(temp0_24, _mm_and_ps(temp0_25, zmm1))
float temp0_30[0x4] = _mm_add_ps(temp0_26, temp0_27)
arg2[3] = temp0_29[0]
arg2[4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)[0]
float temp0_32[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
arg2[5] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)[0]
arg2[1] = temp0_32[0]
float temp0_35[0x4] = _mm_max_ps(temp0_30, _mm_shuffle_ps(temp0_30, temp0_30, 0x55))
*arg2 = temp0_21[0]
float temp0_36[0x4] = _mm_mul_ps(temp0_29, temp0_29)
arg2[2] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
float temp0_39[0x4] = _mm_max_ps(temp0_35, _mm_shuffle_ps(temp0_30, temp0_30, 0xaa))
float temp0_40[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
float temp0_42[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xaa), temp0_40)
float temp0_43[0x4] = _mm_sqrt_ss(temp0_39[0], temp0_39[0])
float temp0_44[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0)
temp0_43[0] = temp0_43[0] f* *(arg1 + 0x18)
float temp0_46[0x4] = _mm_sqrt_ss(0, _mm_add_ps(temp0_42, temp0_44)[0])
arg2[6] = _mm_min_ss(temp0_43[0], temp0_46[0])[0]
return arg2

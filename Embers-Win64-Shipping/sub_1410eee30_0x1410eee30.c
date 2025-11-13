// 函数: sub_1410eee30
// 地址: 0x1410eee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *(arg2 + 0x604) f+ *(arg3 + 0x34)
float zmm2[0x4] = *arg3
float zmm0[0x4] = arg3[1]
int128_t zmm6
zmm6.d = (*(arg2 + 0x608)).d f+ *(arg3 + 0x38)
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
int128_t zmm7 = *(arg3 + 0x3c)
float var_98[0x4] = arg3[2]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float zmm8[0x4] = *(arg2 + 0x590)
float zmm9[0x4] = *(arg2 + 0x580)
float zmm10[0x4] = *(arg2 + 0x5a0)
float zmm11[0x4] = *(arg2 + 0x5b0)
float zmm12[0x4] = arg3[3].d
zmm12[0] = zmm12[0] f+ *(arg2 + 0x600)
float temp0_3[0x4] = _mm_mul_ps(temp0, zmm8)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
float temp0_6[0x4] = _mm_mul_ps(temp0_2, zmm9)
float temp0_7[0x4] = _mm_mul_ps(temp0_1, zmm10)
float temp0_8[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xe1)
float temp0_9[0x4] = _mm_add_ps(temp0_3, temp0_6)
temp0_8[0] = zmm5
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
temp0_10[0] = zmm6.d
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
temp0_11[0] = zmm7.d
float temp0_12[0x4] = _mm_add_ps(temp0_9, temp0_7)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_5)
float temp0_15[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_16[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float temp0_17[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xff), zmm11)
*arg1 = temp0_14
float temp0_20[0x4] = _mm_mul_ps(temp0_16, zmm8)
float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm10)
float temp0_25[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_15, zmm9), temp0_20), temp0_21), temp0_19)
float temp0_26[0x4] = _mm_shuffle_ps(var_98, var_98, 0)
float temp0_27[0x4] = _mm_shuffle_ps(var_98, var_98, 0x55)
float temp0_28[0x4] = _mm_shuffle_ps(var_98, var_98, 0xaa)
float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm9)
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_98, var_98, 0xff), zmm11)
float temp0_32[0x4] = _mm_mul_ps(temp0_27, zmm8)
float temp0_33[0x4] = _mm_mul_ps(temp0_28, zmm10)
arg1[1] = temp0_25
float temp0_36[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_29, temp0_32), temp0_33), temp0_31)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)
arg1[2] = temp0_36
float temp0_38[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0)
float temp0_39[0x4] = _mm_mul_ps(temp0_37, zmm8)
float temp0_40[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)
float temp0_41[0x4] = _mm_mul_ps(temp0_38, zmm9)
float temp0_42[0x4] = _mm_mul_ps(temp0_40, zmm10)
float temp0_43[0x4] = _mm_add_ps(temp0_39, temp0_41)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xff), zmm11)
arg1[3] = _mm_add_ps(_mm_add_ps(temp0_43, temp0_42), temp0_45)
return arg1

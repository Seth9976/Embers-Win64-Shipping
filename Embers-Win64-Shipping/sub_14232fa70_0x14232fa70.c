// 函数: sub_14232fa70
// 地址: 0x14232fa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg1
float zmm4 = arg3[0]
int64_t var_84 = 0
float zmm6[0x4] = arg1[1]
float zmm7[0x4] = arg1[2]
int64_t var_70 = 0
int32_t var_5c = 0
float var_88[0x4]
var_88[0] = zmm4
float zmm8[0x4] = arg1[3]
float temp0[0x4] = _mm_shuffle_ps(var_88, var_88, 0)
float temp0_1[0x4] = _mm_shuffle_ps(var_88, var_88, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(var_88, var_88, 0xaa)
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_88, var_88, 0xff), zmm8)
float temp0_5[0x4] = _mm_mul_ps(temp0, zmm5)
float zmm9[0x4] = data_142d3f660
float temp0_6[0x4] = _mm_mul_ps(temp0_1, zmm6)
float temp0_7[0x4] = _mm_mul_ps(temp0_2, zmm7)
float temp0_10[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_5, temp0_6), temp0_7), temp0_4)
float zmm3[0x4] = 0:4.o
float temp0_11[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_11[0] = zmm4
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xe1)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xaa)
*arg2 = temp0_10
float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x55)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xff), zmm8)
float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm6)
float temp0_19[0x4] = _mm_mul_ps(temp0_13, zmm5)
float temp0_20[0x4] = _mm_mul_ps(temp0_14, zmm7)
float temp0_23[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_18, temp0_19), temp0_20), temp0_17)
zmm3 = 0.o
float temp0_24[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
temp0_24[0] = zmm4
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc9)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
arg2[1] = temp0_23
float temp0_28[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xff), zmm8)
float temp0_31[0x4] = _mm_mul_ps(temp0_26, zmm5)
float temp0_32[0x4] = _mm_mul_ps(temp0_27, zmm7)
float temp0_34[0x4] = _mm_add_ps(_mm_mul_ps(temp0_28, zmm6), temp0_31)
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x55), zmm6)
float temp0_37[0x4] = _mm_add_ps(temp0_34, temp0_32)
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xaa), zmm7)
float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_30)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm5)
arg2[2] = temp0_40
arg2[3] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_42, temp0_36), temp0_39), 
    _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xff), zmm8))
return arg2

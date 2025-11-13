// 函数: sub_141357c90
// 地址: 0x141357c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg2 + 0x28) & 0x10000) == 0)
    sub_141353a10(&arg2[0x50], arg1)
    return arg1

data_142d4cc00
data_142d4cc20
data_142d4cc30
int128_t zmm9
zmm9.d = arg2[0xc2].d.d f- arg2[0x9a4].d
int128_t zmm11
zmm11.d = (*(arg2 + 0x614)).d f- *(arg2 + 0x4d24)
float zmm14[0x4] = *(arg2 + 0x60c)
zmm14[0] = zmm14[0] f- *(arg2 + 0x4d1c)
float var_d8[0x4][0x4]
float (* rax_1)[0x4]
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
int32_t zmm9_1
rax_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_141353a10(&arg2[0x932], &var_d8)
float temp0[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xe1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
temp0[0] = zmm9_1
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float zmm4[0x4] = *rax_1
float zmm5[0x4] = rax_1[1]
float zmm12[0x4] = rax_1[2]
temp0_2[0] = zmm11.d
float zmm13[0x4] = rax_1[3]
float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm5)
float temp0_4[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
float temp0_5[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
float temp0_6[0x4] = _mm_mul_ps(temp0_4, zmm4)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm12)
float temp0_8[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
float temp0_9[0x4] = _mm_add_ps(temp0_3, temp0_6)
float temp0_10[0x4] = _mm_mul_ps(temp0_8, zmm5)
float temp0_11[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0), zmm4)
float temp0_14[0x4] = _mm_add_ps(temp0_9, temp0_7)
float temp0_15[0x4] = _mm_mul_ps(temp0_11, zmm13)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
float temp0_17[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
float temp0_18[0x4] = _mm_add_ps(temp0_10, temp0_13)
float temp0_19[0x4] = _mm_mul_ps(temp0_17, zmm12)
float temp0_20[0x4] = _mm_add_ps(temp0_14, temp0_15)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0), zmm4)
temp0_16[0] = 0x3f800000
float temp0_23[0x4] = _mm_add_ps(temp0_18, temp0_19)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
float temp0_25[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
*arg1 = temp0_20
float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0x55), zmm5)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0xaa), zmm12)
float temp0_30[0x4] = _mm_add_ps(temp0_27, temp0_22)
float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0xff), zmm13)
float temp0_33[0x4] = _mm_mul_ps(temp0_25, zmm13)
float temp0_34[0x4] = _mm_add_ps(temp0_30, temp0_29)
float temp0_35[0x4] = _mm_add_ps(temp0_23, temp0_33)
float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_32)
arg1[1] = temp0_35
arg1[2] = temp0_36
float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0), zmm4)
float temp0_39[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xaa), zmm12)
float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xff), zmm13)
arg1[3] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_38, _mm_mul_ps(temp0_39, zmm5)), temp0_41), temp0_43)
return arg1

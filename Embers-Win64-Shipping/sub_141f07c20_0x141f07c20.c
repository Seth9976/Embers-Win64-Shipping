// 函数: sub_141f07c20
// 地址: 0x141f07c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4 = *(arg1 + 0xbc)
int128_t zmm6
zmm6.d = (*(arg1 + 0x2c)).d f+ 1f
int128_t zmm7 = *(arg2 + 4)
int128_t var_d8 = *(arg1 + 0x80)
float zmm2 = zmm7.d f+ *(arg1 + 0xb4)
zmm7.d = zmm7.d f+ *(arg1 + 0x24)
int128_t var_c8 = *(arg1 + 0x90)
int128_t zmm8 = *(arg2 + 8)
float zmm3 = zmm8.d f+ *(arg1 + 0xb8)
zmm8.d = zmm8.d f+ *(arg1 + 0x28)
float zmm9[0x4] = *arg2
int128_t var_b8 = *(arg1 + 0xa0)
zmm9[0] = zmm9[0] f+ *(arg1 + 0xb0)
zmm9[0] = zmm9[0] f+ *(arg1 + 0x20)
*(arg1 + 0x80) = var_d8
float temp0[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
temp0[0] = zmm2
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm3
*(arg1 + 0x90) = var_c8
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
*(arg1 + 0xa0) = var_b8
temp0_2[0] = zmm4
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*(arg1 + 0xb0) = temp0_3
float var_a8[0x4] = temp0_3
float var_88[0x2][0x4]
float (* result)[0x4]
int32_t zmm6_1
int32_t zmm7_1
int32_t zmm8_1
float zmm9_1[0x4]
result, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_1408041d0(&var_d8, &var_88)
float temp0_4[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xe1)
temp0_4[0] = zmm7_1
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
float zmm0_1[0x4] = *result
temp0_5[0] = zmm8_1
*(arg1 + 0x40) = zmm0_1
*(arg1 + 0x50) = result[1]
zmm0_1 = result[2]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_6[0] = zmm6_1
*(arg1 + 0x60) = zmm0_1
int128_t zmm1_1 = result[3]
*(arg1 + 0x20) = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
*(arg1 + 0x70) = zmm1_1
return result

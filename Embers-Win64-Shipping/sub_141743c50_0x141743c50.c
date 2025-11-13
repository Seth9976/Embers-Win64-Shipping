// 函数: sub_141743c50
// 地址: 0x141743c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg1
float zmm4[0x4] = data_143ef72f0
float temp0[0x4] = _mm_add_ps(zmm2, zmm2)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm2, temp0)
float temp0_5[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
float temp0_8[0x4] = _mm_mul_ps(temp0_2, temp0_6)
float temp0_10[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_3, temp0_3, 1))
float temp0_11[0x4] = _mm_add_ps(temp0_8, temp0_5)
float temp0_12[0x4] = _mm_sub_ps(temp0_5, temp0_8)
float zmm3[0x4] = __andps_xmmxud_memxud(_mm_sub_ps(zmm4, temp0_10), data_143ef7300)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, zmm3, 0x32)
float temp0_17[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_11, zmm3, 0), temp0_15, 0x82)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_11, zmm3, 0x31)
float var_98[0x4] = temp0_17
float temp0_20[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_12, zmm3, 0x10), temp0_18, 0x88)
float zmm0[0x4] = arg1[1]
float var_88[0x4] = temp0_20
zmm4[0].q = zmm0 u>> 0x40
float temp0_21[0x4] = _mm_shuffle_ps(temp0_11, temp0_12, 0x12)
float var_68[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
float var_78[0x4] = _mm_shuffle_ps(temp0_21, zmm3, 0xe8)
uint32_t var_58[0x4][0x4]
uint32_t (* rax)[0x4] = sub_140631b10(&var_98, &var_58)
int128_t zmm1_1 = rax[1]
*arg2 = *rax
uint32_t zmm0_1[0x4] = rax[2]
arg2[1] = zmm1_1
zmm1_1 = rax[3]
arg2[2] = zmm0_1
arg2[3] = zmm1_1
return arg2

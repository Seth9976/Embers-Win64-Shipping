// 函数: sub_142314fa0
// 地址: 0x142314fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = data_143f57790
int64_t rax_1 = *(arg1 + 0x198)
int64_t r8_1 = sx.q(arg3) * 6
float zmm5[0x4] = *(rax_1 + (r8_1 << 3))
float zmm7[0x4] = *(rax_1 + (r8_1 << 3) + 0x20)
float zmm8[0x4] = *(rax_1 + (r8_1 << 3) + 0x10)
float temp0[0x4] = _mm_mul_ps(zmm5, zmm5)
float temp0_2[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float temp0_4[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x39), temp0_2)
float temp0_5[0x4] = _mm_rsqrt_ps(temp0_4)
float temp0_6[0x4] = _mm_mul_ps(zmm6, temp0_4)
float temp0_11[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_5, temp0_5), temp0_6)), temp0_5), 
    temp0_5)
float temp0_14[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_6))
float temp0_15[0x4] = _mm_cmpeq_ps(data_143f577a0, temp0_4, 2)
float temp0_16[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
zmm6 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_14, temp0_11), temp0_11), zmm5) ^ data_143f57780, 
    temp0_15) ^ data_143f57780
float temp0_21[0x4] = _mm_add_ps(zmm6, zmm6)
float temp0_22[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0x29), temp0_22)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x12)
float temp0_26[0x4] = _mm_mul_ps(temp0_21, zmm6)
float temp0_28[0x4] = _mm_mul_ps(temp0_25, _mm_shuffle_ps(zmm6, zmm6, 0xff))
float temp0_31[0x4] =
    _mm_add_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0x1a), _mm_shuffle_ps(temp0_26, temp0_26, 1))
float temp0_32[0x4] = _mm_add_ps(temp0_28, temp0_24)
float temp0_33[0x4] = _mm_sub_ps(temp0_24, temp0_28)
float temp0_34[0x4] = _mm_sub_ps(data_143f57810, temp0_31)
float temp0_35[0x4] = _mm_mul_ps(temp0_32, zmm7)
float temp0_36[0x4] = _mm_mul_ps(temp0_16, temp0_33)
float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_34, zmm7), data_143f57820)
*arg2 =
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_35, zmm2, 0), _mm_shuffle_ps(temp0_36, zmm2, 0x32), 0x82)
arg2[1] =
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_36, zmm2, 0x10), _mm_shuffle_ps(temp0_35, zmm2, 0x31), 0x88)
arg2[2] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_35, temp0_36, 0x12), zmm2, 0xe8)
float zmm0[0x4] = data_143f57810
zmm0[0].q = zmm8 u>> 0x40
arg2[3] = _mm_shuffle_ps(zmm8, zmm0, 0xc4)
return arg2

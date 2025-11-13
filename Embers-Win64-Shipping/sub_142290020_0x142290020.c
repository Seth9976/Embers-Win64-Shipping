// 函数: sub_142290020
// 地址: 0x142290020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *arg2
float zmm7[0x4] = arg2[1]
float zmm2[0x4] = *(arg1 + 0x80)
float zmm8[0x4] = arg2[2]
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_mul_ps(temp0, zmm7)
float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm8)
float zmm9[0x4] = arg2[3]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_10[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_4, zmm6), temp0_2), temp0_3), temp0_6)
zmm2 = *(arg1 + 0x90)
float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, zmm7)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm8)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_21[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_13, zmm6), temp0_14), temp0_15), temp0_17)
zmm2 = *(arg1 + 0xa0)
float temp0_22[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm7)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm8)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_32[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_22, zmm6), temp0_25), temp0_26), temp0_28)
zmm2 = *(arg1 + 0xb0)
float temp0_33[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_35[0x4] = _mm_mul_ps(temp0_33, zmm6)
float temp0_36[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
*(arg1 + 0x80) = temp0_10
*(arg1 + 0x90) = temp0_21
float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm7)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm8)
float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_37)
float temp0_41[0x4] = _mm_mul_ps(temp0_39, zmm9)
*(arg1 + 0xa0) = temp0_32
*(arg1 + 0xb0) = _mm_add_ps(_mm_add_ps(temp0_40, temp0_38), temp0_41)
float zmm0_1 = sub_14062b8d0(arg1 + 0x80)
zmm0_1 - 0f
int128_t* rcx
rcx.b = zmm0_1 < 0f
rcx.b |= *(arg1 + 0x35) & 0xfe
void* rax_1 = arg1[0x22]
*(arg1 + 0x35) = rcx.b

if (rax_1 != 0)
    *(rax_1 + 0xa0) |= 1

sub_1422af6f0(arg1)
jump(*(*arg1 + 0xc0))

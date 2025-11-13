// 函数: sub_14241d720
// 地址: 0x14241d720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg2
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
int64_t rax = sx.q(*(arg1 + 0x30))
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
int64_t rax_1 = *(arg1 + 0x28)
int64_t rcx_1 = rax * 0xa
float zmm7[0x4] = *(rax_1 + (rcx_1 << 3) - 0x40)
float zmm6[0x4] = *(rax_1 + (rcx_1 << 3) - 0x50)
float zmm8[0x4] = *(rax_1 + (rcx_1 << 3) - 0x30)
float zmm9[0x4] = *(rax_1 + (rcx_1 << 3) - 0x20)
float temp0_4[0x4] = _mm_mul_ps(temp0, zmm7)
float temp0_5[0x4] = _mm_mul_ps(temp0_1, zmm8)
float temp0_6[0x4] = _mm_mul_ps(temp0_3, zmm9)
float temp0_10[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_2, zmm6), temp0_4), temp0_5), temp0_6)
zmm2 = arg2[1]
float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, zmm7)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm8)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_18[0x4] = _mm_mul_ps(temp0_13, zmm6)
float var_a8[0x4] = temp0_10
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_18, temp0_14), temp0_15), temp0_17)
zmm2 = arg2[2]
float temp0_22[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm7)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm8)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_32[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_22, zmm6), temp0_25), temp0_26), temp0_28)
zmm2 = arg2[3]
float temp0_33[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_35[0x4] = _mm_mul_ps(temp0_33, zmm6)
float temp0_36[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm7)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm8)
float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_37)
float temp0_41[0x4] = _mm_mul_ps(temp0_39, zmm9)
float temp0_43[0x4] = _mm_add_ps(_mm_add_ps(temp0_40, temp0_38), temp0_41)
int32_t rax_2 = sub_140b212b0(&var_a8, 0x40, 0)
int64_t rdi = sx.q(*(arg1 + 0x30))
int32_t rax_3 = (rdi + 1).d
*(arg1 + 0x30) = rax_3

if (rax_3 s> *(arg1 + 0x34))
    sub_1405c5060(arg1 + 0x28)

int64_t result = *(arg1 + 0x28)
int64_t rcx_5 = rdi * 0xa
*(result + (rcx_5 << 3)) = var_a8
*(result + (rcx_5 << 3) + 0x10) = temp0_21
*(result + (rcx_5 << 3) + 0x20) = temp0_32
*(result + (rcx_5 << 3) + 0x30) = temp0_43
*(result + (rcx_5 << 3) + 0x40) = rax_2.o
return result

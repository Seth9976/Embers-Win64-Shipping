// 函数: sub_1424f9c30
// 地址: 0x1424f9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_d8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_d8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_d8
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rdi = rax_2

void var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* rax_4 = *(arg2 + 0x38)
void* rcx_2 = &var_98

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
float zmm2[0x4] = *rdi
float zmm7[0x4] = *(rcx_2 + 0x10)
float zmm6[0x4] = *rcx_2
float zmm8[0x4] = *(rcx_2 + 0x20)
float zmm9[0x4] = *(rcx_2 + 0x30)
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_3[0x4] = _mm_mul_ps(temp0, zmm7)
float temp0_4[0x4] = _mm_mul_ps(temp0_1, zmm8)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_10[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_2, zmm6), temp0_3), temp0_4), temp0_6)
zmm2 = *(rdi + 0x10)
float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, zmm7)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm8)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_21[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_13, zmm6), temp0_14), temp0_15), temp0_17)
zmm2 = *(rdi + 0x20)
float temp0_22[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm7)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm8)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
float temp0_32[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_22, zmm6), temp0_25), temp0_26), temp0_28)
zmm2 = *(rdi + 0x30)
*arg3 = temp0_10
float temp0_33[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_35[0x4] = _mm_mul_ps(temp0_33, zmm6)
float temp0_36[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
arg3[1] = temp0_21
arg3[2] = temp0_32
float result[0x4] = _mm_mul_ps(temp0_34, zmm7)
float temp0_37[0x4] = _mm_mul_ps(temp0_36, zmm8)
float temp0_38[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_39[0x4] = _mm_add_ps(temp0_35, result)
float temp0_40[0x4] = _mm_mul_ps(temp0_38, zmm9)
arg3[3] = _mm_add_ps(_mm_add_ps(temp0_39, temp0_37), temp0_40)
return result

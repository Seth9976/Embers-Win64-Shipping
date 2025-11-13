// 函数: sub_1424f9e40
// 地址: 0x1424f9e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_28
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_4 = *(arg2 + 0x38)
void* rcx_2 = &var_18

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
float zmm2[0x4] = *rsi
float zmm3[0x4] = *rcx_2
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), _mm_shuffle_ps(zmm2, zmm2, 0))
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_2, data_143f65c10)
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
float temp0_8[0x4] = _mm_add_ps(temp0_6, temp0_5)
float result[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_9[0x4] = _mm_mul_ps(temp0_3, result)
float temp0_11[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
float temp0_12[0x4] = __mulps_xmmps_memps(temp0_9, data_143f65c00)
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_11, data_143f65bf0)
*arg3 = _mm_add_ps(_mm_add_ps(temp0_8, temp0_12), temp0_13)
return result

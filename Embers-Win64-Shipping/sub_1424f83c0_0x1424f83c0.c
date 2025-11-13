// 函数: sub_1424f83c0
// 地址: 0x1424f83c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_48

if (rax_2 != 0)
    rdi = rax_2

int32_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_4 = *(arg2 + 0x20)
float zmm4[0x4] = var_68
int64_t rsi
rsi.b = rax_4 != 0
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
int32_t var_64
temp0[0] = var_64[0]
*(arg2 + 0x20) = rsi + rax_4
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
int32_t var_60
temp0_1[0] = var_60[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = 0
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rdi + 0x30))
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rdi + 0x10))
float result[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rdi + 0x20))
float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *rdi)
*arg3 = _mm_add_ps(_mm_add_ps(temp0_5, result), _mm_add_ps(temp0_7, temp0_10))
return result

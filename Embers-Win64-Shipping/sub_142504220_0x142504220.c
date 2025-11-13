// 函数: sub_142504220
// 地址: 0x142504220
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
void* rsi = &var_48
int128_t var_68 = data_142d3f660

if (rax_2 != 0)
    rsi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int128_t* rax_4 = *(arg2 + 0x38)
int128_t* rcx_2 = &var_68

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
float zmm2[0x4] = *rcx_2
float temp0_1[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rsi + 0x30))
float temp0_3[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rsi + 0x10))
float result[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rsi + 0x20))
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *rsi)
*arg3 = _mm_add_ps(_mm_add_ps(temp0_1, result), _mm_add_ps(temp0_3, temp0_6))
return result

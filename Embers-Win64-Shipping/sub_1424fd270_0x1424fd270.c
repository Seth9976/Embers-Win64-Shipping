// 函数: sub_1424fd270
// 地址: 0x1424fd270
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
void* rdi = &var_28
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rdi = rax_2

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
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
float result[0x4] = *rcx_2
result[0] = result[0] f* *rdi
float zmm2 = *(rcx_2 + 4) f* *(rdi + 4)
float result_1[0x4] = *(rcx_2 + 8)
result_1[0] = result_1[0] f* *(rdi + 8)
zmm2 = zmm2 + result[0]
result = *(rcx_2 + 0xc)
result[0] = result[0] f* *(rdi + 0xc)

if (zmm2 + result_1[0] + result[0] < 0f)
    result = 0xbf800000
else
    result = 0x3f800000

result_1 = result
result = *rdi
*rdi = _mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0), result)
return result

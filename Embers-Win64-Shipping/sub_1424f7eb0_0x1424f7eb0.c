// 函数: sub_1424f7eb0
// 地址: 0x1424f7eb0
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
char result_1 = 0

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &result_1, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int32_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_5 = *(arg2 + 0x20)
int32_t zmm0 = var_58
int64_t rsi
rsi.b = rax_5 != 0
uint64_t result = zx.q(result_1)
*(arg2 + 0x20) = rsi + rax_5
*(rdi + (result << 2)) = zmm0
int32_t var_54
*(rdi + (result << 2) + 0x10) = var_54
int32_t var_50
*(rdi + (result << 2) + 0x20) = var_50
return result

// 函数: sub_141a69d40
// 地址: 0x141a69d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *arg1
int16_t r8 = *arg2

if (rax != r8)
    rax.b = rax u> r8
    return rax

int32_t rax_1 = *(arg1 + 4)
int32_t temp0 = *(arg2 + 4)

if (rax_1 == temp0)
    int32_t rax_2
    rax_2.b = *(arg1 + 8) s> *(arg2 + 8)
    return rax_2

rax_1.b = rax_1 s< temp0
return rax_1

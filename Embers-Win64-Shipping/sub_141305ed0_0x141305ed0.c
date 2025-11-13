// 函数: sub_141305ed0
// 地址: 0x141305ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x138))
int32_t rax = (rdi + 1).d
*(arg1 + 0x138) = rax

if (rax s> *(arg1 + 0x13c))
    sub_1405a4f90(arg1 + 0x130)

int64_t result = *(arg1 + 0x130)
*(result + rdi * 0x10) = *arg2
return result

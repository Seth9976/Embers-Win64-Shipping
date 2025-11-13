// 函数: sub_141305f30
// 地址: 0x141305f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1d0))
int32_t rax = (rdi + 1).d
*(arg1 + 0x1d0) = rax

if (rax s> *(arg1 + 0x1d4))
    sub_1405a4f90(arg1 + 0x1c8)

int64_t result = *(arg1 + 0x1c8)
*(result + rdi * 0x10) = *arg2
return result

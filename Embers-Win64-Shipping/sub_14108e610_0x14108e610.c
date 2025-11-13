// 函数: sub_14108e610
// 地址: 0x14108e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1c0))
int32_t rax = (rdi + 1).d
*(arg1 + 0x1c0) = rax

if (rax s> *(arg1 + 0x1c4))
    sub_1405a4f90(arg1 + 0x1b8)

int64_t result = *(arg1 + 0x1b8)
*(result + rdi * 0x10) = *arg2
return result

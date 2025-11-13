// 函数: sub_140de1c90
// 地址: 0x140de1c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1a8))
int32_t rax = (rdi + 1).d
*(arg1 + 0x1a8) = rax

if (rax s> *(arg1 + 0x1ac))
    sub_1405a4d70(arg1 + 0x1a0)

*(*(arg1 + 0x1a0) + (rdi << 3)) = arg2
return arg1

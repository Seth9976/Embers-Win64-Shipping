// 函数: sub_1406938c0
// 地址: 0x1406938c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1a8))
int32_t rax = (rdi + 1).d
*(arg1 + 0x1a8) = rax

if (rax s> *(arg1 + 0x1ac))
    sub_140638870(arg1 + 0x1a0)

*(*(arg1 + 0x1a0) + (rdi << 3)) = arg2
return arg1

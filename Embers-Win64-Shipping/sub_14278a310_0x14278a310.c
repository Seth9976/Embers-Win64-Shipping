// 函数: sub_14278a310
// 地址: 0x14278a310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x20))
int32_t rax = (rdi + 1).d
*(arg1 + 0x20) = rax

if (rax s> *(arg1 + 0x24))
    sub_1405a4d70(arg1 + 0x18)

*(*(arg1 + 0x18) + (rdi << 3)) = arg3
return sub_142793970(arg1 + 0xa8, arg2, *(arg1 + 0x20) - 1) __tailcall

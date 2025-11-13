// 函数: sub_1426e8150
// 地址: 0x1426e8150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg2 + 0xe0))
int32_t rax = (rdi + 1).d
*(arg2 + 0xe0) = rax

if (rax s> *(arg2 + 0xe4))
    sub_1405a4d70(arg2 + 0xd8)

*(*(arg2 + 0xd8) + (rdi << 3)) = arg1
return sub_140d3a3a0(arg1 + 0x30, arg2) __tailcall

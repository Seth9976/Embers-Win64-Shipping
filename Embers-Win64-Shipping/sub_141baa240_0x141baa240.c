// 函数: sub_141baa240
// 地址: 0x141baa240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x1d8)
void* rax = *(arg1 + 0x1e0)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

// 函数: sub_141baa270
// 地址: 0x141baa270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x290)
void* rax = *(arg1 + 0x298)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

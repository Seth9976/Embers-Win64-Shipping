// 函数: sub_141ccdd90
// 地址: 0x141ccdd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x208)
void* rax = *(arg1 + 0x210)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

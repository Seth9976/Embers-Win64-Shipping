// 函数: sub_141bb0ea0
// 地址: 0x141bb0ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa18)

if (rax != 0)
    sub_140f03fb0(*(rax + 0x4d0), arg2)
    return arg2

*arg2 = *(arg1 + 0x108)
void* rax_3 = *(arg1 + 0x110)
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = *(arg1 + 0x118)
return arg2

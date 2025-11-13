// 函数: sub_141badb20
// 地址: 0x141badb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x450)

if (rax != 0)
    sub_140f75d20(rax, arg2)
    return arg2

*arg2 = *(arg1 + 0x140)
void* rax_3 = *(arg1 + 0x148)
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = *(arg1 + 0x150)
return arg2

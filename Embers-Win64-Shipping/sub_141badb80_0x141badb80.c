// 函数: sub_141badb80
// 地址: 0x141badb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xc70)

if (rax != 0)
    sub_140f75d20(*(rax + 0x4b8), arg2)
    return arg2

*arg2 = *(arg1 + 0x140)
void* rax_3 = *(arg1 + 0x148)
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = *(arg1 + 0x150)
return arg2

// 函数: sub_140f04a60
// 地址: 0x140f04a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x400)
void* rax = *(arg1 + 0x408)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg2[2].d = *(arg1 + 0x410)
return arg2

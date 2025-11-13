// 函数: sub_140f025a0
// 地址: 0x140f025a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x430)
void* rax = *(arg1 + 0x438)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg2[2].d = *(arg1 + 0x440)
return arg2

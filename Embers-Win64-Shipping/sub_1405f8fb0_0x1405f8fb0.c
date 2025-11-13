// 函数: sub_1405f8fb0
// 地址: 0x1405f8fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x10)
void* rax = *(arg1 + 0x18)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg2[2].d = *(arg1 + 0x20)
return arg2

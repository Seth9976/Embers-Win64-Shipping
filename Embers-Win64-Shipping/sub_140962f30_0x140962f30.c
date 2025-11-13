// 函数: sub_140962f30
// 地址: 0x140962f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x110)
void* rax = *(arg1 + 0x118)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

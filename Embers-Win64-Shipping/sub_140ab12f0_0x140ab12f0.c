// 函数: sub_140ab12f0
// 地址: 0x140ab12f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 8)
void* rax = *(arg1 + 0x10)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

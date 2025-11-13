// 函数: sub_140929290
// 地址: 0x140929290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x140)
void* rax = *(arg1 + 0x148)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

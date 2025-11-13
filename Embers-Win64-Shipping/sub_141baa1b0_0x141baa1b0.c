// 函数: sub_141baa1b0
// 地址: 0x141baa1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x760)
void* rax = *(arg1 + 0x768)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

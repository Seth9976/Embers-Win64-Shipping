// 函数: sub_141c88d70
// 地址: 0x141c88d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x78)
void* rax = *(arg1 + 0x80)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

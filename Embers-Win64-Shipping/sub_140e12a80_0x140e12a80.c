// 函数: sub_140e12a80
// 地址: 0x140e12a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x28)
void* rax = *(arg1 + 0x30)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

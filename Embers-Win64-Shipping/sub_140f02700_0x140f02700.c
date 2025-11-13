// 函数: sub_140f02700
// 地址: 0x140f02700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x50)
void* rax = *(arg1 + 0x58)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

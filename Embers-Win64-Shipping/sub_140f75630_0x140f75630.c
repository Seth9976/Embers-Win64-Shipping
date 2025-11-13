// 函数: sub_140f75630
// 地址: 0x140f75630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x3e8)
void* rax = *(arg1 + 0x3f0)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

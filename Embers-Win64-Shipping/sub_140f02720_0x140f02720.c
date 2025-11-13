// 函数: sub_140f02720
// 地址: 0x140f02720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x4f8)
void* rax = *(arg1 + 0x500)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

// 函数: sub_140f01720
// 地址: 0x140f01720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x4e8)
void* rax = *(arg1 + 0x4f0)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

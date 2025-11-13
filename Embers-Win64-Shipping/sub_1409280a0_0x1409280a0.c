// 函数: sub_1409280a0
// 地址: 0x1409280a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x120)
void* rax = *(arg1 + 0x128)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

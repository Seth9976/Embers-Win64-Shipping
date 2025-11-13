// 函数: sub_1409617c0
// 地址: 0x1409617c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x6b0)
void* rax = *(arg1 + 0x6b8)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

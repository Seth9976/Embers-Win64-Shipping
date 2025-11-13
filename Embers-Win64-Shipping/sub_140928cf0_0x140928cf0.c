// 函数: sub_140928cf0
// 地址: 0x140928cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x100)
void* rax = *(arg1 + 0x108)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

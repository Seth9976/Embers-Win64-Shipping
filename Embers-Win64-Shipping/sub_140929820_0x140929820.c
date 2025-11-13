// 函数: sub_140929820
// 地址: 0x140929820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0xd8)
void* rax = *(arg1 + 0xe0)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2

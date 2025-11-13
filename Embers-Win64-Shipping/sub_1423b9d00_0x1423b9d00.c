// 函数: sub_1423b9d00
// 地址: 0x1423b9d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14333b518
arg1[1].w = 0
char rax = *(arg1 + 0xa) & 0xc8
*(arg1 + 0xb) = 1
*(arg1 + 0xa) = rax | 8
__builtin_memset(arg1 + 0xc, 0, 0x1c)
return arg1

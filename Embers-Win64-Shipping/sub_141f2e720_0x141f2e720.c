// 函数: sub_141f2e720
// 地址: 0x141f2e720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e610(arg1, arg2)
arg1[7].b = 2
*arg1 = &data_143279750
arg1[5] = &data_143279c80
char rax = *(arg1 + 0x3a) & 0xf7
arg1[0x56].d = 0x40c66666
arg1[0x52].b = 0
*(arg1 + 0x89) |= 0x88
*(arg1 + 0x3a) = rax | 2
return arg1

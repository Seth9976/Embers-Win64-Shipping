// 函数: sub_1423cfbb0
// 地址: 0x1423cfbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
*arg1 = &data_14333f930
arg1[5] = &data_14333fd18
arg1[0x16].b = 1
*(arg1 + 0xb1) &= 0xf8
*(arg1 + 0xb4) = 0x40a00000
arg1[0x17] = 0x3f800000
__builtin_memset(&arg1[0x18], 0, 0x40)
sub_140d3a3a0(&arg1[0x20], nullptr)
arg1[0x21] = 0
sub_140d3a3a0(&arg1[0x22], nullptr)
arg1[0x23] = 0
sub_140d3a3a0(&arg1[0x24], nullptr)
__builtin_memset(&arg1[0x25], 0, 0x14)
arg1[0x28] = 0
arg1[7].b = 0
*(arg1 + 0x3a) = (*(arg1 + 0x3a) & 0xfb) | 2
return arg1

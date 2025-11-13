// 函数: sub_141ed2f90
// 地址: 0x141ed2f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_14325e780
arg1[5] = &data_14325eb68
sub_1423b9d00(&arg1[6])
arg1[6] = &data_14325e760
__builtin_memset(&arg1[0xc], 0, 0x20)
*(arg1 + 0x8d) = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = sub_140d226f0(arg1, sub_142452380())
arg1[7].b = 2
*(arg1 + 0x3a) = (*(arg1 + 0x3a) & 0xfd) | 4
sub_1423c9cb0(&arg1[6], 0)
char rax_3 = *(arg1 + 0x8a)
*(arg1 + 0x89) |= 6
arg1[0x11].b &= 0xf7
*(arg1 + 0x8a) = (rax_3 & 0xf3) | 2
*arg1 = &data_14325f4a0
arg1[5] = &data_142fde398
*(arg1 + 0x8c) = 0
arg1[0x10] = -1
__builtin_memset(&arg1[0x16], 0, 0x90)
return arg1

// 函数: sub_1421a9b60
// 地址: 0x1421a9b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x17) | 0x80
*arg1 = &data_1432f0af0
__builtin_memset(&arg1[9], 0, 0x1d)
__builtin_memset(&arg1[0xd], 0, 0x2d)
arg1[0x13] = 0
arg1[0x14] = 0
arg1[5].b |= 0x42
return arg1

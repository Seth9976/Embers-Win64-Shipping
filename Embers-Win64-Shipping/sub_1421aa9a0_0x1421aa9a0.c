// 函数: sub_1421aa9a0
// 地址: 0x1421aa9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x17) | 0x80
*arg1 = &data_1432f4050
__builtin_memset(&arg1[6], 0, 0x1d)
arg1[0xa] = 0
arg1[0xb] = 0
arg1[5].b &= 0xfe
arg1[5].b |= 2
arg1[0xc].d |= 1
return arg1

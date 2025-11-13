// 函数: sub_1421aaac0
// 地址: 0x1421aaac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x17) | 0x80
__builtin_memset(&arg1[6], 0, 0x1d)
arg1[0xa] = 0
arg1[0xb] = 0
arg1[5].b |= 1
*arg1 = &data_1432f4d70
arg1[0xc] = 0
arg1[0xd].b = (arg1[0xd].b & 0xf4) | 4
arg1[0xe] = 0
arg1[0xf] = 0
arg1[5].b |= 1
*(arg1 + 0x29) |= 0xc
return arg1

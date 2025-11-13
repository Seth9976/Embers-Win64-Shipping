// 函数: sub_1421d81a0
// 地址: 0x1421d81a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421d8050(arg1, arg2)
__builtin_memset(&arg1[0x17], 0, 0x1d)
__builtin_memset(&arg1[0x1b], 0, 0x2d)
arg1[0x21] = 0
arg1[0x22] = 0
arg1[5].b |= 0x40
arg1[0x16].d |= 1
*arg1 = &data_1432fb5e8
arg1[0x23].b = 2
arg1[0x24] = 0
arg1[0x25].b = (arg1[0x25].b & 0xf4) | 4
arg1[0x26] = 0
arg1[0x27] = 0
arg1[5].b |= 1
*(arg1 + 0x29) |= 0xc
return arg1

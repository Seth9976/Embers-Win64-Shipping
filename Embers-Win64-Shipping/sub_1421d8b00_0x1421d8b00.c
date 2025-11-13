// 函数: sub_1421d8b00
// 地址: 0x1421d8b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
arg1[6].d |= 3
*arg1 = &data_1432ff8e0
__builtin_memset(&arg1[7], 0, 0x1d)
__builtin_memset(&arg1[0xb], 0, 0x2d)
arg1[0x11] = 0
arg1[0x12] = 0
__builtin_memset(&arg1[0x14], 0, 0x2d)
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[6].d |= 1
*(arg1 + 0x29) &= 0xfd
arg1[0x1c].d |= 1
return arg1

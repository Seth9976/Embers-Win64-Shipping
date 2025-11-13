// 函数: sub_1421aae10
// 地址: 0x1421aae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x14) | 0x80
*arg1 = &data_1432ed6c0
arg1[7] = 0
__builtin_memset(&arg1[9], 0, 0x1d)
arg1[0xd] = 0
arg1[0xe] = data_143dbb1f8.q
arg1[0xf].d = data_143dbb200
*(arg1 + 0x7c) = data_143dbb1f8.q
*(arg1 + 0x84) = data_143dbb200
arg1[0x11] = 0
*(arg1 + 0x94) |= 4
*(arg1 + 0x44) &= 0xf9
*(arg1 + 0x44) |= 1
*(arg1 + 0x45) = 0
arg1[0x12].b = 0
*(arg1 + 0x92) = 0
arg1[8].d = 0x3f800000
return arg1

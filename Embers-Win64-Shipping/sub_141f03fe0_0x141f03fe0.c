// 函数: sub_141f03fe0
// 地址: 0x141f03fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04660(arg1, arg2)
arg1[0x1f].w = 1
*arg1 = &data_14326c7b8
arg1[5] = &data_14326cce8
*(arg1 + 0xfb) = 1
__builtin_memset(&arg1[0x20], 0, 0x50)
arg1[0x2b] = 0
arg1[0x2c] = 0
*(arg1 + 0xfc) &= 0xfffffffe
*(arg1 + 0x8a) |= 0x10
arg1[0x1d].b &= 0x3e
*(arg1 + 0x174) = 0
arg1[0x2d].d = 0
arg1[0x31].b = 0
arg1[0x2a].d = 0x3d4ccccd
*(arg1 + 0x154) = 8
*(arg1 + 0x16c) = 0x3f800000
arg1[0x1e].d = 0x3f800000
arg1[0x2e].d = 0x3f800000
return arg1

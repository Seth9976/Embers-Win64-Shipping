// 函数: sub_141f04700
// 地址: 0x141f04700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04660(arg1, arg2)
*arg1 = &data_14326f8f0
arg1[5] = &data_14326fe58
arg1[0x1e].b &= 0xe0
*(arg1 + 0xf4) = 0xbf800000
arg1[0x1f].d = 0xbf800000
*(arg1 + 0xfc) = 0xbf800000
arg1[0x20].d = 0x3f000000
__builtin_memset(&arg1[0x21], 0, 0x18)
*(arg1 + 0x124) = (*(arg1 + 0x124) & 0xf9) | 9
*(arg1 + 0x125) &= 0xe0
arg1[0x1d].b |= 0x80
return arg1

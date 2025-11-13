// 函数: sub_141f2e610
// 地址: 0x141f2e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_143277a10
arg1[5] = &data_143277f40
__builtin_memset(&arg1[0x3f], 0, 0x40)
arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x4b] = -1
arg1[0x4b].d |= 0x48000
*(arg1 + 0x25c) = (*(arg1 + 0x25c) & 0xfff8ffff) | 0x400
__builtin_memset(&arg1[0x4d], 0, 0x20)
*(arg1 + 0x1f2) |= 3
*(arg1 + 0x1f1) = 0
*(arg1 + 0x1f3) = 0
arg1[0x47].d = 0x3f800000
*(arg1 + 0x23c) = 0xbf800000
arg1[0x48].d = 0
*(arg1 + 0x244) = 0
arg1[0x4b].d &= 0xfffd7fff
*(arg1 + 0x25c) &= 0xfffeffff
arg1[0x4c].d = 0
return arg1

// 函数: sub_1421aa6d0
// 地址: 0x1421aa6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x17) | 0x80
*arg1 = &data_1432f39c0
__builtin_memset(&arg1[6], 0, 0x1d)
arg1[0xa] = 0
arg1[0xb] = data_143dbb1f8.q
arg1[0xc].d = data_143dbb200
*(arg1 + 0x64) = data_143dbb1f8.q
*(arg1 + 0x6c) = data_143dbb200
arg1[0xe] = 0
arg1[5].b |= 1
arg1[0xf].d &= 0xfffffffe
*arg1 = &data_1432f3d08
arg1[0x10] = 0
arg1[0x11].b = (arg1[0x11].b & 0xf4) | 4
arg1[0x12] = 0
arg1[0x13] = 0
arg1[5].b |= 1
*(arg1 + 0x29) |= 0xc
return arg1

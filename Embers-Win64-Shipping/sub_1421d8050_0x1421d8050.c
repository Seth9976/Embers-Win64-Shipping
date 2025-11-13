// 函数: sub_1421d8050
// 地址: 0x1421d8050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
*arg1 = &data_1432faf48
__builtin_memset(&arg1[7], 0, 0x1d)
__builtin_memset(&arg1[0xb], 0, 0x2d)
arg1[0x11] = 0
arg1[0x12] = data_143dbb1f8.q
arg1[0x13].d = data_143dbb200
*(arg1 + 0x9c) = data_143dbb1f8.q
*(arg1 + 0xa4) = data_143dbb200
arg1[0x15] = 0
arg1[5].b |= 1
arg1[6].d = (arg1[6].d & 0xffffff3f) | 0x3f
return arg1

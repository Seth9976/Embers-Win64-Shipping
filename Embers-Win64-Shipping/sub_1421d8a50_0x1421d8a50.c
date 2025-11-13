// 函数: sub_1421d8a50
// 地址: 0x1421d8a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
*arg1 = &data_1432fe4a8
__builtin_memset(&arg1[6], 0, 0x1d)
arg1[0xa] = 0
arg1[0xb] = data_143dbb1f8.q
arg1[0xc].d = data_143dbb200
*(arg1 + 0x64) = data_143dbb1f8.q
*(arg1 + 0x6c) = data_143dbb200
arg1[0xe] = 0
arg1[5].b = (arg1[5].b & 0xfd) | 1
*arg1 = &data_1432fe7f0
arg1[0xf] = 0
arg1[0x10].b = (arg1[0x10].b & 0xf4) | 4
arg1[0x11] = 0
arg1[0x12] = 0
arg1[5].b |= 1
*(arg1 + 0x29) |= 0xc
return arg1

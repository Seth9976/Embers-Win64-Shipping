// 函数: sub_1421a9d10
// 地址: 0x1421a9d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x17) | 0x80
*arg1 = &data_1432f1180
__builtin_memset(&arg1[6], 0, 0x1d)
arg1[0xa] = 0
arg1[0xb] = data_143dbb1f8.q
arg1[0xc].d = data_143dbb200
*(arg1 + 0x64) = data_143dbb1f8.q
*(arg1 + 0x6c) = data_143dbb200
__builtin_memset(&arg1[0xe], 0, 0x25)
__builtin_memset(&arg1[0x13], 0, 0x2d)
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[5].b |= 0x42
arg1[0x1b].d = (arg1[0x1b].d & 0xfffffff9) | 0x3f1
return arg1

// 函数: sub_1421a98c0
// 地址: 0x1421a98c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x17) | 0x80
*arg1 = &data_1432ef740
__builtin_memset(&arg1[7], 0, 0x1d)
arg1[0xb] = 0
arg1[0xc] = data_143dbb1f8.q
arg1[0xd].d = data_143dbb200
*(arg1 + 0x6c) = data_143dbb1f8.q
*(arg1 + 0x74) = data_143dbb200
arg1[0xf] = 0
arg1[5].b |= 3
return arg1

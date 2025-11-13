// 函数: sub_1426a68f0
// 地址: 0x1426a68f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[6] = 0
arg1[7] = 0
*(arg1 + 0x55) &= 0xf8
arg1[0xb].b &= 0xf0
__builtin_memset(&arg1[8], 0, 0x15)
*arg1 = &data_1434652b0
arg1[5] = &data_143465578
*(arg1 + 0x59) = 0xff
return arg1

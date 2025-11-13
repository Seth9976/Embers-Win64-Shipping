// 函数: sub_1423fe310
// 地址: 0x1423fe310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1433458d8
arg1[5] = 0
arg1[6] = 0
arg1[7].b = (arg1[7].b & 0xbf) | 0x20
__builtin_memset(&arg1[8], 0, 0x30)
arg1[0xe].w = 0x102
__builtin_memset(&arg1[0x10], 0, 0x70)
return arg1

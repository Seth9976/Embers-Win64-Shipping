// 函数: sub_1426a6da0
// 地址: 0x1426a6da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[6] = 0
arg1[7] = 0
*(arg1 + 0x55) &= 0xf8
*arg1 = &data_143464f90
arg1[5] = &data_143465268
__builtin_memset(&arg1[8], 0, 0x15)
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd].d &= 0xfffffff8
return arg1

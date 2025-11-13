// 函数: sub_1426a7400
// 地址: 0x1426a7400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x2b) &= 0xfc
*arg1 = &data_1434677f0
arg1[6] = 0
arg1[7] = 0
*(arg1 + 0x2b) |= 2
arg1[5].w = 0
*(arg1 + 0x2a) = 2
return arg1

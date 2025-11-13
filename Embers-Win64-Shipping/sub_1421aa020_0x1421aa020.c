// 函数: sub_1421aa020
// 地址: 0x1421aa020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x17) | 0x80
*arg1 = &data_1432f2530
return arg1

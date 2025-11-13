// 函数: sub_1421a9990
// 地址: 0x1421a9990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[5].b &= 0x14
arg1[5].b |= 0x83
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
*arg1 = &data_1432efa88
return arg1

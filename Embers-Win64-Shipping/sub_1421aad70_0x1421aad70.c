// 函数: sub_1421aad70
// 地址: 0x1421aad70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
*arg1 = &data_1432ed338
arg1[5].b = (arg1[5].b & 0x14) | 0x80
return arg1

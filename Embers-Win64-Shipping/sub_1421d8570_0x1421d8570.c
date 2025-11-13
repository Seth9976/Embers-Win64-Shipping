// 函数: sub_1421d8570
// 地址: 0x1421d8570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421d7c30(arg1, arg2)
*arg1 = &data_1432fc9b8
arg1[0x10] = 0
arg1[0x11].b = (arg1[0x11].b & 0xf4) | 4
arg1[0x12] = 0
arg1[0x13] = 0
arg1[5].b |= 1
*(arg1 + 0x29) |= 0xc
return arg1

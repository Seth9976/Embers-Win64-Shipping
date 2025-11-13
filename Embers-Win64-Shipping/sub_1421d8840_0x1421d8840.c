// 函数: sub_1421d8840
// 地址: 0x1421d8840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
arg1[6] = 0
arg1[7] = 0
arg1[5].b |= 3
*arg1 = &data_1432fe098
arg1[9] = 0
arg1[0xa].b = (arg1[0xa].b & 0xf4) | 4
arg1[0xb] = 0
arg1[0xc] = 0
arg1[5].b |= 3
*(arg1 + 0x29) |= 0xc
return arg1

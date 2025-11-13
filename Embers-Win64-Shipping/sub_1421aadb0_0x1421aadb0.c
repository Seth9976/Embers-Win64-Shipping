// 函数: sub_1421aadb0
// 地址: 0x1421aadb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x14) | 0x80
*arg1 = &data_1432ee490
sub_1421a89b0(&arg1[6])
sub_1421a8f60(&arg1[0x56])
*(arg1 + 0x414) &= 0xfffffffe
return arg1

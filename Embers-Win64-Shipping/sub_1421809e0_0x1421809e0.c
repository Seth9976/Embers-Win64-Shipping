// 函数: sub_1421809e0
// 地址: 0x1421809e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142259390(arg1)
*arg1 = &data_1432e5148
arg1[0x4e] = 0
arg1[0x51] = 0
arg1[0x4d].d |= 1
arg1[0x4e] = sub_142496c20()
*(arg1 + 0x27c) |= 1
*(arg1 + 0x26c) = 0x3f800000
arg1[0x4f].d = 0x3f800000
return arg1

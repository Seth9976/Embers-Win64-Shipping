// 函数: sub_141ed37f0
// 地址: 0x141ed37f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*(arg1 + 0x20e) &= 0xf9
*(arg1 + 0x14d) |= 4
*(arg1 + 0x20a) |= 0x80
*(arg1 + 0x20e) |= 8
*(arg1 + 0x8a) |= 8
*arg1 = &data_143261808
arg1[5] = &data_1432600f0
arg1[0x3e] = &data_143260120
return arg1

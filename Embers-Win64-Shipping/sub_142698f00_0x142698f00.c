// 函数: sub_142698f00
// 地址: 0x142698f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
*(arg1 + 0x8a) |= 0xc
*arg1 = &data_14345a2c8
arg1[5] = &data_14345a6b8
arg1[0x16] = &data_14345a6e8
*(arg1 + 0xd4) = (*(arg1 + 0xd4) & 0xfffffffd) | 1
return arg1

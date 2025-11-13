// 函数: sub_14222aa20
// 地址: 0x14222aa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[4].b &= 0xfe
*arg1 = 0x42480000
*(arg1 + 4) = 0x40a00000
arg1[5] = 0x42340000
arg1[6].b = 0
arg1[4].b |= 1
arg1[3] = 0x3f800000
return arg1

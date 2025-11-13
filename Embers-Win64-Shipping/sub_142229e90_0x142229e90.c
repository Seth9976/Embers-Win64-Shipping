// 函数: sub_142229e90
// 地址: 0x142229e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3].b &= 0xfc
*arg1 = 0x42480000
*(arg1 + 4) = 0x3f800000
arg1[7].b &= 0xfc
arg1[4] = 0x42480000
*(arg1 + 0x14) = 0x3f800000
arg1[0xb].b &= 0xfc
arg1[8] = 0x42480000
*(arg1 + 0x24) = 0x3f800000
__builtin_memset(&arg1[0xc], 0, 0x19)
return arg1

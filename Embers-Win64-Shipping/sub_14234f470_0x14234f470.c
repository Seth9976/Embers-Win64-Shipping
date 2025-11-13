// 函数: sub_14234f470
// 地址: 0x14234f470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[9].b &= 0xc0
arg1[9].b |= 0x40
*(arg1 + 0xc) = 0x3f800000
*(arg1 + 0x1c) = 0
arg1[0xa] = 0
*arg1 = 0x3f800000
arg1[1] = 0x3f800000
arg1[2] = 0x469c4000
*(arg1 + 0x14) = 0x3f000000
arg1[0xb].w = 0
int32_t zmm1 = arg1[3]
*(arg1 + 0x30) = 0
sub_141e71590(&arg1[0xe], zmm1)
arg1[0x15] = 0x3f800000
return arg1

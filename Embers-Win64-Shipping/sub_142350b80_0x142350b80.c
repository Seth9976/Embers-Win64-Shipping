// 函数: sub_142350b80
// 地址: 0x142350b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_14332d818
*(arg1 + 0x4c) &= 0xc0
*(arg1 + 0x4c) |= 0x40
*(arg1 + 0x34) = 0x3f800000
arg1[5].d = 0x3f800000
*(arg1 + 0x2c) = 0x3f800000
arg1[6].d = 0x469c4000
*(arg1 + 0x3c) = 0x3f000000
*(arg1 + 0x44) = 0
arg1[0xa].d = 0
*(arg1 + 0x54) = 0
int32_t zmm1 = *(arg1 + 0x34)
arg1[0xb] = 0
sub_141e71590(&arg1[0xc], zmm1)
*(arg1 + 0x7c) = 0x3f800000
__builtin_memset(&arg1[0x10], 0, 0x30)
return arg1

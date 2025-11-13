// 函数: sub_142350950
// 地址: 0x142350950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_14332cf30
arg1[5] = &data_142d8ad18
arg1[6].d = 0x42000000
*(arg1 + 0x34) = 0x42000000
*(arg1 + 0x3c) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x48) = data_14399f5c0
arg1[0xb].b = 0
__builtin_memset(&arg1[0xc], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x12].b = 0
arg1[0x11].d = zmm1.d
arg1[0x10].d = zmm1.d
int128_t zmm0 = zmm1:4.d
*(arg1 + 0x8c) = zmm0.d
*(arg1 + 0x84) = zmm0.d
*(arg1 + 0x94) = 3
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15].b &= 0xfc
return arg1

// 函数: sub_141c0a260
// 地址: 0x141c0a260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(&arg2[2], 0, 0x80)
*arg2 = &data_1430900a8
arg2[1] = &data_142d8ad18
arg2[2].d = 0x42000000
*(arg2 + 0x14) = 0x42000000
*(arg2 + 0x1c) = 0
*(arg2 + 0x24) = 0
*(arg2 + 0x28) = data_14399f5c0
arg2[7].b = 0
__builtin_memset(&arg2[8], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg2[0xd].d = zmm1.d
arg2[0xc].d = zmm1.d
arg2[0xe].b = 0
int128_t zmm0 = zmm1:4.d
*(arg2 + 0x6c) = zmm0.d
*(arg2 + 0x64) = zmm0.d
*(arg2 + 0x74) = 3
arg2[0xf] = 0
arg2[0x10] = 0
arg2[0x11].b &= 0xfc
return 0

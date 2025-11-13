// 函数: sub_140dd86a0
// 地址: 0x140dd86a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9348
arg1[1] = &data_142d8ad18
arg1[2].d = 0x42000000
*(arg1 + 0x14) = 0x42000000
*(arg1 + 0x1c) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = data_14399f5c0
arg1[7].b = 0
__builtin_memset(&arg1[8], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0xe].b = 0
arg1[0xd].d = zmm1.d
arg1[0xc].d = zmm1.d
int128_t zmm0 = zmm1:4.d
*(arg1 + 0x6c) = zmm0.d
*(arg1 + 0x64) = zmm0.d
*(arg1 + 0x74) = 3
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11].b &= 0xfc
arg1[0x12].w = 0
return arg1

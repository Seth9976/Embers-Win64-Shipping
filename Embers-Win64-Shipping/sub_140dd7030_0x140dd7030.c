// 函数: sub_140dd7030
// 地址: 0x140dd7030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9240
sub_140dd6180(&arg1[1])
arg1[0x50] = &data_142d8ad18
arg1[0x51].d = 0x42000000
*(arg1 + 0x28c) = 0x42000000
*(arg1 + 0x294) = 0
*(arg1 + 0x29c) = 0
*(arg1 + 0x2a0) = data_14399f5c0
arg1[0x56].b = 0
__builtin_memset(&arg1[0x57], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x5c].d = zmm1.d
arg1[0x5b].d = zmm1.d
arg1[0x5d].b = 0
int128_t zmm0 = zmm1:4.d
*(arg1 + 0x2e4) = zmm0.d
*(arg1 + 0x2dc) = zmm0.d
*(arg1 + 0x2ec) = 3
arg1[0x5e] = 0
arg1[0x5f] = 0
arg1[0x60].b &= 0xfc
arg1[0x61].d = data_143dbb1f0.d.d
*(arg1 + 0x30c) = data_143dbb1f0:4.d.d
*(arg1 + 0x310) = data_14399f5e0
arg1[0x64] = &data_142d8ad18
arg1[0x65].d = 0x42000000
*(arg1 + 0x32c) = 0x42000000
*(arg1 + 0x334) = 0
*(arg1 + 0x33c) = 0
*(arg1 + 0x340) = data_14399f5c0
arg1[0x6a].b = 0
__builtin_memset(&arg1[0x6b], 0, 0x20)
zmm1 = data_143dbb1f0
arg1[0x70].d = zmm1.d
arg1[0x6f].d = zmm1.d
arg1[0x71].b = 0
zmm0 = zmm1:4.d
*(arg1 + 0x384) = zmm0.d
*(arg1 + 0x37c) = zmm0.d
*(arg1 + 0x38c) = 3
arg1[0x72] = 0
arg1[0x73] = 0
arg1[0x74].b &= 0xfc
arg1[0x75] = 0
arg1[0x76] = 0
return arg1

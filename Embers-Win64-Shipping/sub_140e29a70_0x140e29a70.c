// 函数: sub_140e29a70
// 地址: 0x140e29a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = &data_142d8ad18
arg2[1].d = 0x42000000
*(arg2 + 0xc) = 0x42000000
*(arg2 + 0x14) = 0
*(arg2 + 0x1c) = 0
*(arg2 + 0x20) = data_14399f5c0
arg2[6].b = 0
__builtin_memset(&arg2[7], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg2[0xc].d = zmm1.d
arg2[0xb].d = zmm1.d
arg2[0xd].b = 0
int128_t zmm0 = zmm1:4.d
*(arg2 + 0x64) = zmm0.d
*(arg2 + 0x5c) = zmm0.d
*(arg2 + 0x6c) = 3
arg2[0xe] = 0
arg2[0xf] = 0
arg2[0x10].b &= 0xfc
return 0

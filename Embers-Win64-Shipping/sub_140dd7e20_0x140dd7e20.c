// 函数: sub_140dd7e20
// 地址: 0x140dd7e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9288
sub_140e14a10(&arg1[1], 9)
__builtin_memcpy(&arg1[0xb], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = &data_142d8ad18
arg1[0x11].d = 0x42000000
*(arg1 + 0x8c) = 0x42000000
*(arg1 + 0x94) = 0
*(arg1 + 0x9c) = 0
*(arg1 + 0xa0) = data_14399f5c0
arg1[0x16].b = 0
__builtin_memset(&arg1[0x17], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x1c].d = zmm1.d
arg1[0x1b].d = zmm1.d
arg1[0x1d].b = 0
int128_t zmm0 = zmm1:4.d
*(arg1 + 0xe4) = zmm0.d
*(arg1 + 0xdc) = zmm0.d
*(arg1 + 0xec) = 3
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20].b &= 0xfc
arg1[0x21] = &data_142d8ad18
arg1[0x22].d = 0x42000000
*(arg1 + 0x114) = 0x42000000
*(arg1 + 0x11c) = 0
*(arg1 + 0x124) = 0
*(arg1 + 0x128) = data_14399f5c0
arg1[0x27].b = 0
__builtin_memset(&arg1[0x28], 0, 0x20)
zmm1 = data_143dbb1f0
arg1[0x2d].d = zmm1.d
arg1[0x2c].d = zmm1.d
arg1[0x2e].b = 0
zmm0 = zmm1:4.d
*(arg1 + 0x16c) = zmm0.d
*(arg1 + 0x164) = zmm0.d
*(arg1 + 0x174) = 3
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31].b &= 0xfc
arg1[0x32] = &data_142d8ad18
arg1[0x33].d = 0x42000000
*(arg1 + 0x19c) = 0x42000000
*(arg1 + 0x1a4) = 0
*(arg1 + 0x1ac) = 0
*(arg1 + 0x1b0) = data_14399f5c0
arg1[0x38].b = 0
__builtin_memset(&arg1[0x39], 0, 0x20)
zmm1 = data_143dbb1f0
zmm0 = zmm1:4.d
*(arg1 + 0x1f4) = zmm0.d
*(arg1 + 0x1ec) = zmm0.d
arg1[0x3e].d = zmm1.d
arg1[0x3d].d = zmm1.d
arg1[0x3f].b = 0
*(arg1 + 0x1fc) = 3
arg1[0x40] = 0
arg1[0x41] = 0
arg1[0x42].b &= 0xfc
return arg1

// 函数: sub_141b7ebb0
// 地址: 0x141b7ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_143077d88
arg1[0x21] = &data_142d8ad18
arg1[0x22].d = 0x42000000
*(arg1 + 0x114) = 0x42000000
*(arg1 + 0x11c) = 0
*(arg1 + 0x124) = 0
*(arg1 + 0x128) = data_14399f5c0
arg1[0x27].b = 0
__builtin_memset(&arg1[0x28], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x2d].d = zmm1.d
arg1[0x2c].d = zmm1.d
arg1[0x2e].b = 0
int128_t zmm0 = zmm1:4.d
*(arg1 + 0x16c) = zmm0.d
*(arg1 + 0x164) = zmm0.d
*(arg1 + 0x174) = 3
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31].b &= 0xfc
sub_140d3a3a0(&arg1[0x32], nullptr)
arg1[0x33] = 0
*(arg1 + 0x1a0) = data_14399f5c0
sub_140d3a3a0(&arg1[0x36], nullptr)
arg1[0x37] = 0
sub_140d3a3a0(arg1 + 0x1c4, nullptr)
*(arg1 + 0x1cc) = 0
__builtin_memset(&arg1[0x3b], 0, 0x38)
return arg1

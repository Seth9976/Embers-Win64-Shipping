// 函数: sub_140f202a0
// 地址: 0x140f202a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].b = arg2[1].b
arg1[2] = 0
arg1[3].d = 0
sub_140692f90(&arg1[2], &arg2[2])
arg1[4] = &data_142d8ad18
arg1[5].d = 0x42000000
*(arg1 + 0x2c) = 0x42000000
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = data_14399f5c0
arg1[0xa].b = 0
__builtin_memset(&arg1[0xb], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x10].d = zmm1.d
arg1[0xf].d = zmm1.d
arg1[0x11].b = 0
int128_t zmm0 = zmm1:4.d
*(arg1 + 0x84) = zmm0.d
*(arg1 + 0x7c) = zmm0.d
*(arg1 + 0x8c) = 3
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14].b &= 0xfc
return arg1

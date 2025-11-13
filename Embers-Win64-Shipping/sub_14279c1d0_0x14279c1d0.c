// 函数: sub_14279c1d0
// 地址: 0x14279c1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
sub_1422883b0(arg1, arg2, 0)
*arg1 = &data_1434b5d08
*(arg1 + 0x150) = *(arg2 + 0x408)
arg1[0x2c] = arg2[0x85]
arg1[0x2d].d = arg2[0x86].d
uint128_t zmm0 = arg2[0x89].d
uint128_t zmm1 = *(arg2 + 0x444)
uint128_t zmm5 = arg2[0x88].d
uint128_t zmm3
zmm3.d = zmm0.d f+ zmm0.d
float zmm2 = *(arg2 + 0x44c)
uint128_t zmm4 = zmm1 ^ data_142d3f780
zmm4.d = zmm4.d f+ zmm4.d
zmm0.d = zmm0.d f* zmm3.d
zmm1.d = zmm1.d f* zmm4.d
zmm1.d = zmm1.d f- zmm0.d
zmm0.d = zmm5.d f* zmm4.d
zmm5.d = zmm5.d f* zmm3.d
zmm1.d = zmm1.d f+ 1f
zmm4.d = zmm4.d f* zmm2
*(arg1 + 0x16c) = zmm1.d
zmm5.d = zmm5.d f+ zmm4.d
zmm1.d = zmm3.d f* zmm2
*(arg1 + 0x174) = zmm5.d
zmm1.d = zmm1.d f- zmm0.d
arg1[0x2e].d = zmm1.d
zmm4 = arg2[0x88].d
zmm5 = arg2[0x89].d
zmm3 = *(arg2 + 0x44c)
zmm2 = zmm4.d f+ zmm4.d
uint128_t zmm7 = *(arg2 + 0x444)
uint128_t zmm6 = zmm5 ^ data_142d3f780
zmm6.d = zmm6.d f+ zmm6.d
zmm0.d = zmm7.d f* zmm2
zmm4.d = zmm4.d f* zmm2
zmm5.d = zmm5.d f* zmm6.d
zmm1.d = zmm3.d f* zmm6.d
zmm5.d = zmm5.d f- zmm4.d
zmm3.d = zmm3.d f* zmm2
zmm1.d = zmm1.d f+ zmm0.d
zmm7.d = zmm7.d f* zmm6.d
zmm5.d = zmm5.d f+ 1f
zmm3.d = zmm3.d f- zmm7.d
arg1[0x2f].d = zmm1.d
*(arg1 + 0x17c) = zmm5.d
arg1[0x30].d = zmm3.d
zmm1 = *(arg2 + 0x444)
zmm6 = arg2[0x88].d
zmm5 = arg2[0x89].d
zmm3.d = zmm1.d f+ zmm1.d
zmm4 = zmm6 ^ data_142d3f780
zmm4.d = zmm4.d f+ zmm4.d
zmm0.d = zmm3.d f* zmm1.d
zmm1 = *(arg2 + 0x44c)
zmm6.d = zmm6.d f* zmm4.d
zmm6.d = zmm6.d f- zmm0.d
zmm0.d = zmm4.d f* zmm1.d
zmm6.d = zmm6.d f+ 1f
zmm2 = zmm3.d f* zmm5.d f+ zmm0.d
zmm3.d = zmm3.d f* zmm1.d
zmm5.d = zmm5.d f* zmm4.d
*(arg1 + 0x18c) = zmm6.d
arg1[0x31].d = zmm2
zmm3.d = zmm3.d f- zmm5.d
*(arg1 + 0x184) = zmm3.d
arg1[0x32] = arg2[0x8a]
arg1[0x33].d = arg2[0x8b].d
*(arg1 + 0x19c) = *(arg2 + 0x45c)
arg1[0x34].d = arg2[0x83].d
*(arg1 + 0x1a4) = *(arg2 + 0x461)
*(arg1 + 0x1a5) = arg2[0x8c].b
__builtin_memset(&arg1[0x35], 0, 0x30)
return arg1

// 函数: sub_142181dc0
// 地址: 0x142181dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432e4528
arg1[8] = 0
arg1[9] = 0
__builtin_memset(&arg1[0xd], 0, 0x20)
*(arg1 + 0xb6) &= 0xfe
int64_t temp0 = _mm_unpacklo_ps(0xbf800000, 0xbf800000)
*(arg1 + 0xb4) = 0x100
__builtin_memset(&arg1[0x1d], 0, 0x20)
*(arg1 + 0x10a) &= 0xf8
arg1[0x16].b |= 0x20
*(arg1 + 0xb1) &= 0xf7
*(arg1 + 0xb1) |= 6
arg1[0x11] = temp0
*(arg1 + 0x94) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
int32_t var_10 = 0xbf800000
arg1[0x12].d = 0xbf800000
int32_t var_10_1 = 0x3f800000
*(arg1 + 0x9c) = 0x3f800000
arg1[0x18] = _mm_unpacklo_ps(zx.o(0), 0)
arg1[0x19].d = 0
arg1[0x21].w = 3
arg1[6].d = 0x42700000
*(arg1 + 0x34) = 0x3c888889
*(arg1 + 0x3c) = 0
arg1[0x14].b = 1
*(arg1 + 0xb3) = 0
arg1[0xc].d = 0x3e800000
int32_t var_10_2 = 0
*(arg1 + 0x64) = 0x43480000
arg1[0x17] = 0
*(arg1 + 0xb7) = 3
arg1[5].d = 0x20
return arg1

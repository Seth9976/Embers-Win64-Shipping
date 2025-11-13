// 函数: sub_142b541c0
// 地址: 0x142b541c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = j_sub_142a4bbc0()
__builtin_memset(&arg1[1], 0, 0x18)
__builtin_memset(&arg1[0xe], 0, 0x11)
double zmm0_1[0x2] = sub_142a4bbb0()
double temp0[0x2] = _mm_unpacklo_pd(zmm0_1, zmm0_1[0])
*(arg1 + 0x20) = temp0
arg1[0x10].b = 0
*(arg1 + 0x30) = temp0
*(arg1 + 0x40) = temp0
*(arg1 + 0x50) = temp0
*(arg1 + 0x60) = temp0
return arg1

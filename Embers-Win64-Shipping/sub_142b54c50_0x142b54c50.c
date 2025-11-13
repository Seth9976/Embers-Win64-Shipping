// 函数: sub_142b54c50
// 地址: 0x142b54c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
double zmm0[0x2] = sub_142a4bbb0()
double result[0x2] = _mm_unpacklo_pd(zmm0, zmm0[0])
*(arg1 + 0x20) = result
arg1[0x10].b = 0
*(arg1 + 0x30) = result
*(arg1 + 0x40) = result
*(arg1 + 0x50) = result
*(arg1 + 0x60) = result
return result

// 函数: sub_14141fde0
// 地址: 0x14141fde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3 = *(*arg1 + 0x7c)
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(arg1[0x4c].d - arg1[0x4b].d)).d f* zmm3
zmm1.d = zmm1.d f+ zmm1.d
uint128_t zmm0
zmm0.d = -0.5f f- zmm1.d
*arg2 = neg.d(int.d(zmm0.d) s>> 1)
zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x264) - *(arg1 + 0x25c))).d f* zmm3
zmm0.d = zmm0.d f+ zmm0.d
arg2[1] = neg.d(int.d(-0.5f f- zmm0.d) s>> 1)
return arg2

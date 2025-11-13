// 函数: sub_142acca60
// 地址: 0x142acca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(arg2))
int128_t zmm7 = arg1
arg1.q = arg1.q f/ zmm6.q
double zmm0 = sub_142a4b9b0(arg1.q)
zmm6.q = zmm6.q f* zmm0
zmm7.q = zmm7.q f- zmm6.q
*arg3 = int.d(zmm7.q)
return zx.q(int.d(zmm0))

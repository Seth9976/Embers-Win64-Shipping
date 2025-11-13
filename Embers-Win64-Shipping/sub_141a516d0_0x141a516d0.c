// 函数: sub_141a516d0
// 地址: 0x141a516d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 + 0x7c0)
int64_t r8 = sx.q(*(arg1 + 0x46c))
double zmm2[0x2] = zx.o(0)
uint32_t rdx_1 = (r9 u>> 0x20).d
int32_t arg_8
arg_8.q = r8.d.q
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* 0f
uint64_t temp0_1 = _mm_cvtepi32_pd(zx.q(r9.d))
zmm2[0] = float.d(sx.q(rdx_1) * r8)
zmm0 = _mm_cvtps_pd(zmm0.q)
zmm2[0] = zmm2[0] f+ zmm0.q
zmm2[0] = zmm2[0] f/ temp0_1
return _mm_cvtpd_ps(zmm2)

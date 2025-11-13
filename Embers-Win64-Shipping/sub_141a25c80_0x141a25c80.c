// 函数: sub_141a25c80
// 地址: 0x141a25c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg1[1]
double zmm2[0x2] = zx.o(0)
int64_t rax = *arg1
uint32_t rdx_1 = (r8 u>> 0x20).d
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* rax:4.d
uint64_t temp0_1 = _mm_cvtepi32_pd(zx.q(r8.d))
zmm2[0] = float.d(sx.q(rdx_1) * sx.q(rax.d))
zmm0 = _mm_cvtps_pd(zmm0.q)
zmm2[0] = zmm2[0] f+ zmm0.q
zmm2[0] = zmm2[0] f/ temp0_1
return _mm_cvtpd_ps(zmm2)

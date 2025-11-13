// 函数: sub_141d69d50
// 地址: 0x141d69d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg2[1]
int64_t rax = *arg2
uint32_t r8_1 = (r9 u>> 0x20).d
uint128_t result
result.d = _mm_cvtepi32_ps(zx.o(r8_1)).d f* rax:4.d
double temp0_1 = _mm_cvtepi32_pd(zx.q(r9.d))
result = _mm_cvtps_pd(result.q)
*(arg1 + 0x20) = (float.d(sx.q(r8_1) * sx.q(rax.d)) f+ result.q) f/ temp0_1
return result

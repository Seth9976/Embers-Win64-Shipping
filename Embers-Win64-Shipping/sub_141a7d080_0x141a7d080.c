// 函数: sub_141a7d080
// 地址: 0x141a7d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = *(arg2 + 0x20)
double zmm2[0x2] = zx.o(0)
int64_t r9
r9.b = rax_1 != 0
*(arg2 + 0x20) = r9 + rax_1
int64_t r10 = *(arg1 + 0x7c0)
int32_t result_1 = *(arg1 + 0x46c) + *(arg1 + 0x468)
uint32_t r9_3 = (r10 u>> 0x20).d
int32_t arg_8
arg_8.q = result_1.q
int64_t result = sx.q(result_1)
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(r9_3)).d f* 0f
zmm2[0] = float.d(sx.q(r9_3) * result)
zmm0 = _mm_cvtps_pd(zmm0.q)
uint64_t temp0_2 = _mm_cvtepi32_pd(zx.q(r10.d))
zmm2[0] = zmm2[0] f+ zmm0.q
zmm2[0] = zmm2[0] f/ temp0_2
*arg3 = _mm_cvtpd_ps(zmm2).d
return result

// 函数: sub_141bad8f0
// 地址: 0x141bad8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg1 + 0x348)
int64_t r8 = *(rax_2 + 0x108)
uint32_t rcx_1 = (r8 u>> 0x20).d
uint32_t rdx_1 = (_mm_bsrli_si128(*(rax_2 + 0xf8), 8).q u>> 0x20).d
uint32_t arg_8
arg_8.q = rdx_1.q
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* 0f
double temp0_2[0x2] = _mm_cvtps_pd(zmm0.q)
uint64_t temp0_3 = _mm_cvtepi32_pd(zx.q(r8.d))
zmm0.q = float.d(sx.q(rcx_1) * sx.q(rdx_1))
temp0_2[0] = temp0_2[0] f+ zmm0.q
temp0_2[0] = temp0_2[0] f/ temp0_3
return _mm_cvtpd_ps(temp0_2)

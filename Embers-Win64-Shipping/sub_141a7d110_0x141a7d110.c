// 函数: sub_141a7d110
// 地址: 0x141a7d110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
void var_18
int64_t* rax_1 = sub_141a50a50(arg1, &var_18)
int64_t r9_2 = sx.q(*(arg1 + 0x468))
double zmm3[0x2] = zx.o(0)
int64_t r11 = rax_1[1]
int64_t rdx_1 = *rax_1
uint32_t r8_1 = (r11 u>> 0x20).d
uint32_t r10_1 = (*(arg1 + 0x7c0) u>> 0x20).d
int32_t arg_8
arg_8.q = r9_2.d.q
int64_t result = sx.q(rdx_1.d)
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(r8_1)).d f* rdx_1:4.d
zmm3[0] = float.d(sx.q(r8_1) * result)
zmm0 = _mm_cvtps_pd(zmm0.q)
uint64_t temp0_2 = _mm_cvtepi32_pd(zx.q(r11.d))
zmm3[0] = zmm3[0] f+ zmm0.q
zmm0 = _mm_cvtepi32_ps(zx.o(r10_1))
zmm3[0] = zmm3[0] f/ temp0_2
zmm0.d = zmm0.d f* 0f
uint64_t zmm1 = zx.q(*(arg1 + 0x7c0))
double temp0_4 = _mm_cvtps_pd(zmm0.q)
zmm0.q = float.d(sx.q(r10_1) * r9_2)
double zmm2 = (temp0_4 f+ zmm0.q) f/ _mm_cvtepi32_pd(zmm1)
zmm3[0] = zmm3[0] - zmm2
*arg3 = _mm_cvtpd_ps(zmm3).d
return result

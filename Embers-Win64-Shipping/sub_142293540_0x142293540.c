// 函数: sub_142293540
// 地址: 0x142293540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rsi_1 = *(arg2 + 0x30)
uint128_t zmm6 = zx.o(*(arg2 + 0x28))
int32_t r8_1 = 0
int64_t zmm5 = 0x4059000000000000
uint128_t zmm4 = 0x404e000000000000
uint128_t zmm1
zmm1.q = fconvert.d(sub_142218a10().d)
*(arg1 + 0x30) = *(arg2 + 0x158)
int32_t rax_2 = 0
uint128_t zmm2
zmm2.q = 0x408f400000000000 f/ zmm1.q
uint128_t zmm3
zmm3.q = float.d(rsi_1)
zmm2.q = zmm2.q f* zmm6.q
int64_t rdx = int.q(zmm2.q)
zmm2 = zx.o(0)
int32_t rcx = rdx.d
uint128_t zmm0_1
zmm0_1.q = float.d(rdx)

if (rcx - rsi_1.d s>= 0)
    rax_2 = rcx - rsi_1.d

zmm1.q = _mm_cvtepi32_pd(zx.q(rax_2)).q f* zmm5
zmm1.q = zmm1.q f/ zmm0_1.q
zmm0_1.q = zmm3.q f/ zmm6.q
*(arg1 + 0x78) = (_mm_cvtps_pd(_mm_cvtpd_ps(zmm1).q)).q
*(arg1 + 0x80) = zmm0_1.q
zmm6 = zx.o(*(arg2 + 0x28))

if (zmm6.q f<= 0.0)
    zmm1 = zx.o(0)
else
    zmm0_1.q = zmm4.q f/ zmm6.q
    zmm1.q = _mm_cvtepi32_pd(zx.q(*(arg2 + 0x60))).q f* zmm0_1.q

*(arg1 + 0x68) = zmm1.q
zmm1 = zx.o(*(arg2 + 0x28))

if (zmm1.q f<= 0.0)
    zmm0_1 = zx.o(0)
else
    zmm0_1.q = _mm_cvtepi32_pd(zx.q(*(arg2 + 0x60))).q f/ zmm1.q

*(arg1 + 0x70) = zmm0_1.q
*(arg1 + 0x8c) = *(arg2 + 0x124)
*(arg1 + 0x88) = *(arg2 + 0x128)
int32_t rax_7

if (rsi_1 s<= 0)
    rax_7 = 0
else
    rax_7 = (divs.dp.q(sx.o(*(arg2 + 0x12c)), rsi_1)).d

*(arg1 + 0x90) = rax_7
*(arg1 + 0x98) = *(arg2 + 0x13c)
*(arg1 + 0x94) = *(arg2 + 0x140)

if (rsi_1 s> 0)
    r8_1 = (divs.dp.q(sx.o(*(arg2 + 0x148)), rsi_1)).d

*(arg1 + 0x9c) = r8_1
*(arg1 + 0xa0) = *(arg2 + 0x38)
*(arg1 + 0xa8) = *(arg2 + 0x40)
zmm0_1.q = float.d(*(arg2 + 0x30))
zmm1.q = *(arg2 + 0x28) f/ zmm0_1.q
*(arg1 + 0xb0) = zmm1.q
*(arg1 + 0xb8) = *(arg2 + 0x98)
*(arg1 + 0xc0) = *(arg2 + 0xa0)
zmm0_1.q = float.d(*(arg2 + 0x90))
zmm1.q = *(arg2 + 0x88) f/ zmm0_1.q
zmm0_1 = zx.o(0)
*(arg1 + 0xc8) = zmm1.q

if (rsi_1 s> 0)
    zmm0_1.q = float.d(zx.q(*(arg2 + 0xa8)))
    zmm0_1.q = zmm0_1.q f* zmm5
    zmm0_1.q = zmm0_1.q f/ zmm3.q

zmm4.q = zmm4.q f/ *(arg1 + 0x30)
*(arg1 + 0x38) = _mm_cvtpd_ps(zmm0_1).d
zmm0_1.q = _mm_cvtepi32_pd(zx.q(*(arg2 + 0x114))).q f* zmm4.q
*(arg1 + 0x3c) = _mm_cvtpd_ps(zmm0_1).d

if (rsi_1 s<= 0)
    zmm0_1 = zx.o(0)
else
    zmm0_1.q = *(arg2 + 0xd8) f/ zmm3.q

*(arg1 + 0x40) = _mm_cvtpd_ps(zmm0_1).d
zmm0_1 = zx.o(0)

if (rsi_1 s> 0)
    zmm0_1.q = float.d(zx.q(*(arg2 + 0xac)))
    zmm0_1.q = zmm0_1.q f* zmm5
    zmm0_1.q = zmm0_1.q f/ zmm3.q

*(arg1 + 0x44) = _mm_cvtpd_ps(zmm0_1).d
zmm1.q = _mm_cvtepi32_pd(zx.q(*(arg2 + 0x118))).q f* zmm4.q
*(arg1 + 0x48) = _mm_cvtpd_ps(zmm1).d

if (rsi_1 s<= 0)
    zmm0_1 = zx.o(0)
else
    zmm0_1.q = *(arg2 + 0xe0) f/ zmm3.q

*(arg1 + 0x4c) = _mm_cvtpd_ps(zmm0_1).d
zmm0_1 = zx.o(0)

if (rsi_1 s> 0)
    zmm0_1.q = float.d(zx.q(*(arg2 + 0xb0)))
    zmm0_1.q = zmm0_1.q f* zmm5
    zmm0_1.q = zmm0_1.q f/ zmm3.q

*(arg1 + 0x50) = _mm_cvtpd_ps(zmm0_1).d
zmm1.q = _mm_cvtepi32_pd(zx.q(*(arg2 + 0x11c))).q f* zmm4.q
*(arg1 + 0x54) = _mm_cvtpd_ps(zmm1).d

if (rsi_1 s<= 0)
    zmm0_1 = zx.o(0)
else
    zmm0_1.q = *(arg2 + 0xe8) f/ zmm3.q

*(arg1 + 0x58) = _mm_cvtpd_ps(zmm0_1).d
zmm0_1 = zx.o(0)

if (rsi_1 s> 0)
    zmm0_1.q = float.d(zx.q(*(arg2 + 0xb4)))
    zmm0_1.q = zmm0_1.q f* zmm5
    zmm0_1.q = zmm0_1.q f/ zmm3.q

*(arg1 + 0x5c) = _mm_cvtpd_ps(zmm0_1).d
zmm1.q = _mm_cvtepi32_pd(zx.q(*(arg2 + 0x120))).q f* zmm4.q
*(arg1 + 0x60) = _mm_cvtpd_ps(zmm1).d

if (rsi_1 s> 0)
    zmm2.q = *(arg2 + 0xf0) f/ zmm3.q

*(arg1 + 0x64) = _mm_cvtpd_ps(zmm2).d

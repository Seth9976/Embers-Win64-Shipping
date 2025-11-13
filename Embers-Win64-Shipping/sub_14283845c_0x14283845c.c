// 函数: sub_14283845c
// 地址: 0x14283845c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = sx.q(arg3) << 5
int64_t r8_1 = sx.q(arg2) << 5
uint128_t zmm1 = zx.o(*(rax_1 + arg1 + 0x28))
uint32_t rax_2 = zx.d(*(arg1 + 6))
uint128_t zmm2
zmm2.d =
    _mm_cvtpd_ps(zx.o(*(rax_1 + arg1 + 0x20))).d f+ _mm_cvtpd_ps(zx.o(*(rax_1 + arg1 + 0x18))).d
uint128_t zmm0
zmm0.q = float.d(rax_2)
zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
zmm1.q = 0x404e000000000000 f- zmm0.q
zmm0 = _mm_cvtpd_ps(zx.o(*(r8_1 + arg1 + 0x18)))
double temp0_4[0x2] = _mm_cvtps_pd(zmm2.q)
zmm2 = zx.o(*(r8_1 + arg1 + 0x20))
temp0_4[0] = temp0_4[0] f* zmm1.q
zmm1 = zx.o(*(r8_1 + arg1 + 0x28))
zmm2.d = _mm_cvtpd_ps(zmm2).d f+ zmm0.d
zmm2.d = zmm2.d f+ _mm_cvtpd_ps(zmm1).d
zmm0 = _mm_cvtps_pd(zmm2.q)
temp0_4[0] = temp0_4[0] f+ zmm0.q
zmm2 = _mm_cvtpd_ps(temp0_4)

if (arg4 == 0)
    zmm1 = _mm_min_ss(0x459c4000, zmm2.d)
    
    if (not(-32768f f< zmm1.d))
        return 0
else
    zmm1 = _mm_min_ss(0x45fa0000, zmm2.d)

double zmm0_1
zmm0_1.d = sub_14283c078(_mm_max_ss(0xc63b8000, zmm1.d).q).d f* *(arg1 + 0xda4)
zmm0_1.d = zmm0_1.d f* 0.015625f
return zx.q(int.d(fconvert.d(zmm0_1.d) + 0.5))

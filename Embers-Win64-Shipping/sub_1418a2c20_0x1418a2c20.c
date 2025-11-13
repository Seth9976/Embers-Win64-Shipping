// 函数: sub_1418a2c20
// 地址: 0x1418a2c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(*(arg1 + 0x18))
int32_t rax = 0

if (0 == *(arg1 + 0x10))
    *(arg1 + 0x10) = 0
else
    rax = *(arg1 + 0x10)

int64_t temp0 = _mm_cvtepi32_pd(zx.q(rax))

if (temp0 f<= 0.0)
    return _mm_cvtpd_ps(zx.o(0))

zmm0[0] = zmm0[0] f/ temp0
return _mm_cvtpd_ps(zmm0)

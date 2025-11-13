// 函数: sub_14060eb00
// 地址: 0x14060eb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.q = _mm_cvtepi32_pd(zx.q(zx.d(arg1 + 0x3c) - 9)).q f* 0.083333333333333329
return powf(0x40000000.d, _mm_cvtpd_ps(zmm0)) * 13.75f

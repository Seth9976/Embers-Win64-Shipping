// 函数: sub_1406101a0
// 地址: 0x1406101a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.q = _mm_cvtepi32_pd(zx.q(zx.d(arg1) - 9)).q f* 0.083333333333333329
return powf(0x40000000.d, _mm_cvtpd_ps(zmm0)) * 13.75f

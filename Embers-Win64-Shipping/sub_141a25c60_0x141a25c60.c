// 函数: sub_141a25c60
// 地址: 0x141a25c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1
zmm1.q = _mm_cvtepi32_pd(zx.q(*arg1)).q f/ _mm_cvtepi32_pd(zx.q(arg1[1]))
return _mm_cvtpd_ps(zmm1)

// 函数: sub_14098c1c0
// 地址: 0x14098c1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.q = *(arg1 + 0x18) f- *(arg1 + 0x10)
zmm0.q = zmm0.q f* 1000.0
return _mm_cvtpd_ps(zmm0)

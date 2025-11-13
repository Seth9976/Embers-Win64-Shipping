// 函数: sub_1423e61c0
// 地址: 0x1423e61c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0xbf800000

uint32_t r8 = zx.d(*(arg2 + 1))

if (r8 == 1)
    uint128_t zmm0
    zmm0.q = *(arg2 + 8) f- *(arg1 + 0x140)
    return _mm_cvtpd_ps(zmm0)

if (r8 == 3)
    return zx.o(0)

return _mm_cvtpd_ps(zx.o(*(arg2 + 8)))

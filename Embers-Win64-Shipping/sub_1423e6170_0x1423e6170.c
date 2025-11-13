// 函数: sub_1423e6170
// 地址: 0x1423e6170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0xbf800000

uint32_t r8 = zx.d(*(arg2 + 1))
uint128_t zmm0

if (r8 != 1 && r8 != 3)
    zmm0.q = _mm_cvtps_pd((*(arg2 + 4)).q).q f- *(arg2 + 8)
    return _mm_cvtpd_ps(zmm0)

zmm0.q = *(arg2 + 8) f- *(arg1 + 0x140)
double zmm1[0x2] = _mm_cvtps_pd((*(arg2 + 4))[0])
zmm1[0] = zmm1[0] f- zmm0.q
return _mm_cvtpd_ps(zmm1)

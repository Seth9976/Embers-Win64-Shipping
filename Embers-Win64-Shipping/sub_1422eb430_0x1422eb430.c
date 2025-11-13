// 函数: sub_1422eb430
// 地址: 0x1422eb430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (0f f!= arg2[2].d || 0f f!= arg2[6].d || 0f f!= *(arg2 + 4) || 0f f!= *(arg2 + 0x34)
        || 0f f!= arg2[1].d || 0f f!= arg2[3].d || 0f f!= *(arg2 + 0xc) || 0f f!= *(arg2 + 0x1c)
        || 1f f!= *(arg2 + 0x2c) || 0f f!= *(arg2 + 0x3c))
    sub_140631b10(arg2, arg1)
    return arg1

float zmm0[0x2] = *arg2
uint128_t zmm3 = -0x8000000000000000
int128_t zmm1 = _mm_cvtps_pd(arg2[4].d.q)
uint128_t zmm6 = 0x3ff0000000000000
uint128_t zmm7
zmm7.q = zmm6.q f/ _mm_cvtps_pd(zmm0)
zmm1.q = zmm1.q f* zmm7.q
int128_t zmm8
zmm8.d = fconvert.s((zmm1 ^ zmm3).q)
uint128_t zmm2
zmm2.q = zmm6.q f/ _mm_cvtps_pd(*(arg2 + 0x14))
zmm0 = arg2[7].d
zmm1.q = _mm_cvtps_pd((*(arg2 + 0x24)).q).q f* zmm2.q
zmm6.q = zmm6.q f/ _mm_cvtps_pd(zmm0)
int32_t zmm5 = fconvert.s((zmm1 ^ zmm3).q)
zmm1 = _mm_cvtps_pd(arg2[5].d.q)
*(arg1 + 4) = 0
*(arg1 + 0xc) = 0
__builtin_memset(&arg1[6], 0, 0x14)
zmm0 = _mm_cvtpd_ps(zmm7)
arg1[0xe] = 0x3f800000
zmm1.q = zmm1.q f* zmm6.q
zmm2 = _mm_cvtpd_ps(zmm2)
arg1[0xc] = zmm8.d
arg1[0xb] = _mm_cvtpd_ps(zmm6).d
arg1[0xf] = fconvert.s((zmm1 ^ zmm3).q)
*arg1 = zmm0[0]
arg1[5] = zmm2.d
arg1[0xd] = zmm5
return arg1

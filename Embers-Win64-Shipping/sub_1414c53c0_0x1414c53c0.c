// 函数: sub_1414c53c0
// 地址: 0x1414c53c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = arg1[2]
int128_t zmm0 = *arg1
int128_t zmm1 = arg1[1]
float zmm4[0x2] = zmm3:4.d
zmm4[0] = zmm4[0] f- *(arg1 + 0x3a4)
zmm3.d = zmm3.d f- arg1[0x3a].d
int128_t var_78 = zmm0
uint128_t var_58
var_58:4.d = zmm4[0]
var_58.d = zmm3.d
int128_t var_68 = zmm1
int128_t var_48 = arg1[3]

if (zmm1.d f!= 0f || var_48.d.d f!= 0f || var_78:4.d.d f!= 0f || var_48:4.d.d f!= 0f
        || var_78:8.d.d f!= 0f || var_68:8.d.d f!= 0f || var_78:0xc.d.d f!= 0f
        || var_68:0xc.d.d f!= 0f || var_58:0xc.d.d f!= 1f || var_48:0xc.d.d f!= 0f)
    sub_140631b10(&var_78, arg2)
    return arg2

zmm0 = var_78.d
zmm1.q = fconvert.d(zmm3.d)
arg2[0xe] = 0x3f800000
zmm3 = -0x8000000000000000
uint128_t zmm6 = 0x3ff0000000000000
uint128_t zmm7
zmm7.q = zmm6.q f/ _mm_cvtps_pd(zmm0.q).q
zmm1.q = zmm1.q f* zmm7.q
int128_t zmm8
zmm8.d = fconvert.s((zmm1 ^ zmm3).q)
uint128_t zmm2
zmm2.q = zmm6.q f/ _mm_cvtps_pd(var_68:4.d.q).q
zmm1.q = _mm_cvtps_pd(zmm4).q f* zmm2.q
zmm4 = (zx.o(0)).q
zmm6.q = zmm6.q f/ _mm_cvtps_pd(var_48:8.d.q).q
arg2[0xc] = zmm8.d
int32_t zmm5 = fconvert.s((zmm1 ^ zmm3).q)
zmm1 = _mm_cvtps_pd(var_58:8.d.q)
*(arg2 + 4) = 0
*(arg2 + 0xc) = 0
__builtin_memset(&arg2[6], 0, 0x14)
zmm0 = _mm_cvtpd_ps(zmm7)
zmm1.q = zmm1.q f* zmm6.q
zmm2 = _mm_cvtpd_ps(zmm2)
zmm1 ^= zmm3
*arg2 = zmm0.d
zmm3 = _mm_cvtpd_ps(zmm6)
zmm4[0] = fconvert.s(zmm1.q)
arg2[0xb] = zmm3.d
arg2[0xf] = zmm4[0]
arg2[5] = zmm2.d
arg2[0xd] = zmm5
return arg2

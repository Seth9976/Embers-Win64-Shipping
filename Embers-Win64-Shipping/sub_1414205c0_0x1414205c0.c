// 函数: sub_1414205c0
// 地址: 0x1414205c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x2] = *(arg1 + 0x24)
uint128_t zmm2
zmm2.d = arg1[2].d.d f- arg1[0x3a].d
zmm4[0] = zmm4[0] f- *(arg1 + 0x3a4)
arg1[2].d = zmm2.d
*(arg1 + 0x24) = zmm4[0]
uint32_t var_78[0x4]
int128_t var_68
uint32_t var_58[0x4]
int128_t var_48
int128_t zmm1

if (0f f!= arg1[1].d || 0f f!= arg1[3].d || 0f f!= *(arg1 + 4) || 0f f!= *(arg1 + 0x34)
        || 0f f!= *(arg1 + 8) || 0f f!= *(arg1 + 0x18) || 0f f!= *(arg1 + 0xc)
        || 0f f!= *(arg1 + 0x1c) || 1f f!= *(arg1 + 0x2c) || 0f f!= *(arg1 + 0x3c))
    sub_140631b10(arg1, &var_78)
else
    uint128_t zmm3 = -0x8000000000000000
    uint128_t zmm6 = 0x3ff0000000000000
    uint32_t zmm0[0x4] = _mm_cvtps_pd((*arg1)[0].q)
    __builtin_memset(&var_78[1], 0, 0x10)
    __builtin_memset(&var_68:8, 0, 0x14)
    uint128_t zmm7
    zmm7.q = zmm6.q f/ zmm0[0].q
    var_48:8.d = 0x3f800000
    zmm0 = *(arg1 + 0x14)
    zmm1.q = _mm_cvtps_pd(zmm2.q).q f* zmm7.q
    zmm2.q = zmm6.q f/ _mm_cvtps_pd(zmm0[0].q)[0].q
    zmm0 = *(arg1 + 0x38)
    int128_t zmm8
    zmm8.d = fconvert.s((zmm1 ^ zmm3).q)
    zmm1.q = _mm_cvtps_pd(zmm4).q f* zmm2.q
    zmm4 = (zx.o(0)).q
    zmm6.q = zmm6.q f/ _mm_cvtps_pd(zmm0[0].q)[0].q
    var_48.d = zmm8.d
    int32_t zmm5 = fconvert.s((zmm1 ^ zmm3).q)
    zmm1 = _mm_cvtps_pd((*(arg1 + 0x28)).q)
    zmm0 = _mm_cvtpd_ps(zmm7)
    zmm1.q = zmm1.q f* zmm6.q
    zmm2 = _mm_cvtpd_ps(zmm2)
    zmm1 ^= zmm3
    var_78[0] = zmm0[0]
    zmm3 = _mm_cvtpd_ps(zmm6)
    zmm4[0] = fconvert.s(zmm1.q)
    var_58[3] = zmm3.d
    var_48:0xc.d = zmm4[0]
    var_68:4.d = zmm2.d
    var_48:4.d = zmm5

zmm1 = var_68
arg1[8] = var_78
arg1[9] = zmm1
arg1[0xa] = var_58
arg1[0xb] = var_48
arg1[0x3a].d = data_143dbb1f0.d[0]
*(arg1 + 0x3a4) = data_143dbb1f0:4.d.d
return sub_141366e50(arg1) __tailcall

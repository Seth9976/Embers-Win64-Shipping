// 函数: sub_142a061f0
// 地址: 0x142a061f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t zmm6[0x20]
zmm6[0].o = zx.o(0)
int64_t i_1 = 8
int128_t var_60 = zmm6[0].o
int16_t zmm7[0x10] = zmm6
int32_t zmm8[0x8] = zmm6
uint8_t result[0x20]
uint128_t zmm1[0x2]
uint8_t zmm2[0x20]
uint128_t zmm4[0x2]
uint128_t temp0_2[0x2]
int16_t temp0_5[0x10]
int64_t i

do
    zmm1[0] = *arg1
    uint128_t temp0_1[0x2] = __vinserti128_ymmqq_ymmqq_memdq_immb(zmm1, *(sx.q(arg2) + arg1), 1)
    zmm1[0] = *arg3
    temp0_2 = __vinserti128_ymmqq_ymmqq_memdq_immb(zmm1, *(sx.q(arg4) + arg3), 1)
    temp0_5 =
        _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_1, zmm6), _mm256_unpacklo_epi8(temp0_2, zmm6))
    zmm4 =
        _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_1, zmm6), _mm256_unpackhi_epi8(temp0_2, zmm6))
    zmm1 = _mm256_add_epi16(zmm4, temp0_5)
    zmm2 = _mm256_madd_epi16(temp0_5, temp0_5)
    result = _mm256_madd_epi16(zmm4, zmm4)
    zmm7 = _mm256_add_epi16(zmm1, zmm7)
    arg1 += zx.q(arg2 * 2)
    arg3 += zx.q(arg4 * 2)
    zmm1 = _mm256_add_epi32(result, zmm2)
    zmm8 = _mm256_add_epi32(zmm1, zmm8)
    i = i_1
    i_1 -= 1
while (i != 1)
zmm6[0].o = var_60
zmm1[0] = _mm256_extractf128_ps(zmm7[0].o, 1)
zmm4[0] = __vpaddw_xmmdq_xmmdq_xmmdq(zmm1[0], zmm7[0].o)
result[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0])
temp0_2[0] = __vpsrad_xmmdq_xmmdq_immb(result[0].o, 0x10)
zmm1[0] = __vpunpcklwd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0])
zmm2[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
temp0_5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm8[0].o)
zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0], 0x10)
zmm1[0] = __vpunpckhdq_xmmdq_xmmdq_xmmdq(temp0_5[0].o, zmm6[0].o)
result[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(temp0_5[0].o, zmm6[0].o)
zmm4[0] = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_2[0], zmm2[0].o)
temp0_2[0] = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0], result[0].o)
result[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm4[0], zmm6[0].o)
zmm1[0] = __vpsrldq_xmmdq_xmmdq_immb(temp0_2[0], 8)
zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm4[0], zmm6[0].o)
temp0_5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, result[0].o)
result[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0], temp0_2[0])
*arg5 = result[0].d
result[0].o = __vpsrldq_xmmdq_xmmdq_immb(temp0_5[0].o, 8)
zmm1[0] = __vpaddd_xmmdq_xmmdq_xmmdq(result[0].o, temp0_5[0].o)
*arg6 = zmm1[0].d
_mm256_zeroupper()
return result

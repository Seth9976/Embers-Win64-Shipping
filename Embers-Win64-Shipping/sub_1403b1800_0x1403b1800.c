// 函数: sub_1403b1800
// 地址: 0x1403b1800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char zmm6[0x10]
char arg_8[0x10] = zmm6
int32_t zmm7[0x4]
int32_t arg_18[0x4] = zmm7
int16_t zmm4[0x8] = *arg6
int16_t temp0[0x8] = _mm_packs_epi16(zmm4, zmm4)
int32_t result[0x4] = _mm_shufflelo_epi16(temp0, 0)
uint16_t temp0_2[0x8] = _mm_shufflelo_epi16(temp0, 0x55)
uint16_t temp0_3[0x8] = _mm_shufflelo_epi16(temp0, 0xaa)
uint16_t temp0_4[0x8] = _mm_shufflelo_epi16(temp0, 0xff)
int32_t temp0_5[0x4] = _mm_unpacklo_epi64(result, result[0].q)
uint16_t var_f8[0x8] = _mm_unpacklo_epi64(temp0_2, temp0_2[0].q)
uint16_t var_e8[0x8] = _mm_unpacklo_epi64(temp0_3, temp0_3[0].q)
uint16_t var_d8[0x8] = _mm_unpacklo_epi64(temp0_4, temp0_4[0].q)
int32_t zmm12[0x4] = *u"@@@@@@@@"
int32_t i_1 = arg5 - 1
int64_t* rdi_1 = arg1 + arg2
int64_t rsi_1 = arg2 * 6
uint16_t zmm2[0x8]
uint16_t zmm3[0x8]
int32_t i

do
    uint16_t zmm1[0x8] = zx.o(*rdi_1)
    int32_t temp0_9[0x4] = _mm_unpacklo_epi8(zx.o(*arg1), zmm1[0].q)
    zmm2 = zx.o(*(arg1 + (arg2 << 1)))
    result = __pmaddubsw_xmmdq_memdq(temp0_9, temp0_5)
    zmm6 = zmm2
    zmm3 = zx.o(*(rdi_1 + (arg2 << 1)))
    zmm2 = __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zmm2, zmm3[0].q), var_f8)
    zmm4 = zx.o(*(arg1 + (arg2 << 2)))
    zmm7 = zmm4
    uint128_t zmm5 = zx.o(*(rdi_1 + (arg2 << 2)))
    zmm4 = __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zmm4, zmm5.q), var_e8)
    zmm1 = _mm_unpacklo_epi8(zmm1, zmm6[0].q)
    zmm6 = zx.o(*(arg1 + rsi_1))
    zmm5 = _mm_unpacklo_epi8(zmm5, zmm6[0].q)
    zmm3 = _mm_unpacklo_epi8(zmm3, zmm7[0].q)
    zmm5 = __pmaddubsw_xmmdq_memdq(zmm5, var_e8)
    zmm7 = zx.o(*(rdi_1 + rsi_1))
    char temp0_20[0x10] = __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zmm6, zmm7[0].q), var_d8)
    zmm3 = __pmaddubsw_xmmdq_memdq(zmm3, var_f8)
    zmm1 = __pmaddubsw_xmmdq_memdq(zmm1, temp0_5)
    int32_t temp0_23[0x4] = _mm_adds_epi16(result, zmm4)
    zmm2 = _mm_adds_epi16(zmm2, temp0_20)
    zmm7 = __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zmm7, zx.o(arg1[arg2])[0].q), var_d8)
    result = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_23, zmm2), zmm12), 7)
    zmm1 = _mm_adds_epi16(zmm1, zmm5)
    result = _mm_packus_epi16(result, result)
    zmm1 =
        _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm1, _mm_adds_epi16(zmm3, zmm7)), zmm12), 7)
    arg1 += arg2 << 1
    rdi_1 += arg2 << 1
    zmm1 = _mm_packus_epi16(zmm1, zmm1)
    result = _mm_avg_epu8(result, zx.o(*arg3))
    *arg3 = result[0].q
    void* r8 = arg3 + arg4
    *r8 = _mm_avg_epu8(zmm1, zx.o(*r8))[0].q
    arg3 = r8 + arg4
    i = i_1
    i_1 -= 2
while (i s> 2)

if (i == 2)
    zmm6 = zx.o(*(arg1 + rsi_1))
    int32_t temp0_39[0x4] = _mm_unpacklo_epi8(zx.o(*arg1), zx.o(*(arg1 + arg2))[0].q)
    zmm7 = zx.o(*(rdi_1 + rsi_1))
    result = __pmaddubsw_xmmdq_memdq(temp0_39, temp0_5)
    zmm2 = zx.o(*(arg1 + (arg2 << 1)))
    zmm6 = _mm_unpacklo_epi8(zmm6, zmm7[0].q)
    zmm3 = zx.o(*(rdi_1 + (arg2 << 1)))
    char temp0_42[0x10] = __pmaddubsw_xmmdq_memdq(zmm6, var_d8)
    zmm4 = zx.o(*(arg1 + (arg2 << 2)))
    zmm2 = _mm_unpacklo_epi8(zmm2, zmm3[0].q)
    zmm4 = _mm_unpacklo_epi8(zmm4, *(rdi_1 + (arg2 << 2)))
    zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, var_f8)
    zmm4 = __pmaddubsw_xmmdq_memdq(zmm4, var_e8)
    zmm2 = _mm_adds_epi16(zmm2, temp0_42)
    result =
        _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(result, zmm4), zmm2), zmm12), 7)
    result = _mm_avg_epu8(_mm_packus_epi16(result, result), zx.o(*arg3))
    *arg3 = result[0].q

return result

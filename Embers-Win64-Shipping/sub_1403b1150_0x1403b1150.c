// 函数: sub_1403b1150
// 地址: 0x1403b1150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char zmm6[0x10]
char arg_8[0x10] = zmm6
int32_t zmm7[0x4]
int32_t arg_18[0x4] = zmm7
int32_t i_1 = arg5
int16_t zmm4[0x8] = *arg6
int16_t temp0[0x8] = _mm_packs_epi16(zmm4, zmm4)
int32_t result[0x4] = _mm_shufflelo_epi16(temp0, 0)
uint16_t temp0_2[0x8] = _mm_shufflelo_epi16(temp0, 0x55)
uint16_t temp0_3[0x8] = _mm_shufflelo_epi16(temp0, 0xaa)
int32_t zmm3[0x4] = _mm_shufflelo_epi16(temp0, 0xff)
int32_t temp0_5[0x4] = _mm_unpacklo_epi64(result, result[0].q)
uint16_t zmm1[0x8] = _mm_unpacklo_epi64(temp0_2, temp0_2[0].q)
uint16_t zmm2[0x8] = _mm_unpacklo_epi64(temp0_3, temp0_3[0].q)
int32_t temp0_8[0x4] = _mm_unpacklo_epi64(zmm3, zmm3[0].q)
uint16_t var_108[0x8] = zmm1
uint16_t var_f8[0x8] = zmm2
int32_t zmm12[0x4] = *u"@@@@@@@@"
int64_t* rdi = arg1 + arg2
int64_t rsi_1 = arg2 * 6
int32_t i

do
    zmm2 = zx.o(*(arg1 + (arg2 << 1)))
    zmm3 = zx.o(*(rdi + (arg2 << 1)))
    zmm4 = zx.o(*(arg1 + (arg2 << 2)))
    int64_t zmm5 = *(rdi + (arg2 << 2))
    int32_t temp0_9[0x4] = _mm_unpacklo_epi8(zx.o(*arg1), zx.o(*rdi)[0].q)
    zmm6 = zx.o(*(arg1 + rsi_1))
    zmm2 = _mm_unpacklo_epi8(zmm2, zmm3[0].q)
    zmm7 = zx.o(*(rdi + rsi_1))
    zmm4 = _mm_unpacklo_epi8(zmm4, zmm5)
    result = __pmaddubsw_xmmdq_memdq(temp0_9, temp0_5)
    zmm3 = zx.o(arg1[1])
    zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, var_108)
    zmm6 = _mm_unpacklo_epi8(zmm6, zmm7[0].q)
    zmm5 = *(arg1 + arg2 + 8)
    zmm4 = __pmaddubsw_xmmdq_memdq(zmm4, var_f8)
    int32_t temp0_16[0x4] = _mm_unpacklo_epi8(zmm3, zmm5)
    zmm7 = zx.o(*(arg1 + (arg2 << 1) + 8))
    char temp0_17[0x10] = __pmaddubsw_xmmdq_memdq(zmm6, temp0_8)
    int32_t temp0_18[0x4] = _mm_unpacklo_epi8(zmm7, *(rdi + (arg2 << 1) + 8))
    zmm2 = _mm_adds_epi16(zmm2, temp0_17)
    zmm3 = __pmaddubsw_xmmdq_memdq(temp0_16, temp0_5)
    zmm1 = zx.o(*(arg1 + (arg2 << 2) + 8))
    int32_t temp0_21[0x4] = _mm_adds_epi16(result, zmm4)
    zmm7 = __pmaddubsw_xmmdq_memdq(temp0_18, var_108)
    zmm1 = _mm_unpacklo_epi8(zmm1, zx.o(*(rdi + (arg2 << 2) + 8))[0].q)
    int32_t temp0_25[0x4] = _mm_adds_epi16(_mm_adds_epi16(temp0_21, zmm2), zmm12)
    zmm2 = zx.o(*(arg1 + rsi_1 + 8))
    zmm1 = __pmaddubsw_xmmdq_memdq(zmm1, var_f8)
    zmm5 = *(rdi + rsi_1 + 8)
    result = _mm_srai_epi16(temp0_25, 7)
    int32_t temp0_30[0x4] =
        _mm_adds_epi16(zmm7, __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zmm2, zmm5), temp0_8))
    result = _mm_packus_epi16(result, 
        _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm3, zmm1), temp0_30), zmm12), 
            7))
    arg1 += arg2
    rdi += arg2
    *arg3 = result
    arg3 += arg4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

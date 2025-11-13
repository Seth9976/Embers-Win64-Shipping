// 函数: sub_1403be020
// 地址: 0x1403be020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = _mm_shufflelo_epi16(zx.o(arg5), 0)
zmm0 = _mm_unpacklo_epi64(zmm0, zmm0.q)
int32_t temp0_2[0x4] = _mm_sub_epi16(data_14427f110, zmm0)
int16_t (* result)[0x8] = arg1
int32_t (* rdx)[0x4] = arg3
int64_t i_1 = 0x10
int64_t i

do
    int16_t zmm2[0x8] = *result
    int32_t zmm4[0x4] = *rdx
    result += arg2
    int32_t zmm3[0x4] = zmm2
    zmm2 = _mm_unpacklo_epi8(zmm2, 0)
    int32_t temp0_4[0x4] = _mm_unpackhi_epi8(zmm3, 0)
    zmm2 = _mm_mullo_epi16(zmm2, zmm0)
    int32_t temp0_6[0x4] = _mm_mullo_epi16(temp0_4, zmm0)
    int32_t temp0_7[0x4] = _mm_unpacklo_epi8(zmm4, 0)
    int32_t temp0_8[0x4] = _mm_unpackhi_epi8(zmm4, 0)
    int32_t temp0_9[0x4] = _mm_mullo_epi16(temp0_7, temp0_2)
    int32_t temp0_10[0x4] = _mm_mullo_epi16(temp0_8, temp0_2)
    int16_t temp0_11[0x8] = _mm_add_epi16(zmm2, temp0_9)
    zmm3 = _mm_add_epi16(temp0_6, temp0_10)
    int16_t temp0_13[0x8] = __paddw_xmmdq_memdq(temp0_11, data_14427f120)
    zmm3 = __paddw_xmmdq_memdq(zmm3, data_14427f120)
    *rdx = _mm_packus_epi16(_mm_srli_epi16(temp0_13, 4), _mm_srli_epi16(zmm3, 4))
    rdx += arg4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

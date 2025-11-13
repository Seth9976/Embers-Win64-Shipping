// 函数: sub_1429ec5d0
// 地址: 0x1429ec5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4[0x4] = *u"@@@@@@@"
int16_t zmm1[0x8] = *arg6
int32_t zmm7[0x4] = data_1435ff780
int16_t temp0[0x8] = _mm_packs_epi16(zmm1, zmm1)
uint16_t result[0x8] = _mm_shufflelo_epi16(temp0, 0)
zmm1 = _mm_shufflelo_epi16(temp0, 0xaa)
int32_t zmm8[0x4] = data_1435ff790
uint16_t temp0_3[0x8] = _mm_shufflehi_epi16(zmm1, 0xff)
uint16_t temp0_4[0x8] = _mm_shufflehi_epi16(result, 0x55)

if (arg5 != 0)
    char (* rcx)[0x10] = arg1 - 3
    uint64_t i_1 = zx.q(arg5)
    uint64_t i
    
    do
        char zmm3[0x10] = *rcx
        rcx = &(*rcx)[arg2]
        result = _mm_shuffle_epi8(zmm3, zmm7)
        zmm3 = _mm_shuffle_epi8(zmm3, zmm8)
        result = _mm_maddubs_epi16(result, temp0_4)
        char temp0_8[0x10] = _mm_maddubs_epi16(zmm3, temp0_3)
        zmm1 = _mm_bsrli_si128(result, 8)
        int32_t temp0_11[0x4] = _mm_adds_epi16(_mm_bsrli_si128(temp0_8, 8), result)
        result = _mm_min_epi16(zmm1, temp0_8)
        zmm1 = _mm_max_epi16(zmm1, temp0_8)
        int32_t zmm2[0x4] = _mm_srai_epi16(
            _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_11, result), zmm1), zmm4), 7)
        *arg3 = _mm_packus_epi16(zmm2, zmm2)[0]
        arg3 += arg4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

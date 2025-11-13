// 函数: sub_1429ec6b0
// 地址: 0x1429ec6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = arg6
int32_t zmm8[0x4] = *u"@@@@@@@"
int32_t zmm9[0x4] = data_1435ff7a0
int32_t zmm10[0x4] = data_1435ff7b0
int32_t zmm11[0x4] = data_1435ff7c0
int32_t zmm12[0x4] = data_1435ff7d0
int16_t zmm4[0x8] = *result
int16_t temp0[0x8] = _mm_packs_epi16(zmm4, zmm4)
int16_t zmm5[0x8] = __pshufb_xmmdq_memdq(temp0, data_1435ff7f0)
int16_t zmm6[0x8] = __pshufb_xmmdq_memdq(temp0, data_1435ff810)
int16_t zmm7[0x8] = __pshufb_xmmdq_memdq(temp0, data_1435ff820)
zmm4 = __pshufb_xmmdq_memdq(temp0, data_1435ff840)

if (arg5 != 0)
    result = arg1 - 3
    uint64_t i_1 = zx.q(arg5)
    uint64_t i
    
    do
        char zmm0[0x10] = *result
        result += arg2
        char zmm2[0x10] = zmm0
        char zmm1[0x10] = zmm0
        char temp0_6[0x10] = _mm_maddubs_epi16(_mm_shuffle_epi8(zmm0, zmm12), zmm4)
        zmm0 = _mm_shuffle_epi8(zmm0, zmm9)
        zmm2 = _mm_shuffle_epi8(zmm2, zmm10)
        char temp0_9[0x10] = _mm_maddubs_epi16(zmm0, zmm5)
        char temp0_10[0x10] = _mm_maddubs_epi16(zmm2, zmm6)
        zmm1 = _mm_shuffle_epi8(zmm1, zmm11)
        char zmm3[0x10] = _mm_adds_epi16(temp0_6, temp0_9)
        char temp0_13[0x10] = _mm_maddubs_epi16(zmm1, zmm7)
        zmm0 = _mm_min_epi16(temp0_10, temp0_13)
        zmm2 = _mm_max_epi16(temp0_10, temp0_13)
        zmm3 = _mm_srai_epi16(
            _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm3, zmm0), zmm2), zmm8), 7)
        *arg3 = _mm_packus_epi16(zmm3, zmm3)[0].q
        arg3 += arg4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

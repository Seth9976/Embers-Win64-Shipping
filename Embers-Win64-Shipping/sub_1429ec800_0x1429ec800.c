// 函数: sub_1429ec800
// 地址: 0x1429ec800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*arg1)
uint128_t zmm6 = zx.o(*(arg1 + arg2))
uint128_t zmm7 = zx.o(*(arg1 + (arg2 << 1)))
uint128_t zmm9 = zx.o(*(arg1 + (arg2 << 2)))
int16_t zmm5[0x8] = *arg6
int32_t zmm15[0x4] = *u"@@@@@@@"
uint128_t zmm8 = zx.o(*(arg2 * 3 + arg1))
uint128_t zmm10 = zx.o(*(arg2 * 5 + arg1))
void* result = arg2 * 3
uint128_t zmm11 = zx.o(*(arg1 + (result << 1)))
uint64_t i_1 = zx.q(arg5)
int16_t temp0[0x8] = _mm_packs_epi16(zmm5, zmm5)
int16_t zmm12[0x8] = __pshufb_xmmdq_memdq(temp0, data_1435ff7f0)
int16_t zmm13[0x8] = __pshufb_xmmdq_memdq(temp0, data_1435ff810)
int16_t zmm14[0x8] = __pshufb_xmmdq_memdq(temp0, data_1435ff820)
zmm5 = __pshufb_xmmdq_memdq(temp0, data_1435ff840)

if (i_1.d != 0)
    result = arg2 * 7 + arg1
    uint64_t i
    
    do
        uint128_t zmm4 = zx.o(*result)
        char temp0_6[0x10] = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm11, zmm4.q), zmm5)
        result += arg2
        zmm0 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm0, zmm6.q), zmm12)
        int32_t temp0_9[0x4] = _mm_unpacklo_epi8(zmm9, zmm10.q)
        uint128_t zmm2 = _mm_unpacklo_epi8(zmm7, zmm8.q)
        int32_t zmm1[0x4] = _mm_maddubs_epi16(temp0_9, zmm14)
        zmm2 = _mm_maddubs_epi16(zmm2, zmm13)
        char zmm3[0x10] = _mm_adds_epi16(temp0_6, zmm0)
        zmm0 = _mm_min_epi16(zmm1, zmm2)
        int32_t temp0_15[0x4] = _mm_max_epi16(zmm1, zmm2)
        zmm3 = _mm_adds_epi16(zmm3, zmm0)
        zmm0 = zmm6
        zmm6 = zmm7
        zmm7 = zmm8
        zmm3 = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm3, temp0_15), zmm15), 7)
        zmm8 = zmm9
        zmm9 = zmm10
        *arg3 = _mm_packus_epi16(zmm3, zmm3)[0].q
        zmm10 = zmm11
        arg3 += arg4
        zmm11 = zmm4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

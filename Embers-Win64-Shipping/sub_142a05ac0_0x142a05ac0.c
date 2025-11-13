// 函数: sub_142a05ac0
// 地址: 0x142a05ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int32_t zmm6[0x4]
int32_t var_18[0x4] = zmm6
int32_t r9 = 0
*arg5 = 0
int64_t i_1 = 2
void* r11_1 = arg3 - arg1
int64_t i

do
    int128_t* rax_1 = r11_1 + arg1
    int128_t* rdx = arg1
    int16_t zmm5[0x8] = zx.o(0)
    zmm6 = zx.o(0)
    int64_t j_1 = 0x10
    int32_t zmm2[0x4]
    int64_t j
    
    do
        int32_t zmm3[0x4] = *rdx
        rdx += sx.q(arg2)
        int32_t zmm1[0x4] = *rax_1
        rax_1 += sx.q(arg4)
        int32_t temp0_1[0x4] = _mm_unpackhi_epi8(zmm3, 0)
        int32_t temp0_2[0x4] = _mm_unpacklo_epi8(zmm3, 0)
        int32_t temp0_3[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        int32_t temp0_4[0x4] = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_5[0x4] = _mm_sub_epi16(temp0_2, temp0_3)
        int32_t temp0_6[0x4] = _mm_sub_epi16(temp0_1, temp0_4)
        zmm2 = _mm_madd_epi16(temp0_5, temp0_5)
        zmm5 = _mm_add_epi16(_mm_add_epi16(temp0_5, zmm5), temp0_6)
        zmm3 = _mm_madd_epi16(temp0_6, temp0_6)
        zmm6 = _mm_add_epi32(_mm_add_epi32(zmm2, zmm6), zmm3)
        j = j_1
        j_1 -= 1
    while (j != 1)
    arg1 = &arg1[1]
    int32_t zmm0[0x4] = _mm_add_epi16(_mm_bsrli_si128(zmm5, 8), zmm5)
    int32_t temp0_16[0x4] = _mm_add_epi32(_mm_bsrli_si128(zmm6, 8), zmm6)
    zmm2 = _mm_add_epi16(_mm_bsrli_si128(zmm0, 4), zmm0)
    r9 += _mm_add_epi32(_mm_bsrli_si128(temp0_16, 4), temp0_16)[0]
    int16_t temp0_21 = _mm_extract_epi16(zmm2, 1)
    *arg5 = r9
    r10 = r10 + sx.d(_mm_extract_epi16(zmm2, 0)) + sx.d(temp0_21)
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rcx = sx.q(r10)
return zx.q(r9 - ((rcx * rcx) s>> 9).d)

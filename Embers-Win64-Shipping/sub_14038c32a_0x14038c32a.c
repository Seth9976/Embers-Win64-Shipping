// 函数: sub_14038c32a
// 地址: 0x14038c32a
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = &(*u"@@@@@@@@")[8 + sx.q(arg6) * 8]
int64_t zmm0
uint128_t zmm1
int32_t zmm2[0x4]
uint128_t zmm3
char zmm5[0x10]
char zmm6[0x10]
char zmm7[0x10]

if (0 == *rax)
    zmm6 = *(rax + 0x100)
    zmm7 = *(rax + 0x80)
    void* rsi_1 = arg1
    int64_t rdx_3 = sx.q(arg2)
    int64_t* rdi_1 = arg3
    int64_t i_3 = sx.q(arg5)
    void* rax_4 = rsi_1 + rdx_3
    int64_t i
    
    do
        zmm3 = zx.o(*(rsi_1 + (rdx_3 << 1)))
        zmm0 = *(rsi_1 + (rdx_3 << 2))
        int32_t temp0_23[0x4] = _mm_unpacklo_epi8(zx.o(*(rsi_1 + rdx_3)), *(rax_4 + (rdx_3 << 1)))
        zmm3 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm3, zmm0), zmm6)
        zmm2 = _mm_maddubs_epi16(temp0_23, zmm7)
        zmm5 = zx.o(*(rsi_1 + rdx_3 + 8))
        zmm1 = zx.o(*(rsi_1 + (rdx_3 << 1) + 8))
        uint128_t zmm4 = zx.o(*(rax_4 + (rdx_3 << 1) + 8))
        zmm0 = *(rsi_1 + (rdx_3 << 2) + 8)
        zmm2 =
            _mm_srai_epi16(_mm_adds_epi16(__paddsw_xmmdq_memdq(zmm2, (*@@@@@@@@")[0].o), zmm3), 7)
        zmm2 = _mm_packus_epi16(zmm2, zmm2)
        zmm5 = _mm_unpacklo_epi8(zmm5, zmm4.q)
        zmm1 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm1, zmm0), zmm6)
        rsi_1 += rdx_3
        rax_4 += rdx_3
        zmm5 = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(_mm_maddubs_epi16(zmm5, zmm7), zmm1), 
            (*@@@@@@@@")[0].o), 7)
        *rdi_1 = _mm_unpacklo_epi64(zmm2, _mm_packus_epi16(zmm5, zmm5)[0].q)
        rdi_1 += sx.q(arg4)
        i = i_3
        i_3 -= 1
    while (i != 1)
    return rax_4

zmm5 = *rax
zmm6 = *(rax + 0x100)
zmm7 = *(rax + 0x80)
int64_t* rsi = arg1
int64_t rdx_2 = sx.q(arg2)
int64_t* rdi = arg3
int64_t i_2 = sx.q(arg5)
void* rax_2 = rsi + rdx_2
int64_t i_1

do
    zmm1 = zx.o(*rsi)
    zmm3 = zx.o(*(rsi + (rdx_2 << 1)))
    zmm0 = *(rsi + (rdx_2 << 2))
    int32_t temp0_1[0x4] = _mm_unpacklo_epi8(zx.o(*(rsi + rdx_2)), *(rax_2 + (rdx_2 << 1)))
    zmm3 = _mm_unpacklo_epi8(zmm3, zmm0)
    zmm0 = *(rax_2 + (rdx_2 << 2))
    zmm3 = _mm_maddubs_epi16(zmm3, zmm6)
    zmm1 = _mm_unpacklo_epi8(zmm1, zmm0)
    zmm2 = _mm_maddubs_epi16(temp0_1, zmm7)
    zmm1 = _mm_maddubs_epi16(zmm1, zmm5)
    zmm2 = _mm_srai_epi16(__paddsw_xmmdq_memdq(_mm_adds_epi16(_mm_adds_epi16(zmm2, zmm3), zmm1), 
        (*@@@@@@@@")[0].o), 7)
    *rdi = _mm_packus_epi16(zmm2, zmm2)[0].q
    zmm1 = zx.o(rsi[1])
    zmm3 = zx.o(*(rsi + (rdx_2 << 1) + 8))
    zmm0 = *(rsi + (rdx_2 << 2) + 8)
    int32_t temp0_12[0x4] = _mm_unpacklo_epi8(zx.o(*(rsi + rdx_2 + 8)), *(rax_2 + (rdx_2 << 1) + 8))
    zmm3 = _mm_unpacklo_epi8(zmm3, zmm0)
    zmm0 = *(rax_2 + (rdx_2 << 2) + 8)
    zmm3 = _mm_maddubs_epi16(zmm3, zmm6)
    zmm1 = _mm_unpacklo_epi8(zmm1, zmm0)
    zmm2 = _mm_maddubs_epi16(temp0_12, zmm7)
    zmm1 = _mm_maddubs_epi16(zmm1, zmm5)
    rsi += rdx_2
    rax_2 += rdx_2
    zmm2 = _mm_srai_epi16(__paddsw_xmmdq_memdq(_mm_adds_epi16(_mm_adds_epi16(zmm2, zmm3), zmm1), 
        (*@@@@@@@@")[0].o), 7)
    rdi[1] = _mm_packus_epi16(zmm2, zmm2)[0].q
    rdi += sx.q(arg4)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return rax_2

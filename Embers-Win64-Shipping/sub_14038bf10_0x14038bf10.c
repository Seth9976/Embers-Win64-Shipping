// 函数: sub_14038bf10
// 地址: 0x14038bf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm7[0x4] = (*u"@@@@@@@@")[0].o
void* rax = &(*u"@@@@@@@@")[8 + sx.q(arg6) * 8]
uint128_t zmm0
uint128_t zmm2
char zmm4[0x10]
char zmm5[0x10]
char zmm6[0x10]

if (0 == *rax)
    zmm5 = *(rax + 0x100)
    zmm6 = *(rax + 0x80)
    int32_t zmm3[0x4] = data_14427e040
    zmm4 = data_14427e050
    void* rsi_1 = arg1
    int64_t rax_2 = sx.q(arg2)
    int64_t i_3 = sx.q(arg5)
    int64_t rdx_3 = sx.q(arg4)
    int64_t* rdi_2 = arg3 - rdx_3
    int64_t i
    
    do
        zmm0 = _mm_unpacklo_epi8(zx.o(*(rsi_1 - 2)), *(rsi_1 + 3))
        zmm2 = zmm0
        zmm0 = _mm_shuffle_epi8(zmm0, zmm3)
        zmm2 = _mm_shuffle_epi8(zmm2, zmm4)
        zmm0 = _mm_maddubs_epi16(zmm0, zmm5)
        rdi_2 += rdx_3
        zmm2 = _mm_maddubs_epi16(zmm2, zmm6)
        rsi_1 += rax_2
        i = i_3
        i_3 -= 1
        zmm0 = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm0, zmm7), zmm2), 7)
        *rdi_2 = _mm_packus_epi16(zmm0, zmm0).q
    while (i != 1)
    return rax_2

zmm4 = *rax
zmm5 = *(rax + 0x100)
zmm6 = *(rax + 0x80)
void* rsi = arg1
int64_t rax_1 = sx.q(arg2)
int64_t i_2 = sx.q(arg5)
int64_t rdx_2 = sx.q(arg4)
int64_t* rdi_1 = arg3 - rdx_2
int64_t i_1

do
    zmm0 = _mm_unpacklo_epi8(zx.o(*(rsi - 2)), *(rsi + 3))
    uint128_t zmm1 = zmm0
    zmm0 = _mm_maddubs_epi16(zmm0, zmm4)
    zmm2 = zmm1
    zmm1 = __pshufb_xmmdq_memdq(zmm1, data_14427e040)
    zmm2 = __pshufb_xmmdq_memdq(zmm2, data_14427e050)
    zmm1 = _mm_maddubs_epi16(zmm1, zmm5)
    rdi_1 += rdx_2
    zmm2 = _mm_maddubs_epi16(zmm2, zmm6)
    rsi += rax_1
    i_1 = i_2
    i_2 -= 1
    zmm0 = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm0, zmm1), _mm_adds_epi16(zmm2, zmm7)), 7)
    *rdi_1 = _mm_packus_epi16(zmm0, zmm0).q
while (i_1 != 1)
return rax_1

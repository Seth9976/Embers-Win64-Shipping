// 函数: sub_14038c54b
// 地址: 0x14038c54b
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = &(*u"@@@@@@@@")[8 + sx.q(arg6) * 8]
int64_t rdx_2 = sx.q(arg2)
int64_t* rdi = arg3
int64_t r8 = sx.q(arg4)
int64_t i_2 = sx.q(arg5)
int64_t zmm0
uint128_t zmm2
uint128_t zmm3
char zmm6[0x10]
char zmm7[0x10]

if (0 == *rax)
    zmm6 = *(rax + 0x100)
    zmm7 = *(rax + 0x80)
    void* rsi_1 = arg1
    void* rax_4 = rsi_1 + rdx_2
    int64_t i
    
    do
        zmm3 = zx.o(*(rsi_1 + (rdx_2 << 1)))
        zmm0 = *(rsi_1 + (rdx_2 << 2))
        zmm2 = _mm_unpacklo_epi8(zx.o(*(rsi_1 + rdx_2)), *(rax_4 + (rdx_2 << 1)))
        zmm3 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm3, zmm0), zmm6)
        rsi_1 += rdx_2
        rax_4 += rdx_2
        zmm2 = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(_mm_maddubs_epi16(zmm2, zmm7), zmm3), 
            (*@@@@@@@@")[0].o), 7)
        *rdi = _mm_packus_epi16(zmm2, zmm2).q
        rdi += r8
        i = i_2
        i_2 -= 1
    while (i != 1)
    return rax_4

char zmm5[0x10] = *rax
zmm6 = *(rax + 0x100)
zmm7 = *(rax + 0x80)
int64_t* rsi = arg1
void* rax_2 = rsi + rdx_2
int64_t i_1

do
    uint128_t zmm1 = zx.o(*rsi)
    zmm3 = zx.o(*(rsi + (rdx_2 << 1)))
    zmm0 = *(rsi + (rdx_2 << 2))
    zmm2 = _mm_unpacklo_epi8(zx.o(*(rsi + rdx_2)), *(rax_2 + (rdx_2 << 1)))
    zmm3 = _mm_unpacklo_epi8(zmm3, zmm0)
    zmm0 = *(rax_2 + (rdx_2 << 2))
    zmm3 = _mm_maddubs_epi16(zmm3, zmm6)
    zmm1 = _mm_unpacklo_epi8(zmm1, zmm0)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm7)
    zmm1 = _mm_maddubs_epi16(zmm1, zmm5)
    rsi += rdx_2
    rax_2 += rdx_2
    zmm2 = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm2, zmm3), zmm1), 
        (*@@@@@@@@")[0].o), 7)
    *rdi = _mm_packus_epi16(zmm2, zmm2).q
    rdi += r8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return rax_2

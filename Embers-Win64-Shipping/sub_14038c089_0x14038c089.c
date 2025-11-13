// 函数: sub_14038c089
// 地址: 0x14038c089
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_18 = zmm7
void* rax = &(*u"@@@@@@@@")[8 + sx.q(arg6) * 8]
uint128_t* rdi = arg3
void* rsi = arg1
char zmm4[0x10] = *rax
char zmm5[0x10] = *(rax + 0x100)
char zmm6[0x10] = *(rax + 0x80)
int64_t result = sx.q(arg2)
int64_t i_1 = sx.q(arg5)
int64_t i

do
    uint128_t zmm0 = _mm_unpacklo_epi8(zx.o(*(rsi - 2)), *(rsi + 3))
    uint128_t zmm1 = zmm0
    zmm0 = _mm_maddubs_epi16(zmm0, zmm4)
    uint128_t zmm2 = zmm1
    zmm1 = __pshufb_xmmdq_memdq(zmm1, data_14427e040)
    zmm2 = __pshufb_xmmdq_memdq(zmm2, data_14427e050)
    uint128_t zmm3 = zx.o(*(rsi + 6))
    zmm1 = _mm_maddubs_epi16(zmm1, zmm5)
    zmm7 = zx.o(*(rsi + 0xb))
    zmm2 = _mm_maddubs_epi16(zmm2, zmm6)
    zmm3 = _mm_unpacklo_epi8(zmm3, zmm7.q)
    zmm0 = _mm_adds_epi16(zmm0, zmm1)
    zmm1 = zmm3
    zmm3 = _mm_maddubs_epi16(zmm3, zmm4)
    zmm0 = _mm_adds_epi16(zmm0, zmm2)
    zmm2 = zmm1
    zmm0 = __paddsw_xmmdq_memdq(zmm0, (*u"@@@@@@@@")[0].o)
    zmm1 = __pshufb_xmmdq_memdq(zmm1, data_14427e040)
    zmm2 = __pshufb_xmmdq_memdq(zmm2, data_14427e050)
    zmm0 = _mm_srai_epi16(zmm0, 7)
    zmm1 = _mm_maddubs_epi16(zmm1, zmm5)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm6)
    zmm0 = _mm_packus_epi16(zmm0, zmm0)
    rsi += result
    zmm3 = _mm_srai_epi16(__paddsw_xmmdq_memdq(_mm_adds_epi16(_mm_adds_epi16(zmm3, zmm1), zmm2), 
        (*@@@@@@@@")[0].o), 7)
    *rdi = _mm_unpacklo_epi64(zmm0, _mm_packus_epi16(zmm3, zmm3).q)
    rdi += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
return result

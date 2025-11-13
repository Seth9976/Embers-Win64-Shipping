// 函数: sub_14038c7d0
// 地址: 0x14038c7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm6[0x8]
int16_t var_28[0x8] = zmm6
uint128_t zmm7
uint128_t var_18 = zmm7
int64_t rax = sx.q(arg3)
void* result
char zmm1[0x10]
char zmm2[0x10]
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (rax == 0)
    char (* i)[0x10] = arg5
    int64_t rdx_2 = sx.q(arg6)
    zmm1 = *((sx.q(arg4) << 4) + &data_14427e1f0)
    result = sx.q(arg2)
    zmm4 = zx.o(*arg1)
    zmm2 = zx.o(arg1[1])
    void* rsi_3 = arg1 + result
    
    do
        zmm3 = zx.o(*rsi_3)
        zmm5 = zx.o(*(rsi_3 + 8))
        zmm4 = _mm_unpacklo_epi8(zmm4, zmm3.q)
        zmm2 = _mm_unpacklo_epi8(zmm2, zmm5.q)
        zmm4 = _mm_maddubs_epi16(zmm4, zmm1)
        zmm7 = zx.o(*(rsi_3 + result))
        char temp0_31[0x10] = _mm_maddubs_epi16(zmm2, zmm1)
        zmm6 = zx.o(*(rsi_3 + result + 8))
        zmm3 = _mm_unpacklo_epi8(zmm3, zmm7.q)
        zmm5 = _mm_unpacklo_epi8(zmm5, zmm6[0].q)
        zmm3 = _mm_maddubs_epi16(zmm3, zmm1)
        zmm4 = __paddw_xmmdq_memdq(zmm4, (*u"@@@@@@@@")[0].o)
        zmm5 = _mm_maddubs_epi16(zmm5, zmm1)
        zmm2 = __paddw_xmmdq_memdq(temp0_31, (*u"@@@@@@@@")[0].o)
        zmm4 = _mm_packus_epi16(_mm_srai_epi16(zmm4, 7), _mm_srai_epi16(zmm2, 7))
        zmm3 = __paddw_xmmdq_memdq(zmm3, (*u"@@@@@@@@")[0].o)
        *i = zmm4
        zmm5 = __paddw_xmmdq_memdq(zmm5, (*u"@@@@@@@@")[0].o)
        zmm4 = zmm7
        *(i + rdx_2) = _mm_packus_epi16(_mm_srai_epi16(zmm3, 7), _mm_srai_epi16(zmm5, 7))
        rsi_3 += result << 1
        zmm2 = zmm6
        i = &(*i)[rdx_2 << 1]
    while (i != &i[rdx_2])
else
    char (* i_1)[0x10] = arg5
    void* rsi = arg1
    int64_t rdx = sx.q(arg6)
    zmm1 = *((rax << 4) + &data_14427e1f0)
    int64_t rax_3 = sx.q(arg4)
    
    if (rax_3 == 0)
        result = sx.q(arg2)
        
        do
            zmm2 = _mm_unpacklo_epi8(zx.o(*rsi), *(rsi + 1))
            zmm3 = zx.o(*(rsi + 8))
            char temp0_47[0x10] = _mm_maddubs_epi16(zmm2, zmm1)
            int64_t* rsi_4 = rsi + result
            zmm3 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm3, *(rsi + 9)), zmm1)
            zmm5 = zx.o(*rsi_4)
            zmm2 = __paddw_xmmdq_memdq(temp0_47, (*u"@@@@@@@@")[0].o)
            zmm7 = zx.o(*(rsi_4 + 1))
            zmm6 = zx.o(rsi_4[1])
            zmm2 = _mm_srai_epi16(zmm2, 7)
            zmm5 = _mm_unpacklo_epi8(zmm5, zmm7.q)
            zmm7 = zx.o(*(rsi_4 + 9))
            zmm3 = __paddw_xmmdq_memdq(zmm3, (*u"@@@@@@@@")[0].o)
            zmm5 = _mm_maddubs_epi16(zmm5, zmm1)
            zmm3 = _mm_srai_epi16(zmm3, 7)
            zmm6 = _mm_unpacklo_epi8(zmm6, zmm7.q)
            zmm2 = _mm_packus_epi16(zmm2, zmm3)
            zmm6 = _mm_maddubs_epi16(zmm6, zmm1)
            *i_1 = zmm2
            void* rdi = &(*i_1)[rdx]
            rsi = rsi_4 + result
            *rdi =
                _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(zmm5, (*@@@@@@@@")[0].o), 7), 
                _mm_srai_epi16(__paddw_xmmdq_memdq(zmm6, (*@@@@@@@@")[0].o), 7))
            i_1 = rdi + rdx
        while (i_1 != &i_1[rdx])
    else
        result = (rax_3 << 4) + &data_14427e1f0
        int64_t rdx_1 = sx.q(arg2)
        zmm2 = *result
        zmm3 = _mm_unpacklo_epi8(zx.o(*rsi), *(rsi + 1))
        zmm4 = zx.o(*(rsi + 8))
        zmm5 = zx.o(*(rsi + 9))
        void* rsi_1 = rsi + rdx_1
        zmm3 = _mm_maddubs_epi16(zmm3, zmm1)
        zmm4 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm4, zmm5.q), zmm1)
        zmm7 = _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(zmm3, (*@@@@@@@@")[0].o), 7), 
            _mm_srai_epi16(__paddw_xmmdq_memdq(zmm4, (*@@@@@@@@")[0].o), 7))
        
        do
            zmm6 = _mm_unpacklo_epi8(zx.o(*rsi_1), *(rsi_1 + 1))
            zmm4 = zx.o(*(rsi_1 + 8))
            zmm5 = zx.o(*(rsi_1 + 9))
            rsi_1 += rdx_1
            zmm6 = _mm_maddubs_epi16(zmm6, zmm1)
            zmm4 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm4, zmm5.q), zmm1)
            int16_t temp0_18[0x8] =
                _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(zmm6, (*@@@@@@@@")[0].o), 7), 
                _mm_srai_epi16(__paddw_xmmdq_memdq(zmm4, (*@@@@@@@@")[0].o), 7))
            zmm5 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm7, temp0_18[0].q), zmm2)
            zmm7 = _mm_maddubs_epi16(_mm_unpackhi_epi8(zmm7, temp0_18[0].q), zmm2)
            zmm5 =
                _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(zmm5, (*@@@@@@@@")[0].o), 7), 
                _mm_srai_epi16(__paddw_xmmdq_memdq(zmm7, (*@@@@@@@@")[0].o), 7))
            zmm7 = temp0_18
            *i_1 = zmm5
            i_1 = &(*i_1)[sx.q(arg6)]
        while (i_1 != &i_1[rdx])
return result

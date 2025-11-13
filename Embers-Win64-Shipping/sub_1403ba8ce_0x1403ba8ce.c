// 函数: sub_1403ba8ce
// 地址: 0x1403ba8ce
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t i = arg3
uint128_t zmm6
uint128_t var_28 = zmm6
uint128_t zmm7
uint128_t var_18 = zmm7
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
int32_t var_5c = arg5
int32_t var_58 = arg5
int32_t var_54 = arg5
int64_t result

do
    int32_t rcx = 0
    int64_t* rsi_1 = arg_8
    uint8_t st1[0x8] = *rsi_1
    uint8_t temp0_1[0x8] = _m_punpckhwd(st1, st1[0].d)
    st1 = _m_punpcklwd(temp0_1, temp0_1[0].d)
    int64_t j = -8
    rsi_1[-1] = _m_punpckldq(st1, st1[0].d)
    int64_t rdx = sx.q(arg4)
    st1 = *(rsi_1 + rdx - 1)
    uint8_t temp0_4[0x8] = _m_punpckhwd(st1, st1[0].d)
    st1 = _m_punpcklwd(temp0_4, temp0_4[0].d)
    *(rsi_1 + rdx) = _m_punpckldq(st1, st1[0].d)
    
    do
        uint32_t rax_1 = zx.d(*(rsi_1 + j))
        rcx += rax_1
        rax_1.w = mulu.dp.b(rax_1.b, rax_1.b)
        rdx = zx.q(rdx.d + rax_1)
        j += 1
    while (j s<= 6)
    
    zmm7 = zx.o(rdx.d)
    zmm6 = zx.o(rcx)
    int64_t j_1 = 0
    int32_t st0 = 0
    st1 = 0
    int16_t zmm0[0x8] = zx.o(0)
    
    do
        uint128_t zmm2 = zx.o(*(arg_8 + j_1 + 7))
        int16_t zmm1[0x8] = _mm_unpacklo_epi8(zx.o(*(arg_8 + j_1 - 8)), zmm0[0].q)
        zmm2 = _mm_unpacklo_epi8(zmm2, zmm0[0].q)
        zmm1 = _mm_unpacklo_epi16(zmm1, zmm0[0].q)
        zmm2 = _mm_sub_epi32(_mm_unpacklo_epi16(zmm2, zmm0[0].q), zmm1)
        zmm1 = _mm_madd_epi16(_mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm2), zmm2)
        zmm6 = _mm_add_epi32(zmm6, zmm2)
        zmm7 = _mm_add_epi32(zmm7, zmm1)
        zmm6 = _mm_shuffle_epi32(zmm6, 0)
        zmm7 = _mm_shuffle_epi32(zmm7, 0)
        zmm1 = _mm_bsrli_si128(zmm1, 4)
        zmm2 = _mm_bsrli_si128(zmm2, 4)
        uint128_t zmm3 = _mm_shuffle_epi32(zmm1, 3)
        zmm6 = _mm_add_epi32(zmm6, _mm_shuffle_epi32(zmm2, 3))
        zmm7 = _mm_add_epi32(zmm7, zmm3)
        zmm3 = _mm_shuffle_epi32(zmm1, 0x5f)
        int32_t zmm4[0x4] = _mm_shuffle_epi32(zmm2, 0x5f)
        zmm7 = _mm_add_epi32(zmm7, zmm3)
        zmm6 = _mm_add_epi32(zmm6, zmm4)
        zmm3 = _mm_shuffle_epi32(zmm1, 0xbf)
        zmm4 = _mm_shuffle_epi32(zmm2, 0xbf)
        zmm7 = _mm_add_epi32(zmm7, zmm3)
        zmm6 = _mm_add_epi32(zmm6, zmm4)
        zmm3 = _mm_madd_epi16(zmm6, zmm6)
        int32_t zmm5[0x4] = _mm_packs_epi16(
            _mm_packs_epi32(
                _mm_srai_epi32(
                    __psubd_xmmdq_memdq(
                        _mm_sub_epi32(_mm_sub_epi32(_mm_slli_epi32(zmm7, 4), zmm7), zmm3), arg5.o), 
                    0x1f), 
                zmm0), 
            zmm0)
        zmm1 = zx.o(*(arg_8 + j_1))
        zmm2 = zx.o(zmm1[0].q)
        zmm1 = _mm_packus_epi16(
            _mm_packs_epi32(
                _mm_srai_epi32(
                    __paddd_xmmdq_memdq(
                        _mm_add_epi32(
                            _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, zmm0[0].q), zmm0[0].q), 
                            zmm6), 
                        data_14427ef70), 
                    4), 
                zmm0), 
            zmm0) & zmm5
        *(arg_8 + j_1 - 8) = st0
        st0 = st1[0].d
        st1 = _mm_movepi64_pi64(((zmm5 & not.o(zmm2)) | zmm1)[0].q)
        zmm7 = _mm_bsrli_si128(zmm7, 0xc)
        zmm6 = _mm_bsrli_si128(zmm6, 0xc)
        j_1 += 4
    while (j_1 s< sx.q(arg4) + 8)
    
    result = sx.q(arg2)
    arg_8 += result
    i -= 1
while (i s> 0)

*var_50
var_50[1]
*(var_50 + 0x20)
*(var_50 + 0x10)
return result

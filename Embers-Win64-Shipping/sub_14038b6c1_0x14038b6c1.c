// 函数: sub_14038b6c1
// 地址: 0x14038b6c1
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
uint128_t zmm7
uint128_t var_18 = zmm7
void* rsi = arg1
int64_t* rdi = arg3
int64_t i_1 = sx.q(arg5)
int64_t result = sx.q(arg2)
int64_t i

do
    uint128_t zmm3 = zx.o(*(rsi - 2))
    uint128_t zmm1 = _mm_slli_si128(zx.o(*(rsi + 6)), 8) | zmm3
    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
    int32_t zmm4[0x4] = _mm_bsrli_si128(zmm1, 1)
    zmm3 = __pmullw_xmmdq_memdq(zmm3, *arg6)
    int32_t temp0_5[0x4] = _mm_unpacklo_epi8(zmm4, 0)
    uint128_t temp0_6 = _mm_bsrli_si128(zmm1, 2)
    int32_t temp0_7[0x4] = __pmullw_xmmdq_memdq(temp0_5, arg6[1])
    uint128_t zmm5 = _mm_unpacklo_epi8(temp0_6, 0)
    uint128_t temp0_9 = _mm_bsrli_si128(zmm1, 3)
    zmm5 = __pmullw_xmmdq_memdq(zmm5, arg6[2])
    zmm6 = _mm_unpacklo_epi8(temp0_9, 0)
    uint128_t temp0_12 = _mm_bsrli_si128(zmm1, 4)
    zmm6 = __pmullw_xmmdq_memdq(zmm6, arg6[3])
    zmm7 = _mm_unpacklo_epi8(temp0_12, 0)
    uint128_t temp0_15 = _mm_bsrli_si128(zmm1, 5)
    zmm7 = __pmullw_xmmdq_memdq(zmm7, arg6[4])
    zmm1 = __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(temp0_15, 0), arg6[5])
    *rdi = _mm_packus_epi16(
        _mm_srai_epi16(__paddsw_xmmdq_memdq(
            _mm_adds_epi16(
                _mm_adds_epi16(
                    _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_7, zmm7), zmm5), zmm3), 
                    zmm6), 
                zmm1), 
            *@@@@@@@"), 
        7), zx.o(0))[0].q
    rsi += result
    rdi += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
return result

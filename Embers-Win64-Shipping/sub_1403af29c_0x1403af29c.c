// 函数: sub_1403af29c
// 地址: 0x1403af29c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t zmm6[0x8]
uint16_t var_28[0x8] = zmm6
uint16_t zmm7[0x8]
uint16_t var_18[0x8] = zmm7
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
void* rsi_1 = arg1
void* rdi_1 = arg3
zmm7 = *arg6
int32_t zmm0[0x4] = _mm_shufflelo_epi16(zmm7, 0)
uint16_t temp0_1[0x8] = _mm_shufflelo_epi16(zmm7, 0x55)
uint16_t temp0_2[0x8] = _mm_shufflelo_epi16(zmm7, 0xaa)
uint16_t temp0_3[0x8] = _mm_shufflelo_epi16(zmm7, 0xff)
uint16_t temp0_4[0x8] = _mm_shufflehi_epi16(zmm7, 0)
uint16_t temp0_5[0x8] = _mm_shufflehi_epi16(zmm7, 0x55)
uint16_t temp0_6[0x8] = _mm_shufflehi_epi16(zmm7, 0xaa)
uint16_t temp0_7[0x8] = _mm_shufflehi_epi16(zmm7, 0xff)
int32_t temp0_8[0x4] = _mm_unpacklo_epi16(zmm0, zmm0[0].q)
uint16_t var_e0[0x8] = _mm_unpacklo_epi16(temp0_1, temp0_1[0].q)
uint16_t var_d0[0x8] = _mm_unpacklo_epi16(temp0_2, temp0_2[0].q)
uint16_t var_c0[0x8] = _mm_unpacklo_epi16(temp0_3, temp0_3[0].q)
uint16_t var_b0[0x8] = _mm_unpackhi_epi16(temp0_4, temp0_4[0].q)
uint16_t var_a0[0x8] = _mm_unpackhi_epi16(temp0_5, temp0_5[0].q)
uint16_t var_90[0x8] = _mm_unpackhi_epi16(temp0_6, temp0_6[0].q)
uint16_t var_80[0x8] = _mm_unpackhi_epi16(temp0_7, temp0_7[0].q)
uint16_t var_70[0x8] = _mm_shuffle_epi32(0x400040, 0)
int128_t var_60 = zx.o(0)
int64_t result = sx.q(arg2)
int64_t i_1 = sx.q(arg5)
int64_t i

do
    zmm0 = *(rsi_1 - 3)
    uint16_t zmm1[0x8] = _mm_bsrli_si128(zmm0, 1)
    zmm6 = _mm_bsrli_si128(zmm0, 6)
    zmm7 = _mm_bsrli_si128(zmm0, 7)
    uint16_t zmm2[0x8] = _mm_bsrli_si128(zmm0, 2)
    uint16_t zmm5[0x8] = _mm_bsrli_si128(zmm0, 5)
    uint16_t zmm3[0x8] = _mm_bsrli_si128(zmm0, 3)
    uint16_t zmm4[0x8] = _mm_bsrli_si128(zmm0, 4)
    int32_t temp0_24[0x4] = __punpcklbw_xmmdq_memdq(zmm0, zx.o(0))
    zmm1 = __punpcklbw_xmmdq_memdq(zmm1, zx.o(0))
    zmm6 = __punpcklbw_xmmdq_memdq(zmm6, zx.o(0))
    zmm7 = __punpcklbw_xmmdq_memdq(zmm7, zx.o(0))
    zmm2 = __punpcklbw_xmmdq_memdq(zmm2, zx.o(0))
    zmm5 = __punpcklbw_xmmdq_memdq(zmm5, zx.o(0))
    zmm3 = __punpcklbw_xmmdq_memdq(zmm3, zx.o(0))
    zmm4 = __punpcklbw_xmmdq_memdq(zmm4, zx.o(0))
    int32_t temp0_32[0x4] = __pmullw_xmmdq_memdq(temp0_24, temp0_8)
    zmm1 = __pmullw_xmmdq_memdq(zmm1, var_e0)
    zmm6 = __pmullw_xmmdq_memdq(zmm6, var_90)
    zmm7 = __pmullw_xmmdq_memdq(zmm7, var_80)
    zmm2 = __pmullw_xmmdq_memdq(zmm2, var_d0)
    zmm5 = __pmullw_xmmdq_memdq(zmm5, var_a0)
    zmm3 = __pmullw_xmmdq_memdq(zmm3, var_c0)
    zmm4 = __pmullw_xmmdq_memdq(zmm4, var_b0)
    zmm0 = _mm_srai_epi16(
        __paddsw_xmmdq_memdq(
            _mm_adds_epi16(
                _mm_adds_epi16(
                    _mm_adds_epi16(
                        _mm_adds_epi16(
                            _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_32, zmm1), zmm6), 
                                zmm7), 
                            zmm2), 
                        zmm5), 
                    zmm3), 
                zmm4), 
            var_70), 
        7)
    *rdi_1 = _mm_packus_epi16(zmm0, zmm0)[0].q
    zmm0 = *(rsi_1 + 5)
    zmm1 = _mm_bsrli_si128(zmm0, 1)
    zmm6 = _mm_bsrli_si128(zmm0, 6)
    zmm7 = _mm_bsrli_si128(zmm0, 7)
    zmm2 = _mm_bsrli_si128(zmm0, 2)
    zmm5 = _mm_bsrli_si128(zmm0, 5)
    zmm3 = _mm_bsrli_si128(zmm0, 3)
    zmm4 = _mm_bsrli_si128(zmm0, 4)
    int32_t temp0_57[0x4] = __punpcklbw_xmmdq_memdq(zmm0, zx.o(0))
    zmm1 = __punpcklbw_xmmdq_memdq(zmm1, zx.o(0))
    zmm6 = __punpcklbw_xmmdq_memdq(zmm6, zx.o(0))
    zmm7 = __punpcklbw_xmmdq_memdq(zmm7, zx.o(0))
    zmm2 = __punpcklbw_xmmdq_memdq(zmm2, zx.o(0))
    zmm5 = __punpcklbw_xmmdq_memdq(zmm5, zx.o(0))
    zmm3 = __punpcklbw_xmmdq_memdq(zmm3, zx.o(0))
    zmm4 = __punpcklbw_xmmdq_memdq(zmm4, zx.o(0))
    int32_t temp0_65[0x4] = __pmullw_xmmdq_memdq(temp0_57, temp0_8)
    zmm1 = __pmullw_xmmdq_memdq(zmm1, var_e0)
    zmm6 = __pmullw_xmmdq_memdq(zmm6, var_90)
    zmm7 = __pmullw_xmmdq_memdq(zmm7, var_80)
    zmm2 = __pmullw_xmmdq_memdq(zmm2, var_d0)
    zmm5 = __pmullw_xmmdq_memdq(zmm5, var_a0)
    zmm3 = __pmullw_xmmdq_memdq(zmm3, var_c0)
    zmm4 = __pmullw_xmmdq_memdq(zmm4, var_b0)
    zmm0 = _mm_srai_epi16(
        __paddsw_xmmdq_memdq(
            _mm_adds_epi16(
                _mm_adds_epi16(
                    _mm_adds_epi16(
                        _mm_adds_epi16(
                            _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_65, zmm1), zmm6), 
                                zmm7), 
                            zmm2), 
                        zmm5), 
                    zmm3), 
                zmm4), 
            var_70), 
        7)
    *(rdi_1 + 8) = _mm_packus_epi16(zmm0, zmm0)[0].q
    rsi_1 += result
    rdi_1 += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
*var_50
var_50[1]
*(var_50 + 0x20)
*(var_50 + 0x10)
return result

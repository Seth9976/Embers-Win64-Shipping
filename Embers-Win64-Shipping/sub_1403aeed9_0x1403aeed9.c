// 函数: sub_1403aeed9
// 地址: 0x1403aeed9
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_28[0x4] = zmm6
uint16_t zmm7[0x8]
uint16_t var_18[0x8] = zmm7
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
zmm7 = *arg6
uint16_t temp0[0x8] = _mm_shufflelo_epi16(zmm7, 0)
uint16_t temp0_1[0x8] = _mm_shufflelo_epi16(zmm7, 0x55)
uint16_t temp0_2[0x8] = _mm_shufflelo_epi16(zmm7, 0xaa)
uint16_t temp0_3[0x8] = _mm_shufflelo_epi16(zmm7, 0xff)
zmm7 = _mm_bsrli_si128(zmm7, 8)
uint16_t temp0_5[0x8] = _mm_shufflelo_epi16(zmm7, 0)
int32_t zmm5[0x4] = _mm_shufflelo_epi16(zmm7, 0x55)
zmm6 = _mm_shufflelo_epi16(zmm7, 0xaa)
uint16_t temp0_8[0x8] = _mm_shufflelo_epi16(zmm7, 0xff)
uint16_t zmm0[0x8] = _mm_unpacklo_epi64(temp0, temp0_1[0].q)
uint16_t zmm2[0x8] = _mm_unpacklo_epi64(temp0_2, temp0_3[0].q)
int32_t temp0_11[0x4] = _mm_unpacklo_epi64(zmm5, temp0_5[0].q)
int32_t temp0_12[0x4] = _mm_unpacklo_epi64(zmm6, temp0_8[0].q)
uint16_t var_b0[0x8] = zmm0
uint16_t var_a0[0x8] = zmm2
int32_t var_70[0x4] = _mm_shuffle_epi32(0x400040, 0)
int128_t var_60 = zx.o(0)
void* rsi_1 = arg1
int32_t* rdi_1 = arg3
int64_t result = sx.q(arg2)
int64_t i_1 = sx.q(arg5)
int64_t i

do
    zmm0 = *(rsi_1 - 3)
    uint16_t zmm1[0x8] = _mm_bsrli_si128(zmm0, 1)
    zmm6 = _mm_bsrli_si128(zmm0, 6)
    zmm7 = _mm_bsrli_si128(zmm0, 7)
    zmm2 = _mm_bsrli_si128(zmm0, 2)
    uint16_t zmm3[0x8] = _mm_bsrli_si128(zmm0, 3)
    zmm5 = _mm_bsrli_si128(zmm0, 5)
    uint16_t zmm4[0x8] = _mm_bsrli_si128(zmm0, 4)
    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
    int32_t temp0_22[0x4] = _mm_unpacklo_epi32(zmm6, zmm7[0].q)
    zmm2 = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
    int32_t temp0_24[0x4] = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
    zmm0 = __punpcklbw_xmmdq_memdq(zmm0, zx.o(0))
    int32_t temp0_26[0x4] = __punpcklbw_xmmdq_memdq(temp0_22, zx.o(0))
    zmm2 = __punpcklbw_xmmdq_memdq(zmm2, zx.o(0))
    int32_t temp0_28[0x4] = __punpcklbw_xmmdq_memdq(temp0_24, zx.o(0))
    zmm0 = __pmullw_xmmdq_memdq(zmm0, var_b0)
    int32_t temp0_30[0x4] = __pmullw_xmmdq_memdq(temp0_26, temp0_12)
    zmm2 = __pmullw_xmmdq_memdq(zmm2, var_a0)
    int32_t temp0_32[0x4] = __pmullw_xmmdq_memdq(temp0_28, temp0_11)
    zmm0 = _mm_adds_epi16(zmm0, temp0_30)
    zmm0 = _mm_adds_epi16(_mm_adds_epi16(zmm0, _mm_bsrli_si128(zmm0, 8)), zmm2)
    zmm2 = _mm_bsrli_si128(zmm2, 8)
    zmm0 = _mm_adds_epi16(zmm0, temp0_32)
    zmm5 = _mm_bsrli_si128(temp0_32, 8)
    zmm0 = _mm_srai_epi16(
        __paddsw_xmmdq_memdq(_mm_adds_epi16(_mm_adds_epi16(zmm0, zmm2), zmm5), var_70), 7)
    *rdi_1 = _mm_packus_epi16(zmm0, zmm0)[0].d
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

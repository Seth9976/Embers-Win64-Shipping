// 函数: sub_1403be177
// 地址: 0x1403be177
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = arg1
int128_t* rdx = arg3
int64_t i_1 = 0x10
int32_t zmm3[0x4] = zx.o(0)
int32_t zmm4[0x4] = zx.o(0)
int32_t zmm5[0x4] = zx.o(0)
int32_t zmm0[0x4]
int64_t i

do
    zmm0 = *rax
    int32_t zmm1[0x4] = *rdx
    rax += arg2
    rdx += arg4
    zmm3 = _mm_adds_epu16(zmm3, _mm_sad_epu8(zmm0, zmm1))
    zmm4 = _mm_adds_epu16(zmm4, _mm_sad_epu8(zx.o(0), zmm1))
    int32_t temp0_5[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    int32_t temp0_6[0x4] = _mm_unpackhi_epi8(zmm1, 0)
    zmm0 = _mm_madd_epi16(temp0_5, temp0_5)
    zmm1 = _mm_madd_epi16(temp0_6, temp0_6)
    zmm5 = _mm_add_epi32(_mm_add_epi32(zmm5, zmm0), zmm1)
    i = i_1
    i_1 -= 1
while (i != 1)
*arg6 = _mm_srli_epi32(
    __paddd_xmmdq_memdq(_mm_adds_epu16(_mm_bsrli_si128(zmm3, 8), zmm3), data_14427f100), 8)[0]
int32_t temp0_16[0x4] = _mm_adds_epu16(_mm_bsrli_si128(zmm4, 8), zmm4)
zmm0 = _mm_srli_epi32(_mm_mul_epu32(temp0_16, temp0_16), 8)
int32_t temp0_21[0x4] = _mm_add_epi32(_mm_unpacklo_epi32(zmm5, 0), _mm_unpackhi_epi32(zmm5, 0))
*arg5 = _mm_srli_epi32(
    __paddd_xmmdq_memdq(_mm_sub_epi32(_mm_add_epi32(_mm_bsrli_si128(temp0_21, 8), temp0_21), zmm0), 
        data_14427f100), 
    8)[0]
return arg5

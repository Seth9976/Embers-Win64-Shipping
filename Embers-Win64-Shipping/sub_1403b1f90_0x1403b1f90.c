// 函数: sub_1403b1f90
// 地址: 0x1403b1f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg1
int32_t* rdi = arg3
uint128_t temp0 = _mm_bsrli_si128(*arg6, 6)
uint128_t zmm3 = _mm_shufflelo_epi16(_mm_packs_epi16(temp0, temp0), 0)
uint128_t zmm2 = _mm_shuffle_epi32(0x1000100, 0)
int64_t result = sx.q(arg2)
int64_t i_1 = sx.q(arg5)
int64_t i

do
    char zmm0[0x10] = _mm_mulhrs_epi16(
        _mm_maddubs_epi16(_mm_unpacklo_epi8(zx.o(*rsi), zx.q(*(rsi + result))), zmm3), zmm2)
    *rdi = _mm_packus_epi16(zmm0, zmm0)[0].d
    rsi += result
    rdi += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
return result

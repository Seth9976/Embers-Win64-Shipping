// 函数: sub_1403ad7f3
// 地址: 0x1403ad7f3
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
uint128_t zmm7
uint128_t var_18 = zmm7
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
int64_t rax = sx.q(arg2)
int32_t* rdi_1 = arg1 - 2 + rax
int32_t* rdx = &(arg1 - 2)[rax]
int32_t* rcx = rdx + rax
uint128_t zmm2 = zx.o(*rdi_1)
uint128_t zmm3 = zx.o(*rcx)
uint128_t zmm0 = _mm_unpacklo_epi32(zx.o(*(arg1 - 2)), zx.q(*rdx))
zmm2 = _mm_unpacklo_epi32(zmm2, zmm3.q)
zmm6 = zx.o(*(rdi_1 + (rax << 1)))
zmm7 = zx.o(*(rcx + (rax << 1)))
uint128_t zmm4 = _mm_unpacklo_epi32(zx.o(*(arg1 - 2 + (rax << 1))), zx.q(*(rdx + (rax << 1))))
zmm6 = _mm_unpacklo_epi32(zmm6, zmm7.q)
zmm0 = _mm_unpacklo_epi8(zmm0, zmm2.q)
zmm4 = _mm_unpacklo_epi8(zmm4, zmm6.q)
uint128_t zmm1 = zmm0
zmm0 = _mm_unpacklo_epi16(zmm0, zmm4.q)
zmm1 = _mm_unpackhi_epi16(zmm1, zmm4.q)
zmm2 = zmm0
zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
zmm2 = _mm_unpackhi_epi32(zmm2, zmm1.q)
void* rsi_3 = &(arg1 - 2)[rax * 2]
void* rdi_2 = rsi_3 + rax
void* rdx_1 = rsi_3 + (rax << 2)
void* rcx_1 = rdx_1 + rax
zmm6 = zx.o(*rdi_2)
zmm3 = zx.o(*rcx_1)
zmm4 = _mm_unpacklo_epi32(zx.o(*rsi_3), zx.q(*rdx_1))
zmm6 = _mm_unpacklo_epi32(zmm6, zmm3.q)
zmm3 = zx.o(*(rdi_2 + (rax << 1)))
zmm7 = zx.o(*(rcx_1 + (rax << 1)))
zmm1 = _mm_unpacklo_epi32(zx.o(*(rsi_3 + (rax << 1))), zx.q(*(rdx_1 + (rax << 1))))
zmm3 = _mm_unpacklo_epi32(zmm3, zmm7.q)
zmm4 = _mm_unpacklo_epi8(zmm4, zmm6.q)
zmm1 = _mm_unpacklo_epi8(zmm1, zmm3.q)
zmm7 = zmm4
zmm4 = _mm_unpacklo_epi16(zmm4, zmm1.q)
zmm7 = _mm_unpackhi_epi16(zmm7, zmm1.q)
zmm6 = zmm4
zmm4 = _mm_unpacklo_epi32(zmm4, zmm7.q)
zmm6 = _mm_unpackhi_epi32(zmm6, zmm7.q)
zmm1 = zmm0
zmm3 = zmm2
zmm0 = _mm_unpacklo_epi64(zmm0, zmm4.q)
zmm1 = _mm_unpackhi_epi64(zmm1, zmm4.q)
zmm2 = _mm_unpacklo_epi64(zmm2, zmm6.q)
zmm3 = _mm_unpackhi_epi64(zmm3, zmm6.q)
zmm7 = _mm_subs_epu8(zmm3, zmm0)
zmm6 = _mm_srli_epi16((_mm_subs_epu8(zmm0, zmm3) | zmm7) & data_14427ea20, 1)
zmm7 = *arg3
uint128_t zmm5 = _mm_subs_epu8(zmm1, zmm2) | _mm_subs_epu8(zmm2, zmm1)
zmm5 = _mm_adds_epu8(_mm_adds_epu8(zmm5, zmm5), zmm6)
zmm4 = data_14427ea30
zmm5 = _mm_cmpeq_epi8(_mm_subs_epu8(zmm5, zmm7), zx.o(0))
uint128_t var_70 = zmm0
uint128_t var_60 = zmm3
zmm0 = _mm_subs_epi8(zmm0 ^ zmm4, zmm3 ^ zmm4)
zmm1 ^= zmm4
zmm2 ^= zmm4
zmm3 = zmm2
zmm2 = _mm_subs_epi8(zmm2, zmm1)
zmm5 &= _mm_adds_epi8(_mm_adds_epi8(_mm_adds_epi8(zmm0, zmm2), zmm2), zmm2)
zmm0 = zmm5
zmm5 = __paddsb_xmmdq_memdq(zmm5, data_14427ea50)
zmm0 = __paddsb_xmmdq_memdq(zmm0, data_14427ea60)
zmm6 = data_14427eaa0
zmm2 = data_14427eab0
zmm7 = _mm_cmpgt_epi8(zx.o(0), zmm0) & zmm6
zmm3 = _mm_subs_epi8(zmm3, (_mm_srli_epi16(zmm0, 3) & zmm2) | zmm7)
zmm7 = _mm_cmpgt_epi8(zx.o(0), zmm5) & zmm6
zmm3 ^= zmm4
zmm1 = _mm_adds_epi8(zmm1, (_mm_srli_epi16(zmm5, 3) & zmm2) | zmm7) ^ zmm4
void* rdx_3 = rsi_3 + (rax << 2)
zmm0 = _mm_unpacklo_epi8(var_70, zmm1.q)
zmm6 = _mm_unpackhi_epi8(var_70, zmm1.q)
zmm5 = zmm3
zmm3 = _mm_unpacklo_epi8(zmm3, var_60.q)
zmm5 = _mm_unpackhi_epi8(zmm5, var_60.q)
zmm2 = zmm0
zmm0 = _mm_unpacklo_epi16(zmm0, zmm3.q)
zmm2 = _mm_unpackhi_epi16(zmm2, zmm3.q)
zmm3 = zmm6
zmm6 = _mm_unpacklo_epi16(zmm6, zmm5.q)
zmm3 = _mm_unpackhi_epi16(zmm3, zmm5.q)
*rsi_3 = zmm6.d
*rdx_3 = zmm3.d
uint128_t temp0_54 = _mm_bsrli_si128(zmm6, 4)
uint128_t temp0_55 = _mm_bsrli_si128(zmm3, 4)
*rdi_2 = temp0_54.d
*rcx_1 = temp0_55.d
uint128_t temp0_56 = _mm_bsrli_si128(temp0_54, 4)
uint128_t temp0_57 = _mm_bsrli_si128(temp0_55, 4)
*(rsi_3 + (rax << 1)) = temp0_56.d
*(rdx_3 + (rax << 1)) = temp0_57.d
uint128_t temp0_58 = _mm_bsrli_si128(temp0_56, 4)
uint128_t temp0_59 = _mm_bsrli_si128(temp0_57, 4)
*(rdi_2 + (rax << 1)) = temp0_58.d
*(rcx_1 + (rax << 1)) = temp0_59.d
int64_t rax_1 = neg.q(rax)
void* rsi_4 = rsi_3 + (rax_1 << 3)
int64_t result = neg.q(rax_1)
void* rdi_3 = rsi_4 + result
void* rdx_4 = rsi_4 + (result << 2)
void* rcx_2 = rdx_4 + result
*rsi_4 = zmm0.d
*rdx_4 = zmm2.d
uint128_t temp0_60 = _mm_bsrli_si128(zmm0, 4)
uint128_t temp0_61 = _mm_bsrli_si128(zmm2, 4)
*rdi_3 = temp0_60.d
*rcx_2 = temp0_61.d
uint128_t temp0_62 = _mm_bsrli_si128(temp0_60, 4)
uint128_t temp0_63 = _mm_bsrli_si128(temp0_61, 4)
*(rsi_4 + (result << 1)) = temp0_62.d
*(rdx_4 + (result << 1)) = temp0_63.d
uint128_t temp0_64 = _mm_bsrli_si128(temp0_62, 4)
uint128_t temp0_65 = _mm_bsrli_si128(temp0_63, 4)
*(rdi_3 + (result << 1)) = temp0_64.d
*(rcx_2 + (result << 1)) = temp0_65.d
*var_50
var_50[1]
*(var_50 + 0x20)
*(var_50 + 0x10)
return result

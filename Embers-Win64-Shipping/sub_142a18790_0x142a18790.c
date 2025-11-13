// 函数: sub_142a18790
// 地址: 0x142a18790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t rdi = sx.q(arg2.d)
int64_t rsi = sx.q((arg2 * 2).d)
int64_t rbp = sx.q((arg2 * 3).d)
uint128_t zmm4 = zx.o(*(rsi + arg1 - 4))
uint128_t zmm6 = _mm_unpacklo_epi8(zx.o(*(arg1 - 4)), *(rdi + arg1 - 4))
zmm4 = _mm_unpacklo_epi8(zmm4, *(arg1 + rbp - 4))
int64_t r14 = sx.q((arg2 << 2).d)
int64_t r15 = sx.q((arg2 * 5).d)
uint128_t zmm2 = _mm_unpacklo_epi16(zmm6, zmm4.q)
int64_t r12 = sx.q((arg2 * 3).d * 2)
uint128_t zmm5 = _mm_unpacklo_epi8(zx.o(*(r14 + arg1 - 4)), *(r15 + arg1 - 4))
uint128_t zmm3 = zx.o(*(r12 + arg1 - 4))
zmm6 = _mm_unpackhi_epi16(zmm6, zmm4.q)
int64_t r13 = sx.q(arg2.d * 7)
zmm3 = _mm_unpacklo_epi8(zmm3, *(arg1 + r13 - 4))
uint128_t zmm1 = _mm_unpacklo_epi16(zmm5, zmm3.q)
uint128_t zmm0 = _mm_unpacklo_epi32(zmm2, zmm1.q)
int64_t var_98 = zmm0.q
int64_t var_90
int128_t var_90_1 = var_90 | zmm0.q << 0x40
zmm5 = _mm_unpackhi_epi16(zmm5, zmm3.q)
zmm0 = _mm_unpacklo_epi32(zmm6, zmm5.q)
zmm2 = _mm_unpackhi_epi32(zmm2, zmm1.q)
zmm6 = _mm_unpackhi_epi32(zmm6, zmm5.q)
int64_t var_78 = zmm0.q
int64_t var_70
int128_t var_70_1 = var_70 | zmm0.q << 0x40
var_90_1:8.q = zmm2.q
int128_t var_80 = var_80.q | zmm2.q << 0x40
var_70_1:8.q = zmm6.q
int64_t var_60
int64_t var_60_1 = var_60 | (zmm6.q << 0x40).q
int64_t result = sub_142a16d80(&var_80:8, 8, arg3, arg4, arg5)
uint128_t zmm6_1 = _mm_unpacklo_epi8(zx.o(var_98), var_90_1.q)
uint128_t zmm4_1 = _mm_unpacklo_epi8(zx.o(var_90_1:8.q), var_80.q)
uint128_t zmm5_1 = _mm_unpacklo_epi8(zx.o(var_78), var_70_1.q)
uint128_t zmm3_1 = _mm_unpacklo_epi8(zx.o(var_70_1:8.q), var_60_1)
uint128_t zmm2_1 = _mm_unpacklo_epi16(zmm6_1, zmm4_1.q)
uint128_t zmm1_1 = _mm_unpacklo_epi16(zmm5_1, zmm3_1.q)
uint128_t zmm0_1 = _mm_unpacklo_epi32(zmm2_1, zmm1_1.q)
*(arg1 - 4) = zmm0_1.q
*(rdi + arg1 - 4) = *(rdi + arg1 - 4) | zmm0_1.q << 0x40
zmm2_1 = _mm_unpackhi_epi32(zmm2_1, zmm1_1.q)
*(rsi + arg1 - 4) = zmm2_1.q
*(arg1 + rbp - 4) = *(arg1 + rbp - 4) | zmm2_1.q << 0x40
zmm6_1 = _mm_unpackhi_epi16(zmm6_1, zmm4_1.q)
zmm5_1 = _mm_unpackhi_epi16(zmm5_1, zmm3_1.q)
zmm0_1 = _mm_unpacklo_epi32(zmm6_1, zmm5_1.q)
*(r14 + arg1 - 4) = zmm0_1.q
*(r15 + arg1 - 4) = *(r15 + arg1 - 4) | zmm0_1.q << 0x40
zmm6_1 = _mm_unpackhi_epi32(zmm6_1, zmm5_1.q)
*(r12 + arg1 - 4) = zmm6_1.q
*(arg1 + r13 - 4) = *(arg1 + r13 - 4) | zmm6_1.q << 0x40
__security_check_cookie(rax_1 ^ &var_c8)
return result

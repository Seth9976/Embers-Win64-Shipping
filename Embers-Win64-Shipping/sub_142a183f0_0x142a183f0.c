// 函数: sub_142a183f0
// 地址: 0x142a183f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t r12 = sx.q((arg2 * 2).d)
void* rbp_1 = arg1 - 4 + sx.q((arg2 << 3).d)
int64_t r15 = sx.q(arg2.d)
int64_t r13 = sx.q((arg2 * 3).d)
int64_t rcx = sx.q((arg2 << 2).d)
uint128_t zmm9 = zx.o(*(r12 + arg1 - 4))
uint128_t zmm10 = zx.o(*rbp_1)
uint128_t zmm11 = zx.o(*(rcx + arg1 - 4))
uint128_t zmm5 = zx.o(*(r12 + rbp_1))
uint128_t zmm7 = zx.o(*(rcx + rbp_1))
uint128_t zmm12 = _mm_unpacklo_epi8(zx.o(*(arg1 - 4)), *(r15 + arg1 - 4))
zmm9 = _mm_unpacklo_epi8(zmm9, *(arg1 - 4 + r13))
int64_t r8_1 = sx.q((arg2 * 5).d)
uint128_t zmm6 = _mm_unpacklo_epi16(zmm12, zmm9.q)
int64_t rax_9 = sx.q((arg2 * 3).d * 2)
zmm11 = _mm_unpacklo_epi8(zmm11, *(r8_1 + arg1 - 4))
zmm12 = _mm_unpackhi_epi16(zmm12, zmm9.q)
int64_t rdx = sx.q(arg2.d * 7)
uint128_t zmm4 = zx.o(*(rax_9 + rbp_1))
uint128_t zmm8 = _mm_unpacklo_epi8(zx.o(*(rax_9 + arg1 - 4)), *(rdx + arg1 - 4))
zmm10 = _mm_unpacklo_epi8(zmm10, *(r15 + rbp_1))
zmm5 = _mm_unpacklo_epi8(zmm5, *(rbp_1 + r13))
zmm7 = _mm_unpacklo_epi8(zmm7, *(r8_1 + rbp_1))
zmm4 = _mm_unpacklo_epi8(zmm4, *(rdx + rbp_1))
uint128_t zmm0 = _mm_unpacklo_epi16(zmm7, zmm4.q)
uint128_t zmm1 = _mm_unpacklo_epi16(zmm11, zmm8.q)
uint128_t zmm2 = _mm_unpacklo_epi32(zmm6, zmm1.q)
zmm6 = _mm_unpackhi_epi32(zmm6, zmm1.q)
uint128_t zmm3 = _mm_unpacklo_epi16(zmm10, zmm5.q)
zmm11 = _mm_unpackhi_epi16(zmm11, zmm8.q)
zmm1 = _mm_unpacklo_epi32(zmm3, zmm0.q)
zmm3 = _mm_unpackhi_epi32(zmm3, zmm0.q)
uint128_t var_148 = _mm_unpacklo_epi64(zmm2, zmm1.q)
zmm2 = _mm_unpackhi_epi64(zmm2, zmm1.q)
uint128_t var_128 = _mm_unpacklo_epi64(zmm6, zmm3.q)
uint128_t var_138 = zmm2
uint128_t var_118 = _mm_unpackhi_epi64(zmm6, zmm3.q)
zmm10 = _mm_unpackhi_epi16(zmm10, zmm5.q)
zmm7 = _mm_unpackhi_epi16(zmm7, zmm4.q)
zmm2 = _mm_unpacklo_epi32(zmm12, zmm11.q)
zmm1 = _mm_unpacklo_epi32(zmm10, zmm7.q)
uint128_t var_108 = _mm_unpacklo_epi64(zmm2, zmm1.q)
zmm12 = _mm_unpackhi_epi32(zmm12, zmm11.q)
zmm10 = _mm_unpackhi_epi32(zmm10, zmm7.q)
uint128_t var_e8 = _mm_unpacklo_epi64(zmm12, zmm10.q)
uint128_t var_f8 = _mm_unpackhi_epi64(zmm2, zmm1.q)
uint128_t var_d8 = _mm_unpackhi_epi64(zmm12, zmm10.q)
sub_142a166d0(&var_108, 0x10, arg3, arg4, arg5, arg6, arg7, arg8)
uint128_t* var_168 = &var_148
void* var_160 = &var_148:8
int64_t i = 0
void* var_158 = arg1 - 4
void* var_150 = rbp_1

do
    int64_t* rcx_2 = *(&var_168 + i)
    int128_t* rdx_1 = *(&var_158 + i)
    i += 8
    uint128_t zmm4_1 = zx.o(rcx_2[4])
    uint128_t zmm5_1 = zx.o(rcx_2[8])
    uint128_t zmm3_1 = zx.o(rcx_2[0xc])
    uint128_t zmm6_1 = _mm_unpacklo_epi8(zx.o(*rcx_2), rcx_2[2])
    zmm4_1 = _mm_unpacklo_epi8(zmm4_1, rcx_2[6])
    zmm5_1 = _mm_unpacklo_epi8(zmm5_1, rcx_2[0xa])
    zmm3_1 = _mm_unpacklo_epi8(zmm3_1, rcx_2[0xe])
    uint128_t zmm2_1 = _mm_unpacklo_epi16(zmm6_1, zmm4_1.q)
    uint128_t zmm1_1 = _mm_unpacklo_epi16(zmm5_1, zmm3_1.q)
    uint128_t zmm0_1 = _mm_unpacklo_epi32(zmm2_1, zmm1_1.q)
    *rdx_1 = zmm0_1.q
    *(r15 + rdx_1) = *(r15 + rdx_1) | zmm0_1.q << 0x40
    zmm6_1 = _mm_unpackhi_epi16(zmm6_1, zmm4_1.q)
    zmm2_1 = _mm_unpackhi_epi32(zmm2_1, zmm1_1.q)
    *(r12 + rdx_1) = zmm2_1.q
    *(rdx_1 + r13) = *(rdx_1 + r13) | zmm2_1.q << 0x40
    zmm5_1 = _mm_unpackhi_epi16(zmm5_1, zmm3_1.q)
    zmm0_1 = _mm_unpacklo_epi32(zmm6_1, zmm5_1.q)
    *(rcx + rdx_1) = zmm0_1.q
    zmm6_1 = _mm_unpackhi_epi32(zmm6_1, zmm5_1.q)
    *(r8_1 + rdx_1) = *(r8_1 + rdx_1) | zmm0_1.q << 0x40
    *(rax_9 + rdx_1) = zmm6_1.q
    *(rdx + rdx_1) = *(rdx + rdx_1) | zmm6_1.q << 0x40
while (i s< 0x10)

__security_check_cookie(rax_1 ^ &var_1c8)
return i

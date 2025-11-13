// 函数: sub_142a17a50
// 地址: 0x142a17a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rbp = sx.q(arg2.d)
void var_d0
void* var_f8 = &var_d0
void* var_108 = arg1 - 8
void var_90
void* var_f0 = &var_90
void* var_100 = arg1
int64_t r14 = sx.q((arg2 * 2).d)
int64_t r15 = sx.q((arg2 * 3).d)
int64_t r12 = sx.q((arg2 << 2).d)
int64_t r13 = sx.q((arg2 * 5).d)
int64_t r8 = sx.q((arg2 * 3).d * 2)
int64_t i_1 = 0
int64_t i = 0
int64_t r9 = sx.q(arg2.d * 7)

do
    int64_t* rax_10 = *(&var_108 + i)
    int64_t* rcx = *(&var_f8 + i)
    i += 8
    uint128_t zmm4 = zx.o(*(r14 + rax_10))
    uint128_t zmm5 = zx.o(*(r12 + rax_10))
    uint128_t zmm3 = zx.o(*(r8 + rax_10))
    zmm6 = _mm_unpacklo_epi8(zx.o(*rax_10), *(rax_10 + rbp))
    zmm4 = _mm_unpacklo_epi8(zmm4, *(r15 + rax_10))
    zmm5 = _mm_unpacklo_epi8(zmm5, *(rax_10 + r13))
    zmm3 = _mm_unpacklo_epi8(zmm3, *(r9 + rax_10))
    uint128_t zmm2 = _mm_unpacklo_epi16(zmm6, zmm4.q)
    uint128_t zmm1 = _mm_unpacklo_epi16(zmm5, zmm3.q)
    uint128_t zmm0 = _mm_unpacklo_epi32(zmm2, zmm1.q)
    *rcx = zmm0.q
    *(rcx + 8) = rcx[1] | zmm0.q << 0x40
    zmm6 = _mm_unpackhi_epi16(zmm6, zmm4.q)
    zmm2 = _mm_unpackhi_epi32(zmm2, zmm1.q)
    rcx[2] = zmm2.q
    *(rcx + 0x18) = rcx[3] | zmm2.q << 0x40
    zmm5 = _mm_unpackhi_epi16(zmm5, zmm3.q)
    zmm0 = _mm_unpacklo_epi32(zmm6, zmm5.q)
    rcx[4] = zmm0.q
    zmm6 = _mm_unpackhi_epi32(zmm6, zmm5.q)
    *(rcx + 0x28) = rcx[5] | zmm0.q << 0x40
    rcx[6] = zmm6.q
    *(rcx + 0x38) = rcx[7] | zmm6.q << 0x40
while (i s< 0x10)

sub_142a15680(&var_90, 8, arg3, arg4, arg5)
var_108 = &var_d0
void* var_100_1 = &var_90
var_f8 = arg1 - 8
void* var_f0_1 = arg1
int64_t* result

do
    result = *(&var_108 + i_1)
    int128_t* rcx_2 = *(&var_f8 + i_1)
    i_1 += 8
    uint128_t zmm4_1 = zx.o(result[2])
    uint128_t zmm5_1 = zx.o(result[4])
    uint128_t zmm3_1 = zx.o(result[6])
    uint128_t zmm6_1 = _mm_unpacklo_epi8(zx.o(*result), result[1])
    zmm4_1 = _mm_unpacklo_epi8(zmm4_1, result[3])
    zmm5_1 = _mm_unpacklo_epi8(zmm5_1, result[5])
    zmm3_1 = _mm_unpacklo_epi8(zmm3_1, result[7])
    uint128_t zmm2_1 = _mm_unpacklo_epi16(zmm6_1, zmm4_1.q)
    uint128_t zmm1_1 = _mm_unpacklo_epi16(zmm5_1, zmm3_1.q)
    uint128_t zmm0_1 = _mm_unpacklo_epi32(zmm2_1, zmm1_1.q)
    *rcx_2 = zmm0_1.q
    *(rcx_2 + rbp) = *(rcx_2 + rbp) | zmm0_1.q << 0x40
    zmm6_1 = _mm_unpackhi_epi16(zmm6_1, zmm4_1.q)
    zmm2_1 = _mm_unpackhi_epi32(zmm2_1, zmm1_1.q)
    *(r14 + rcx_2) = zmm2_1.q
    *(r15 + rcx_2) = *(r15 + rcx_2) | zmm2_1.q << 0x40
    zmm5_1 = _mm_unpackhi_epi16(zmm5_1, zmm3_1.q)
    zmm0_1 = _mm_unpacklo_epi32(zmm6_1, zmm5_1.q)
    *(r12 + rcx_2) = zmm0_1.q
    zmm6_1 = _mm_unpackhi_epi32(zmm6_1, zmm5_1.q)
    *(rcx_2 + r13) = *(rcx_2 + r13) | zmm0_1.q << 0x40
    *(r8 + rcx_2) = zmm6_1.q
    *(r9 + rcx_2) = *(r9 + rcx_2) | zmm6_1.q << 0x40
while (i_1 s< 0x10)

__security_check_cookie(rax_1 ^ &var_138)
return result

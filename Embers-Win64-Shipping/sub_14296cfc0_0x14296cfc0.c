// 函数: sub_14296cfc0
// 地址: 0x14296cfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x130)
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t var_a8[0x4]
sub_14296e1c0(&var_a8, arg2)
int32_t var_e8[0x4]
sub_14296dcf0(&var_e8, arg2, &var_a8)
sub_14296e1c0(&var_a8, &var_e8)
sub_14296dcf0(&var_e8, arg2, &var_a8)
sub_14296e1c0(&var_a8, &var_e8)
void var_68
sub_14296e1c0(&var_68, &var_a8)
sub_14296e1c0(&var_a8, &var_68)
int32_t var_128[0x4]
sub_14296dcf0(&var_128, &var_e8, &var_a8)
sub_14296e1c0(&var_a8, &var_128)
sub_14296e1c0(&var_68, &var_a8)
sub_14296e1c0(&var_a8, &var_68)
sub_14296dcf0(&var_128, &var_e8, &var_a8)
sub_14296e1c0(&var_e8, &var_128)
int64_t i_9 = 4
int64_t i

do
    sub_14296e1c0(&var_68, &var_e8)
    sub_14296e1c0(&var_e8, &var_68)
    i = i_9
    i_9 -= 1
while (i != 1)
sub_14296dcf0(&var_a8, &var_128, &var_e8)
sub_14296e1c0(&var_128, &var_a8)
sub_14296dcf0(&var_e8, arg2, &var_128)
sub_14296e1c0(&var_68, &var_e8)
sub_14296e1c0(&var_128, &var_68)
int64_t i_10 = 8
int64_t i_1

do
    sub_14296e1c0(&var_68, &var_128)
    sub_14296e1c0(&var_128, &var_68)
    i_1 = i_10
    i_10 -= 1
while (i_1 != 1)
sub_14296dcf0(&var_e8, &var_a8, &var_128)
sub_14296e1c0(&var_128, &var_e8)
int64_t i_11 = 0x12
int64_t i_14 = 0x12
int64_t i_2

do
    sub_14296e1c0(&var_68, &var_128)
    sub_14296e1c0(&var_128, &var_68)
    i_2 = i_14
    i_14 -= 1
while (i_2 != 1)
sub_14296dcf0(&var_a8, &var_e8, &var_128)
sub_14296e1c0(&var_128, &var_a8)
int64_t i_3

do
    sub_14296e1c0(&var_68, &var_128)
    sub_14296e1c0(&var_128, &var_68)
    i_3 = i_11
    i_11 -= 1
while (i_3 != 1)
sub_14296dcf0(&var_a8, &var_e8, &var_128)
sub_14296e1c0(&var_128, &var_a8)
int64_t i_12 = 0x37
int64_t i_4

do
    sub_14296e1c0(&var_68, &var_128)
    sub_14296e1c0(&var_128, &var_68)
    i_4 = i_12
    i_12 -= 1
while (i_4 != 1)
sub_14296dcf0(&var_e8, &var_a8, &var_128)
sub_14296e1c0(&var_128, &var_e8)
sub_14296dcf0(&var_a8, arg2, &var_128)
sub_14296e1c0(&var_128, &var_a8)
int64_t i_13 = 0x6f
int64_t i_5

do
    sub_14296e1c0(&var_68, &var_128)
    sub_14296e1c0(&var_128, &var_68)
    i_5 = i_13
    i_13 -= 1
while (i_5 != 1)
sub_14296dcf0(&var_a8, &var_e8, &var_128)
sub_14296e1c0(&var_e8, &var_a8)
sub_14296dcf0(&var_128, &var_e8, arg2)
int128_t* rcx_43 = &var_e8
int32_t i_6 = 0
int32_t zmm2[0x4] = data_14353e020
int32_t zmm3[0x4] = data_14353e010
int32_t zmm4[0x4] = data_142e11d00
int32_t zmm5[0x4] = data_142fc95f0
*arg1 = var_a8
int32_t var_98[0x4]
arg1[1] = var_98
int32_t var_88[0x4]
arg1[2] = var_88
int32_t zmm0[0x4] = var_128
int32_t var_78[0x4]
arg1[3] = var_78
zmm0 = __psubd_xmmdq_memdq(zmm0, data_14354aff0)
int32_t var_118[0x4]
int32_t var_d8[0x4] = __psubd_xmmdq_memdq(var_118, data_14354b000)
int32_t var_f8[0x4]
int32_t zmm1[0x4] = __psubd_xmmdq_memdq(var_f8, data_14354b020)
var_e8 = zmm0
int32_t var_b8[0x4] = zmm1
int32_t var_108[0x4]
int32_t var_c8[0x4] = __psubd_xmmdq_memdq(var_108, data_14354b010)

do
    int32_t rax_2 = i_6 + 4
    rcx_43 = &rcx_43[2]
    zmm0 = _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i_6), 0), zmm4), zmm5)
    i_6 += 8
    zmm1 = _mm_add_epi32((zmm3 & zmm0) | (zmm0 & not.o(zmm2)), rcx_43[-2])
    zmm0 = _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_2), 0), zmm4), zmm5)
    rcx_43[-2] = zmm1
    rcx_43[-1] = _mm_add_epi32((zmm3 & zmm0) | (zmm0 & not.o(zmm2)), rcx_43[-1])
while (i_6 u< 0x10)

sub_14293f960(&var_e8)
sub_14296d7f0(&var_e8)
zmm2 = zx.o(0)
int32_t (* rax_3)[0x4] = &var_e8
zmm1 = zx.o(0)
int64_t i_8 = 2
int64_t i_7

do
    zmm0 = *rax_3
    rax_3 = &rax_3[2]
    zmm2 |= zmm0
    zmm1 |= rax_3[-1]
    i_7 = i_8
    i_8 -= 1
while (i_7 != 1)
zmm1 |= zmm2
zmm1 |= _mm_bsrli_si128(zmm1, 8)
int32_t rcx_46 = (zmm1 | _mm_bsrli_si128(zmm1, 4))[0]
__security_check_cookie(rax_1 ^ &var_148)
return zx.q(neg.d((rcx_46 - 1) u>> 0x1f & not.d(rcx_46) u>> 0x1f))

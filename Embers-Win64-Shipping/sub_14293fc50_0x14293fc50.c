// 函数: sub_14293fc50
// 地址: 0x14293fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x150)
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t var_d8[0x4]
sub_14296e1c0(&var_d8, arg2)
int32_t var_158[0x4]
sub_14296e1c0(&var_158, arg2 + 0x40)
int32_t temp0[0x4] = __paddd_xmmdq_memdq(var_d8, var_158)
int32_t var_148[0x4]
int32_t var_c8[0x4]
int32_t temp0_1[0x4] = __paddd_xmmdq_memdq(var_c8, var_148)
int32_t var_98[0x4] = temp0
int32_t var_138[0x4]
int32_t var_b8[0x4]
int32_t temp0_2[0x4] = __paddd_xmmdq_memdq(var_b8, var_138)
int32_t var_128[0x4]
int32_t var_a8[0x4]
int32_t temp0_3[0x4] = __paddd_xmmdq_memdq(var_a8, var_128)
sub_14293f570(&arg1[0x30], arg2 + 0x40, arg2)
int32_t var_118[0x4]
sub_14296e1c0(&var_118, &arg1[0x30])
int32_t (* rcx_4)[0x4] = &var_118
int32_t temp0_4[0x4] = __psubd_xmmdq_memdq(var_118, var_98)
int32_t i_2 = 0
int32_t i = 0
int32_t var_108[0x4]
int32_t temp0_5[0x4] = __psubd_xmmdq_memdq(var_108, temp0_1)
int128_t zmm2 = data_14353e040
int128_t zmm3 = data_14353e030
int32_t zmm7[0x4] = data_142e11d00
int32_t zmm6[0x4] = data_142fc95f0
var_118 = temp0_4
int32_t var_108_1[0x4] = temp0_5
int32_t var_f8[0x4]
int32_t var_f8_1[0x4] = __psubd_xmmdq_memdq(var_f8, temp0_2)
int32_t var_e8[0x4]
int32_t var_e8_1[0x4] = __psubd_xmmdq_memdq(var_e8, temp0_3)

do
    int32_t rax_2 = i + 4
    rcx_4 = &rcx_4[2]
    int32_t temp0_9[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zmm7)
    i += 8
    int32_t temp0_10[0x4] = _mm_cmpeq_epi32(temp0_9, zmm6)
    int32_t temp0_11[0x4] = _mm_add_epi32((temp0_10 & not.o(zmm2)) | (temp0_10 & zmm3), rcx_4[-2])
    int32_t temp0_14[0x4] =
        _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_2), 0), zmm7), zmm6)
    rcx_4[-2] = temp0_11
    rcx_4[-1] = _mm_add_epi32((temp0_14 & not.o(zmm2)) | (temp0_14 & zmm3), rcx_4[-1])
while (i u< 0x10)

sub_14293f960(&var_118)

if ((&arg1[0x30] u> &var_a8[3] || &arg1[0x3f] u< &var_d8)
        && (&arg1[0x30] u> &var_128[3] || &arg1[0x3f] u< &var_158))
    int32_t temp0_16[0x4] = __psubd_xmmdq_memdq(var_158, var_d8)
    int32_t temp0_17[0x4] = __psubd_xmmdq_memdq(var_148, var_c8)
    *(arg1 + 0xc0) = temp0_16
    int32_t temp0_18[0x4] = __psubd_xmmdq_memdq(var_138, var_b8)
    *(arg1 + 0xd0) = temp0_17
    int32_t temp0_19[0x4] = __psubd_xmmdq_memdq(var_128, var_a8)
    *(arg1 + 0xe0) = temp0_18
    *(arg1 + 0xf0) = temp0_19
else
    int32_t* rax_4 = nullptr
    int64_t i_3 = 0x10
    int64_t i_1
    
    do
        *(rax_4 + &arg1[0x30]) = *(&var_158 + rax_4) - *(&var_d8 + rax_4)
        rax_4 = &rax_4[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

sub_14293f610(&arg1[0x30], 2)
sub_14293f960(&arg1[0x30])
sub_14296e1c0(arg1, arg2 + 0x80)
sub_14293f570(&arg1[0x20], arg1, arg1)
void* rdx_5 = &var_158
int128_t zmm2_1 = data_14353e060
int128_t zmm3_1 = data_14353e050
var_158[0] = arg1[0x20] - arg1[0x30]
var_158[1] = arg1[0x21] - arg1[0x31]
var_158[2] = arg1[0x22] - arg1[0x32]
var_158[3] = arg1[0x23] - arg1[0x33]
var_148[0] = arg1[0x24] - arg1[0x34]
var_148[1] = arg1[0x25] - arg1[0x35]
var_148[2] = arg1[0x26] - arg1[0x36]
var_148[3] = arg1[0x27] - arg1[0x37]
var_138[0] = arg1[0x28] - arg1[0x38]
var_138[1] = arg1[0x29] - arg1[0x39]
var_138[2] = arg1[0x2a] - arg1[0x3a]
var_138[3] = arg1[0x2b] - arg1[0x3b]
var_128[0] = arg1[0x2c] - arg1[0x3c]
var_128[1] = arg1[0x2d] - arg1[0x3d]
var_128[2] = arg1[0x2e] - arg1[0x3e]
var_128[3] = arg1[0x2f] - arg1[0x3f]

do
    int32_t rax_37 = i_2 + 4
    rdx_5 += 0x20
    int32_t temp0_21[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_2), 0), zmm7)
    i_2 += 8
    int32_t temp0_22[0x4] = _mm_cmpeq_epi32(temp0_21, zmm6)
    int32_t temp0_23[0x4] =
        _mm_add_epi32((temp0_22 & not.o(zmm2_1)) | (temp0_22 & zmm3_1), *(rdx_5 - 0x20))
    int32_t temp0_26[0x4] =
        _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_37), 0), zmm7), zmm6)
    *(rdx_5 - 0x20) = temp0_23
    *(rdx_5 - 0x10) =
        _mm_add_epi32((temp0_26 & not.o(zmm2_1)) | (temp0_26 & zmm3_1), *(rdx_5 - 0x10))
while (i_2 u< 0x10)

sub_14293f960(&var_158)
sub_14296dcf0(arg1, &var_158, &var_118)
sub_14296dcf0(&arg1[0x20], &arg1[0x30], &var_158)
int64_t result = sub_14296dcf0(&arg1[0x10], &arg1[0x30], &var_98)

if (arg3 == 0)
    result = sub_14296dcf0(&arg1[0x30], &var_118, &var_98)

__security_check_cookie(rax_1 ^ &var_178)
return result

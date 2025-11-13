// 函数: sub_1429405c0
// 地址: 0x1429405c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x140)
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int128_t zmm6 = data_14353e020
int128_t zmm7 = data_14353e010
int32_t zmm9[0x4] = data_142e11d00
int32_t zmm8[0x4] = data_142fc95f0
int32_t var_148 = arg1[0x10] - *arg1
int32_t var_144 = arg1[0x11] - arg1[1]
int32_t var_140 = arg1[0x12] - arg1[2]
int32_t var_13c = arg1[0x13] - arg1[3]
int32_t var_138 = arg1[0x14] - arg1[4]
int32_t var_134 = arg1[0x15] - arg1[5]
int32_t var_130 = arg1[0x16] - arg1[6]
int32_t var_12c = arg1[0x17] - arg1[7]
int32_t var_128 = arg1[0x18] - arg1[8]
int32_t var_124 = arg1[0x19] - arg1[9]
int32_t var_120 = arg1[0x1a] - arg1[0xa]
int32_t var_11c = arg1[0x1b] - arg1[0xb]
int32_t var_118 = arg1[0x1c] - arg1[0xc]
int32_t var_114 = arg1[0x1d] - arg1[0xd]
int32_t var_110 = arg1[0x1e] - arg1[0xe]
int32_t* rcx = &var_148
int32_t var_10c = arg1[0x1f] - arg1[0xf]
uint128_t zmm0

for (int32_t i = 0; i u< 0x10; )
    int32_t rax_34 = i + 4
    rcx = &rcx[8]
    zmm0 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zmm9)
    i += 8
    zmm0 = _mm_cmpeq_epi32(zmm0, zmm8)
    int32_t temp0_4[0x4] = _mm_add_epi32((zmm0 & not.o(zmm6)) | (zmm0 & zmm7), *(rcx - 0x20))
    zmm0 = _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_34), 0), zmm9), zmm8)
    *(rcx - 0x20) = temp0_4
    *(rcx - 0x10) = _mm_add_epi32((zmm0 & not.o(zmm6)) | (zmm0 & zmm7), *(rcx - 0x10))

sub_14293f960(&var_148)
int32_t var_108
sub_14296dcf0(&var_108, arg2 + 0x40, &var_148)
var_148 = arg1[0x10] + *arg1
int32_t var_144_1 = arg1[0x11] + arg1[1]
int32_t var_140_1 = arg1[0x12] + arg1[2]
int32_t var_13c_1 = arg1[0x13] + arg1[3]
int32_t var_138_1 = arg1[4] + arg1[0x14]
int32_t var_134_1 = arg1[0x15] + arg1[5]
int32_t var_130_1 = arg1[0x16] + arg1[6]
int32_t var_12c_1 = arg1[0x17] + arg1[7]
int32_t var_128_1 = arg1[8] + arg1[0x18]
int32_t var_124_1 = arg1[0x19] + arg1[9]
int32_t var_120_1 = arg1[0x1a] + arg1[0xa]
int32_t var_11c_1 = arg1[0x1b] + arg1[0xb]
int32_t var_118_1 = arg1[0xc] + arg1[0x1c]
int32_t var_114_1 = arg1[0x1d] + arg1[0xd]
int32_t var_110_1 = arg1[0x1e] + arg1[0xe]
int32_t var_10c_1 = arg1[0x1f] + arg1[0xf]
sub_14296dcf0(&arg1[0x10], arg2, &var_148)
sub_14296dcf0(arg1, arg2 + 0x80, &arg1[0x30])
int32_t var_c8 = var_108 + arg1[0x10]
int32_t var_104
int32_t var_c4 = var_104 + arg1[0x11]
int32_t var_100
int32_t var_c0 = var_100 + arg1[0x12]
int32_t var_fc
int32_t var_bc = var_fc + arg1[0x13]
int32_t var_f8
int32_t var_b8 = var_f8 + arg1[0x14]
int32_t var_f4
int32_t var_b4 = var_f4 + arg1[0x15]
int32_t var_f0
int32_t var_b0 = var_f0 + arg1[0x16]
int32_t r13 = arg1[0x1b]
int32_t r15 = arg1[0x1c]
int32_t rsi_1 = arg1[0x1d]
int32_t r11 = arg1[0x1e]
int32_t r9 = arg1[0x1f]
int32_t var_ec
int32_t var_ac = var_ec + arg1[0x17]
int32_t var_e8
int32_t var_a8 = var_e8 + arg1[0x18]
int32_t var_e4
int32_t var_a4 = arg1[0x19] + var_e4
int32_t var_e0
int32_t var_a0 = arg1[0x1a] + var_e0
int32_t var_dc
int32_t var_9c = var_dc + r13
int32_t var_11c_2 = r13 - var_dc
int32_t var_d8
int32_t var_98 = var_d8 + r15
int32_t var_118_2 = r15 - var_d8
int32_t var_d4
int32_t var_94 = var_d4 + rsi_1
int32_t var_114_2 = rsi_1 - var_d4
int32_t var_d0
int32_t var_90 = var_d0 + r11
int32_t var_110_2 = r11 - var_d0
int32_t var_cc
int32_t var_8c = var_cc + r9
int32_t* rcx_6 = &var_148
var_148 = arg1[0x10] - var_108
int32_t var_144_2 = arg1[0x11] - var_104
int32_t var_140_2 = arg1[0x12] - var_100
int32_t var_13c_2 = arg1[0x13] - var_fc
int32_t var_138_2 = arg1[0x14] - var_f8
int32_t var_134_2 = arg1[0x15] - var_f4
int32_t var_130_2 = arg1[0x16] - var_f0
int32_t var_12c_2 = arg1[0x17] - var_ec
int32_t var_128_2 = arg1[0x18] - var_e8
int32_t var_124_2 = arg1[0x19] - var_e4
int32_t i_2 = 0
int32_t var_120_2 = arg1[0x1a] - var_e0
int32_t i_1 = 0
int32_t var_10c_2 = r9 - var_cc

do
    int32_t rax_116 = i_1 + 4
    rcx_6 = &rcx_6[8]
    zmm0 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), zmm9)
    i_1 += 8
    zmm0 = _mm_cmpeq_epi32(zmm0, zmm8)
    int32_t temp0_12[0x4] = _mm_add_epi32((zmm0 & zmm7) | (zmm0 & not.o(zmm6)), *(rcx_6 - 0x20))
    zmm0 = _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_116), 0), zmm9), zmm8)
    *(rcx_6 - 0x20) = temp0_12
    *(rcx_6 - 0x10) = _mm_add_epi32((zmm0 & zmm7) | (zmm0 & not.o(zmm6)), *(rcx_6 - 0x10))
while (i_1 u< 0x10)

sub_14293f960(&var_148)
sub_14293f570(&arg1[0x10], &arg1[0x20], arg1)
void* rdx_5 = &var_108
var_108 = arg1[0x20] - *arg1
int32_t var_104_1 = arg1[0x21] - arg1[1]
int32_t var_100_1 = arg1[0x22] - arg1[2]
int32_t var_fc_1 = arg1[0x23] - arg1[3]
int32_t var_f8_1 = arg1[0x24] - arg1[4]
int32_t var_f4_1 = arg1[0x25] - arg1[5]
int32_t var_f0_1 = arg1[0x26] - arg1[6]
int32_t var_ec_1 = arg1[0x27] - arg1[7]
int32_t var_e8_1 = arg1[0x28] - arg1[8]
int32_t var_e4_1 = arg1[0x29] - arg1[9]
int32_t var_e0_1 = arg1[0x2a] - arg1[0xa]
int32_t var_dc_1 = arg1[0x2b] - arg1[0xb]
int32_t var_d8_1 = arg1[0x2c] - arg1[0xc]
int32_t var_d4_1 = arg1[0x2d] - arg1[0xd]
int32_t var_d0_1 = arg1[0x2e] - arg1[0xe]
int32_t var_cc_1 = arg1[0x2f] - arg1[0xf]

do
    int32_t rax_149 = i_2 + 4
    rdx_5 += 0x20
    int32_t temp0_18[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_2), 0), zmm9)
    i_2 += 8
    int32_t temp0_19[0x4] = _mm_cmpeq_epi32(temp0_18, zmm8)
    int32_t temp0_20[0x4] =
        _mm_add_epi32((temp0_19 & zmm7) | (temp0_19 & not.o(zmm6)), *(rdx_5 - 0x20))
    int32_t temp0_23[0x4] =
        _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_149), 0), zmm9), zmm8)
    *(rdx_5 - 0x20) = temp0_20
    *(rdx_5 - 0x10) = _mm_add_epi32((temp0_23 & zmm7) | (temp0_23 & not.o(zmm6)), *(rdx_5 - 0x10))
while (i_2 u< 0x10)

sub_14293f960(&var_108)
sub_14296dcf0(&arg1[0x20], &var_108, &arg1[0x10])
sub_14296dcf0(arg1, &arg1[0x10], &var_148)
int64_t result = sub_14296dcf0(&arg1[0x10], &var_108, &var_c8)

if (arg3 == 0)
    result = sub_14296dcf0(&arg1[0x30], &var_148, &var_c8)

__security_check_cookie(rax_1 ^ &var_178)
return result

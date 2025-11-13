// 函数: sub_142940c10
// 地址: 0x142940c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2e0)
int32_t zmm6[0x4]
int32_t var_48[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_58[0x4] = zmm7
int32_t zmm8[0x4]
int32_t var_68[0x4] = zmm8
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t i_7 = 0
int32_t r14 = 0
int32_t var_178[0x4]
sub_14296ca60(&var_178, arg2, 1, 0)
int32_t rsi = 0x1bf
int32_t zmm5[0x4] = data_14353de90
int128_t zmm9 = data_14353e020
int32_t zmm10[0x4] = data_14353e010
int32_t zmm12[0x4] = data_142e11d00
int32_t zmm11[0x4] = data_142fc95f0
int32_t var_2f8[0x4]
__builtin_memset(&var_2f8, 0, 0x40)
int32_t var_2b8[0x4] = var_178
int32_t var_238[0x4] = zmm5
int32_t var_228[0x4]
__builtin_memset(&var_228, 0, 0x30)
int32_t var_278[0x4] = zmm5
int32_t var_268_1[0x4]
__builtin_memset(&var_268_1, 0, 0x30)
int32_t var_1f8[0x4]
int32_t var_1b8[0x4]
int32_t rdi_4
int32_t zmm1[0x4]
int32_t zmm2[0x4]
int128_t zmm3
uint128_t zmm4
int32_t temp0_66

do
    char rcx_1 = *((zx.q(rsi) u>> 3) + arg3)
    
    if (rsi u< 8)
        rcx_1 &= 0xfc
    else if (rsi == 0x1bf)
        rcx_1 = -1
    
    int64_t i = 0
    rdi_4 = neg.d(zx.d(rcx_1) u>> (rsi.b & 7) & 1)
    zmm4 = _mm_shuffle_epi32(zx.o(r14) ^ zx.o(rdi_4), 0)
    
    do
        zmm1 = *(&var_238 + i)
        zmm3 = *(&var_2b8 + i)
        zmm2 = (zmm1 ^ zmm3) & zmm4
        *(&var_238 + i) = zmm2 ^ zmm1
        *(&var_2b8 + i) = zmm2 ^ zmm3
        i += 0x10
    while (i u< 0x40)
    
    for (int64_t i_1 = 0; i_1 u< 0x40; i_1 += 0x10)
        zmm1 = *(&var_2f8 + i_1)
        zmm3 = *(&var_278 + i_1)
        zmm2 = (zmm1 ^ zmm3) & zmm4
        *(&var_2f8 + i_1) = zmm2 ^ zmm1
        *(&var_278 + i_1) = zmm2 ^ zmm3
    
    zmm8 = var_238
    int128_t* rcx_3 = &var_1b8
    zmm7 = var_228
    int32_t temp0_2[0x4] = __paddd_xmmdq_memdq(zmm8, var_2f8)
    int32_t var_2e8_1[0x4]
    int32_t temp0_3[0x4] = __paddd_xmmdq_memdq(zmm7, var_2e8_1)
    r14 = rdi_4
    int32_t i_2 = 0
    int32_t temp0_4[0x4] = __psubd_xmmdq_memdq(zmm8, var_2f8)
    int32_t temp0_5[0x4] = __psubd_xmmdq_memdq(zmm7, var_2e8_1)
    var_1f8 = temp0_2
    int32_t var_2d8_1[0x4]
    int32_t var_218[0x4]
    int32_t temp0_6[0x4] = __paddd_xmmdq_memdq(var_218, var_2d8_1)
    int32_t temp0_7[0x4] = __psubd_xmmdq_memdq(var_218, var_2d8_1)
    int32_t var_2c8_1[0x4]
    uint128_t var_208
    int32_t temp0_8[0x4] = __paddd_xmmdq_memdq(var_208, var_2c8_1)
    zmm4 = __psubd_xmmdq_memdq(var_208, var_2c8_1)
    var_1b8 = temp0_4
    int32_t var_1a8_1[0x4] = temp0_5
    int32_t var_198_1[0x4] = temp0_7
    uint128_t var_188_1 = zmm4
    
    do
        int32_t rax_6 = i_2 + 4
        rcx_3 = &rcx_3[2]
        int32_t temp0_11[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_2), 0), zmm12)
        i_2 += 8
        int32_t temp0_12[0x4] = _mm_cmpeq_epi32(temp0_11, zmm11)
        int32_t temp0_13[0x4] =
            _mm_add_epi32((temp0_12 & not.o(zmm9)) | (temp0_12 & zmm10), rcx_3[-2])
        int32_t temp0_16[0x4] =
            _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_6), 0), zmm12), zmm11)
        rcx_3[-2] = temp0_13
        rcx_3[-1] = _mm_add_epi32((temp0_16 & not.o(zmm9)) | (temp0_16 & zmm10), rcx_3[-1])
    while (i_2 u< 0x10)
    
    sub_14293f960(&var_1b8)
    int32_t (* rcx_5)[0x4] = &var_2f8
    int32_t temp0_18[0x4] = __psubd_xmmdq_memdq(var_2b8, var_278)
    int32_t i_3 = 0
    int32_t var_168[0x4]
    int32_t temp0_19[0x4] = __psubd_xmmdq_memdq(var_168, var_268_1)
    var_2f8 = temp0_18
    int32_t var_2e8_2[0x4] = temp0_19
    int32_t var_258_1[0x4]
    int32_t var_158[0x4]
    int32_t var_2d8_2[0x4] = __psubd_xmmdq_memdq(var_158, var_258_1)
    int32_t var_248_1[0x4]
    int32_t var_148[0x4]
    int32_t var_2c8_2[0x4] = __psubd_xmmdq_memdq(var_148, var_248_1)
    
    do
        int32_t rax_7 = i_3 + 4
        rcx_5 = &rcx_5[2]
        int32_t temp0_23[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_3), 0), zmm12)
        i_3 += 8
        int32_t temp0_24[0x4] = _mm_cmpeq_epi32(temp0_23, zmm11)
        int32_t temp0_25[0x4] =
            _mm_add_epi32((temp0_24 & zmm10) | (temp0_24 & not.o(zmm9)), rcx_5[-2])
        int32_t temp0_28[0x4] =
            _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_7), 0), zmm12), zmm11)
        rcx_5[-2] = temp0_25
        rcx_5[-1] = _mm_add_epi32((temp0_28 & zmm10) | (temp0_28 & not.o(zmm9)), rcx_5[-1])
    while (i_3 u< 0x10)
    
    sub_14293f960(&var_2f8)
    sub_14296dcf0(&var_238, &var_1f8, &var_2f8)
    int32_t temp0_30[0x4] = __paddd_xmmdq_memdq(var_278, var_2b8)
    int32_t temp0_31[0x4] = __paddd_xmmdq_memdq(var_268_1, var_168)
    var_2f8 = temp0_30
    int32_t var_2e8_3[0x4] = temp0_31
    int32_t var_2d8_3[0x4] = __paddd_xmmdq_memdq(var_258_1, var_158)
    int32_t var_2c8_3[0x4] = __paddd_xmmdq_memdq(var_248_1, var_148)
    sub_14296dcf0(&var_2b8, &var_1b8, &var_2f8)
    int32_t (* rcx_9)[0x4] = &var_278
    int32_t temp0_34[0x4] = __psubd_xmmdq_memdq(var_238, var_2b8)
    int32_t i_4 = 0
    int32_t temp0_35[0x4] = __psubd_xmmdq_memdq(var_228, var_168)
    var_278 = temp0_34
    int32_t temp0_36[0x4] = __psubd_xmmdq_memdq(var_218, var_158)
    var_268_1 = temp0_35
    var_258_1 = temp0_36
    var_248_1 = __psubd_xmmdq_memdq(var_208, var_148)
    
    do
        int32_t rax_8 = i_4 + 4
        rcx_9 = &rcx_9[2]
        int32_t temp0_40[0x4] =
            _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i_4), 0), zmm12), zmm11)
        i_4 += 8
        int32_t temp0_43[0x4] =
            _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_8), 0), zmm12), zmm11)
        rcx_9[-2] = _mm_add_epi32((temp0_40 & not.o(zmm9)) | (zmm10 & temp0_40), rcx_9[-2])
        rcx_9[-1] = _mm_add_epi32((temp0_43 & not.o(zmm9)) | (zmm10 & temp0_43), rcx_9[-1])
    while (i_4 u< 0x10)
    
    sub_14293f960(&var_278)
    sub_14296e1c0(&var_2f8, &var_278)
    sub_14296dcf0(&var_278, &var_178, &var_2f8)
    int32_t temp0_46[0x4] = __paddd_xmmdq_memdq(var_2b8, var_238)
    int32_t temp0_47[0x4] = __paddd_xmmdq_memdq(var_168, var_228)
    var_2f8 = temp0_46
    var_2e8_1 = temp0_47
    var_2d8_1 = __paddd_xmmdq_memdq(var_158, var_218)
    var_2c8_1 = __paddd_xmmdq_memdq(var_148, var_208)
    sub_14296e1c0(&var_2b8, &var_2f8)
    sub_14296e1c0(&var_2f8, &var_1f8)
    sub_14296e1c0(&var_1f8, &var_1b8)
    sub_14296dcf0(&var_238, &var_2f8, &var_1f8)
    int32_t (* rcx_17)[0x4] = &var_1b8
    int32_t temp0_50[0x4] = __psubd_xmmdq_memdq(var_2f8, var_1f8)
    int32_t i_5 = 0
    int32_t temp0_51[0x4] = __psubd_xmmdq_memdq(var_2e8_1, temp0_3)
    var_1b8 = temp0_50
    int32_t var_1a8_2[0x4] = temp0_51
    int32_t var_198_2[0x4] = __psubd_xmmdq_memdq(var_2d8_1, temp0_6)
    int32_t var_188_2[0x4] = __psubd_xmmdq_memdq(var_2c8_1, temp0_8)
    
    do
        int32_t rax_9 = i_5 + 4
        rcx_17 = &rcx_17[2]
        int32_t temp0_55[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_5), 0), zmm12)
        i_5 += 8
        int32_t temp0_56[0x4] = _mm_cmpeq_epi32(temp0_55, zmm11)
        int32_t temp0_57[0x4] =
            _mm_add_epi32((temp0_56 & zmm10) | (temp0_56 & not.o(zmm9)), rcx_17[-2])
        int32_t temp0_60[0x4] =
            _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_9), 0), zmm12), zmm11)
        rcx_17[-2] = temp0_57
        rcx_17[-1] = _mm_add_epi32((temp0_60 & zmm10) | (temp0_60 & not.o(zmm9)), rcx_17[-1])
    while (i_5 u< 0x10)
    
    sub_14293f960(&var_1b8)
    sub_14296dfb0(&var_1f8, &var_1b8, 0x98a9)
    int32_t temp0_62[0x4] = __paddd_xmmdq_memdq(var_1f8, var_2f8)
    int32_t temp0_63[0x4] = __paddd_xmmdq_memdq(temp0_3, var_2e8_1)
    var_1f8 = temp0_62
    int32_t var_1e8_2[0x4] = temp0_63
    int32_t var_1d8_2[0x4] = __paddd_xmmdq_memdq(temp0_6, var_2d8_1)
    int32_t var_1c8_2[0x4] = __paddd_xmmdq_memdq(temp0_8, var_2c8_1)
    sub_14296dcf0(&var_2f8, &var_1b8, &var_1f8)
    temp0_66 = rsi
    rsi -= 1
while (temp0_66 - 1 s>= 0)
int64_t i_6 = 0
zmm4 = _mm_shuffle_epi32(zx.o(rdi_4), 0)

do
    zmm1 = *(&var_238 + i_6)
    zmm3 = *(&var_2b8 + i_6)
    zmm2 = (zmm1 ^ zmm3) & zmm4
    *(&var_238 + i_6) = zmm2 ^ zmm1
    *(&var_2b8 + i_6) = zmm2 ^ zmm3
    i_6 += 0x10
while (i_6 u< 0x40)

do
    zmm1 = *(&var_2f8 + i_7)
    zmm3 = *(&var_278 + i_7)
    zmm2 = (zmm1 ^ zmm3) & zmm4
    *(&var_2f8 + i_7) = zmm2 ^ zmm1
    *(&var_278 + i_7) = zmm2 ^ zmm3
    i_7 += 0x10
while (i_7 u< 0x40)

void var_f8
sub_14296e1c0(&var_f8, &var_2f8)
int32_t var_138[0x4]
sub_14296cfc0(&var_138, &var_f8)
sub_14296e1c0(&var_f8, &var_138)
sub_14296dcf0(&var_138, &var_f8, &var_2f8)
var_2f8 = var_138
int128_t var_128
int128_t var_2e8_4 = var_128
int32_t var_118[0x4]
int32_t var_2d8_4[0x4] = var_118
int128_t var_108
int128_t var_2c8_4 = var_108
sub_14296dcf0(&var_178, &var_238, &var_2f8)
sub_14296d520(arg1, &var_178)
int32_t rbx_1 = not.d(sub_14296cf00(&var_178, &data_14353de50))
sub_1428b8960(&var_178, 0x40)
sub_1428b8960(&var_238, 0x40)
sub_1428b8960(&var_2f8, 0x40)
sub_1428b8960(&var_2b8, 0x40)
sub_1428b8960(&var_278, 0x40)
sub_1428b8960(&var_1f8, 0x40)
sub_1428b8960(&var_1b8, 0x40)
__security_check_cookie(rax_1 ^ &var_318)
return zx.q(rbx_1)

// 函数: sub_142a307e0
// 地址: 0x142a307e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t zmm1[0x4] = arg1[1]
int128_t zmm6 = zx.o(0)
int32_t var_48[0x4] = *arg1
int16_t var_38[0x8] = zmm1
int64_t rdi = sx.q(arg3)

if (arg4 == 0)
    sub_142a0a9f0(&var_48)
    sub_142a0a9f0(&var_48)
else if (arg4 == 1)
    sub_142a0a9f0(&var_48)
    zmm6 = sub_142a092e0(&var_48)
else if (arg4 == 2)
    zmm6 = sub_142a092e0(&var_48)
    sub_142a0a9f0(&var_48)
else if (arg4 == 3)
    sub_142a092e0(&var_48)
    zmm6 = sub_142a092e0(&var_48)

uint128_t result = zx.o(*(rdi + arg2))
int16_t zmm3[0x8] = zx.o(*arg2)
zmm1 = __paddw_xmmdq_memdq(var_48, data_143600940)
int16_t zmm2[0x8] = __paddw_xmmdq_memdq(var_38, data_143600940)
zmm3 = _mm_unpacklo_epi32(zmm3, result.q)
zmm1 = _mm_srai_epi16(zmm1, 4)
zmm3 = _mm_add_epi16(_mm_unpacklo_epi8(zmm3, zmm6.q), zmm1)
int32_t* r8 = sx.q((rdi * 2).d)
zmm2 = _mm_srai_epi16(zmm2, 4)
int64_t rcx_7 = sx.q((rdi * 3).d)
result = zx.o(*(rcx_7 + arg2))
zmm3 = _mm_packus_epi16(zmm3, 
    _mm_add_epi16(_mm_unpacklo_epi8(_mm_unpacklo_epi32(zx.o(*(r8 + arg2)), result.q), zmm6.q), 
        zmm2))
*arg2 = zmm3[0].d
zmm3 = _mm_bsrli_si128(zmm3, 4)
*(rdi + arg2) = zmm3[0].d
zmm3 = _mm_bsrli_si128(zmm3, 4)
*(r8 + arg2) = zmm3[0].d
*(rcx_7 + arg2) = _mm_bsrli_si128(zmm3, 4)[0].d
__security_check_cookie(rax_1 ^ &var_68)
return result

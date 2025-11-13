// 函数: sub_142a30930
// 地址: 0x142a30930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_18[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_28[0x4] = zmm7
int16_t zmm8[0x8]
int16_t var_38[0x8] = zmm8
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t zmm1[0x4] = arg1[1]
int128_t zmm9 = zx.o(0)
int32_t zmm10[0x4] = data_143600950
int32_t var_e8[0x4] = *arg1
int32_t var_d8[0x4] = zmm1
int32_t var_c8[0x4] = arg1[2]
int32_t var_b8[0x4] = arg1[3]
int32_t var_a8[0x4] = arg1[4]
int32_t var_98[0x4] = arg1[5]
int32_t var_88[0x4] = arg1[6]
int16_t var_78[0x8] = arg1[7]
int64_t rbx = sx.q(arg3)

if (arg4 == 0)
    sub_142a0aaa0(&var_e8)
    zmm9, zmm10 = sub_142a0aaa0(&var_e8)
else if (arg4 == 1)
    sub_142a0aaa0(&var_e8)
    zmm9, zmm10 = sub_142a09400(&var_e8)
else if (arg4 == 2)
    sub_142a09400(&var_e8)
    zmm9, zmm10 = sub_142a0aaa0(&var_e8)
else if (arg4 == 3)
    sub_142a09400(&var_e8)
    zmm9, zmm10 = sub_142a09400(&var_e8)

uint128_t zmm0 = zx.o(*arg2)
zmm1 = _mm_adds_epi16(var_e8, zmm10)
int32_t zmm2[0x4] = _mm_adds_epi16(var_d8, zmm10)
int32_t zmm3[0x4] = _mm_adds_epi16(var_c8, zmm10)
int32_t zmm4[0x4] = _mm_adds_epi16(var_b8, zmm10)
int32_t zmm5[0x4] = _mm_adds_epi16(var_a8, zmm10)
zmm6 = _mm_adds_epi16(var_98, zmm10)
zmm7 = _mm_adds_epi16(var_88, zmm10)
zmm0 = _mm_unpacklo_epi8(zmm0, zmm9.q)
zmm8 = _mm_adds_epi16(var_78, zmm10)
int64_t rcx_7 = sx.q((rbx * 2).d)
zmm0 = _mm_add_epi16(zmm0, _mm_srai_epi16(zmm1, 5))
zmm2 = _mm_srai_epi16(zmm2, 5)
*arg2 = _mm_packus_epi16(zmm0, zmm0).q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rbx + arg2)), zmm9.q), zmm2)
zmm3 = _mm_srai_epi16(zmm3, 5)
*(rbx + arg2) = _mm_packus_epi16(zmm0, zmm0).q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_7 + arg2)), zmm9.q), zmm3)
zmm4 = _mm_srai_epi16(zmm4, 5)
*(rcx_7 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_8 = sx.q((rbx * 3).d)
zmm5 = _mm_srai_epi16(zmm5, 5)
zmm6 = _mm_srai_epi16(zmm6, 5)
zmm7 = _mm_srai_epi16(zmm7, 5)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_8 + arg2)), zmm9.q), zmm4)
zmm8 = _mm_srai_epi16(zmm8, 5)
*(rcx_8 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_9 = sx.q((rbx << 2).d)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_9 + arg2)), zmm9.q), zmm5)
*(rcx_9 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int64_t rcx_10 = sx.q((rbx * 5).d)
int64_t rax_8 = sx.q((rbx * 3).d * 2)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_10 + arg2)), zmm9.q), zmm6)
*(rcx_10 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rax_8 + arg2)), zmm9.q), zmm7)
*(rax_8 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
int32_t result = rbx.d * 7
int64_t result_1 = sx.q(result)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(result_1 + arg2)), zmm9.q), zmm8)
*(result_1 + arg2) = _mm_packus_epi16(zmm0, zmm0).q
__security_check_cookie(rax_1 ^ &var_108)
return result

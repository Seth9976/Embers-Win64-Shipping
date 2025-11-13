// 函数: sub_142a166d0
// 地址: 0x142a166d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t rbp = sx.q((arg2 << 2).d)
int32_t zmm13[0x4] = *arg1
int64_t rcx = sx.q(arg2.d)
int32_t zmm14[0x4] = *(rcx + arg1)
int32_t temp0[0x4] = _mm_subs_epu8(zmm13, zmm14)
int32_t zmm8[0x4] = *(arg1 - rbp)
int64_t r14 = sx.q((arg2 * 3).d)
int64_t rsi = sx.q((arg2 * 2).d)
int128_t* r12_1 = arg1 - r14
int32_t zmm3[0x4] = *(arg1 + rsi)
int128_t* r13_1 = arg1 - rsi
uint128_t zmm6 = *(r14 + arg1)
void* rax_8 = arg1 - rcx
int16_t zmm2[0x8] = *r12_1
var_198 = rax_8
int32_t zmm10[0x4] = *r13_1
int32_t zmm9[0x4] = *rax_8
int32_t temp0_1[0x4] = _mm_subs_epu8(zmm14, zmm3)
int32_t var_178[0x4] = zmm10
int32_t temp0_2[0x4] = _mm_subs_epu8(zmm9, zmm10)
int32_t var_168[0x4] = zmm9
uint128_t zmm7 = _mm_subs_epu8(zmm10, zmm9) | temp0_2
int32_t temp0_4[0x4] = _mm_subs_epu8(zmm9, zmm13)
int32_t temp0_5[0x4] = _mm_subs_epu8(zmm13, zmm9)
int32_t zmm5[0x4] = _mm_cmpeq_epi8(zmm7, zmm7)
int32_t zmm4[0x4] = temp0_4 | temp0_5
int32_t zmm1[0x4] = temp0 | _mm_subs_epu8(zmm14, zmm13)
int32_t temp0_8[0x4] = __punpcklqdq_xmmdq_memdq(*arg5, *arg8)
zmm7 = _mm_max_epu8(zmm7, zmm1)
uint128_t zmm15 = _mm_subs_epu8(zmm7, temp0_8)
int32_t temp0_11[0x4] = _mm_subs_epu8(zmm3, zmm6)
zmm15 = _mm_cmpeq_epi8(zmm15, zx.o(0)) ^ zmm5
int32_t zmm12[0x4] = temp0_1 | _mm_subs_epu8(zmm3, zmm14)
int32_t temp0_14[0x4] = _mm_subs_epu8(zmm6, zmm3)
int32_t temp0_15[0x4] = _mm_subs_epu8(zmm2, zmm10)
int32_t temp0_16[0x4] = _mm_max_epu8(zmm12, temp0_11 | temp0_14)
int32_t temp0_20[0x4] = _mm_max_epu8(temp0_15 | _mm_subs_epu8(zmm10, zmm2), 
    _mm_subs_epu8(zmm8, zmm2) | _mm_subs_epu8(zmm2, zmm8))
zmm2 = _mm_subs_epu8(zmm10, zmm14)
int32_t temp0_22[0x4] = _mm_subs_epu8(zmm14, zmm10)
int32_t temp0_23[0x4] = _mm_adds_epu8(zmm4, zmm4)
int64_t rdx = 0
zmm2 = (zmm2 | temp0_22) & data_143600c90
int32_t result[0x4] = *arg3
int32_t temp0_24[0x4] = _mm_subs_epu8(zmm13, zmm6)
int32_t temp0_25[0x4] = __punpcklqdq_xmmdq_memdq(result, *arg6)
zmm6 = _mm_subs_epu8(zmm6, zmm13)
int32_t temp0_32[0x4] = _mm_max_epu8(temp0_20, 
    _mm_max_epu8(zmm7, 
        _mm_cmpeq_epi8(_mm_subs_epu8(_mm_adds_epu8(_mm_srli_epi16(zmm2, 1), temp0_23), temp0_25), 
            zx.o(0)) ^ zmm5))
int32_t temp0_33[0x4] = __punpcklqdq_xmmdq_memdq(*arg4, *arg7)
int32_t var_188[0x4] =
    _mm_cmpeq_epi8(_mm_subs_epu8(_mm_max_epu8(temp0_16, temp0_32), temp0_33), zx.o(0))
int32_t temp0_37[0x4] = _mm_subs_epu8(zmm9, zmm8)
int64_t i_1 = 2
int32_t temp0_39[0x4] = _mm_max_epu8(_mm_subs_epu8(zmm8, zmm9) | temp0_37, temp0_24 | zmm6)
zmm1 = *r12_1
int32_t temp0_40[0x4] = _mm_subs_epu8(zmm9, zmm1)
zmm2 = _mm_subs_epu8(zmm1, zmm9) | temp0_40
result = *(arg1 + rsi)
int128_t* rax_11 = r12_1
zmm12 = _mm_cmpeq_epi8(
    __psubusb_xmmdq_memdq(
        _mm_max_epu8(temp0_39, 
            _mm_max_epu8(
                _mm_max_epu8(zmm2, _mm_subs_epu8(zmm13, result) | _mm_subs_epu8(result, zmm13)), 
                zmm7)), 
        data_143600c10), 
    zx.o(0)) & var_188
int32_t var_158[0x4]
int32_t var_148[0x4]
int32_t var_138[0x4]
int32_t result_1[0x4]
int32_t result_2[0x4]
int64_t i

do
    zmm3 = zx.o(*(r14 - rbp + rax_11))
    rdx += 8
    zmm10 = zx.o(*(r14 - rsi + rax_11))
    zmm8 = zx.o(*rax_11)
    zmm4 = zx.o(*(rax_11 + r14))
    zmm1 = zx.o(*(r14 - rcx + rax_11))
    zmm9 = zx.o(*(rcx + r14 + rax_11))
    zmm6 = zx.o(*(r14 + rsi + rax_11))
    zmm7 = zx.o(*(rax_11 + (r14 << 1)))
    rax_11 += 8
    int32_t temp0_49[0x4] = _mm_unpacklo_epi8(zmm3, 0)
    int32_t temp0_50[0x4] = _mm_unpacklo_epi8(zmm10, 0)
    int32_t temp0_51[0x4] = _mm_unpacklo_epi8(zmm4, 0)
    result = _mm_add_epi16(temp0_49, temp0_49)
    int32_t temp0_53[0x4] = _mm_unpacklo_epi8(zmm8, 0)
    int32_t temp0_54[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    zmm5 = _mm_add_epi16(temp0_50, temp0_53)
    int32_t temp0_56[0x4] = _mm_unpacklo_epi8(zmm9, 0)
    zmm5 = __paddw_xmmdq_memdq(_mm_add_epi16(zmm5, result), data_143600c00)
    zmm7 = _mm_unpacklo_epi8(zmm7, 0)
    result = _mm_add_epi16(temp0_51, temp0_53)
    zmm6 = _mm_unpacklo_epi8(zmm6, 0)
    result = _mm_add_epi16(result, temp0_49)
    zmm5 = _mm_add_epi16(zmm5, temp0_54)
    result = _mm_add_epi16(result, zmm5)
    int16_t temp0_65[0x8] = _mm_add_epi16(temp0_56, temp0_51)
    result = _mm_srli_epi16(result, 3)
    int16_t temp0_67[0x8] = _mm_add_epi16(temp0_65, temp0_50)
    *(&var_158[2] + rdx) = _mm_packus_epi16(result, result)[0].q
    result = _mm_add_epi16(temp0_67, zmm5)
    zmm2 = _mm_sub_epi16(temp0_67, temp0_50)
    result = _mm_srli_epi16(result, 3)
    int16_t temp0_72[0x8] = _mm_add_epi16(zmm2, temp0_54)
    result = _mm_packus_epi16(result, result)
    int32_t temp0_74[0x4] = _mm_sub_epi16(zmm5, temp0_49)
    *(&var_148[2] + rdx) = result[0].q
    zmm2 = _mm_sub_epi16(temp0_72, temp0_54)
    zmm5 = _mm_add_epi16(temp0_74, zmm6)
    result = _mm_add_epi16(temp0_72, zmm5)
    int16_t temp0_78[0x8] = _mm_add_epi16(zmm2, temp0_51)
    result = _mm_srli_epi16(result, 3)
    int32_t temp0_80[0x4] = _mm_sub_epi16(zmm5, temp0_49)
    result = _mm_packus_epi16(result, result)
    zmm5 = _mm_add_epi16(temp0_80, zmm7)
    *(&var_138[2] + rdx) = result[0].q
    result = _mm_add_epi16(temp0_78, zmm5)
    zmm2 = _mm_sub_epi16(temp0_78, temp0_51)
    result = _mm_srli_epi16(result, 3)
    int16_t temp0_86[0x8] = _mm_add_epi16(zmm2, temp0_56)
    result = _mm_packus_epi16(result, result)
    int32_t temp0_88[0x4] = _mm_sub_epi16(zmm5, temp0_53)
    *(&result_1[2] + rdx) = result[0].q
    zmm2 = _mm_sub_epi16(temp0_86, temp0_56)
    zmm5 = _mm_add_epi16(temp0_88, zmm7)
    result = _mm_add_epi16(temp0_86, zmm5)
    int16_t temp0_92[0x8] = _mm_add_epi16(zmm2, zmm6)
    result = _mm_srli_epi16(result, 3)
    int32_t temp0_94[0x4] = _mm_sub_epi16(zmm5, temp0_50)
    result = _mm_packus_epi16(result, result)
    zmm5 = _mm_add_epi16(temp0_94, zmm7)
    *(&result_2[2] + rdx) = result[0].q
    zmm2 = _mm_srli_epi16(_mm_add_epi16(temp0_92, zmm5), 3)
    *(&var_168[2] + rdx) = _mm_packus_epi16(zmm2, zmm2)[0].q
    i = i_1
    i_1 -= 1
while (i != 1)
zmm7 = data_143600c70
void* rcx_1 = arg1 + rsi
zmm10 = *r12_1
void* rax_12 = var_198
zmm13 ^= zmm7
zmm2 = data_143600c20
zmm3 = var_158
zmm9 = var_178 ^ zmm7
zmm14 ^= zmm7
zmm8 = var_168 ^ zmm7
int32_t temp0_100[0x4] = _mm_subs_epi8(zmm13, zmm8)
zmm1 = _mm_adds_epi8(
    _mm_adds_epi8(_mm_adds_epi8(_mm_subs_epi8(zmm9, zmm14) & zmm15, temp0_100), temp0_100), 
    temp0_100) & var_188
int32_t temp0_105[0x4] = _mm_adds_epi8(data_143600c40, zmm1)
zmm2 = _mm_adds_epi8(zmm2, zmm1)
zmm4 = _mm_cmpgt_epi8(zx.o(0), temp0_105)
result = _mm_srli_epi16(temp0_105, 3) & data_143600c50
zmm4 = (zmm4 & data_143600c80) | result
int32_t temp0_109[0x4] = _mm_cmpgt_epi8(zx.o(0), zmm2)
int32_t temp0_110[0x4] = __paddsb_xmmdq_memdq(zmm4, data_143600c10)
int32_t temp0_111[0x4] = _mm_subs_epi8(zmm13, zmm4)
int32_t zmm11[0x4] = temp0_109 & data_143600c80
result =
    (_mm_cmpgt_epi8(zx.o(0), temp0_110) & zmm7) | (_mm_srli_epi16(temp0_110, 1) & data_143600c60)
zmm2 = _mm_srli_epi16(zmm2, 3)
zmm15 &= not.o(result)
result = zmm12 & not.o(*rcx_1)
int32_t temp0_115[0x4] = _mm_adds_epi8(zmm11 | (zmm2 & data_143600c50), zmm8)
zmm3 = (zmm3 & zmm12) | result
zmm1 = (var_148 & zmm12) | (zmm12 & not.o(zmm10))
int32_t temp0_116[0x4] = _mm_subs_epi8(zmm14, zmm15)
*r12_1 = zmm1
zmm1 = zmm12 & not.o(_mm_adds_epi8(zmm15, zmm9) ^ zmm7)
result = result_1
*r13_1 = zmm1 | (var_138 & zmm12)
zmm1 = (zmm12 & not.o(temp0_115 ^ zmm7)) | (result & zmm12)
result = result_2
*rax_12 = zmm1
*arg1 = (zmm12 & not.o(temp0_111 ^ zmm7)) | (result & zmm12)
int32_t var_108[0x4]
result = var_108 & zmm12
*(rcx + arg1) = (zmm12 & not.o(temp0_116 ^ zmm7)) | result
*rcx_1 = zmm3
__security_check_cookie(rax_1 ^ &var_198)
return result

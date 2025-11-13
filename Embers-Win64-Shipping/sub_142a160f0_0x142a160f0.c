// 函数: sub_142a160f0
// 地址: 0x142a160f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4[0x4] = *arg1
int32_t zmm11[0x4] = *(arg1 - sx.q((arg2 << 2).d))
int64_t r9 = sx.q((arg2 * 3).d)
int32_t zmm3[0x4] = *(r9 + arg1)
int32_t zmm9[0x4] = *(arg1 - r9)
int128_t* rcx = sx.q((arg2 * 2).d)
int64_t rax_7 = sx.q(arg2.d)
void* r10_2 = arg1 - rcx
int32_t zmm7[0x4] = *(rax_7 + arg1)
int32_t zmm2[0x4] = *(rcx + arg1)
void* rdx_1 = arg1 - rax_7
int32_t zmm10[0x4] = *r10_2
int32_t temp0[0x4] = _mm_subs_epu8(zmm4, zmm7)
int32_t zmm6[0x4] = *rdx_1
int32_t zmm12[0x4] = _mm_subs_epu8(zmm10, zmm6) | _mm_subs_epu8(zmm6, zmm10)
int32_t temp0_3[0x4] = _mm_subs_epu8(zmm6, zmm4)
int32_t temp0_4[0x4] = _mm_subs_epu8(zmm4, zmm6)
int32_t zmm8[0x4] = _mm_cmpeq_epi8(zmm12, zmm12)
int32_t zmm5[0x4] = temp0_3 | temp0_4
int32_t zmm1[0x4] = temp0 | _mm_subs_epu8(zmm7, zmm4)
int32_t zmm0[0x4] = *arg5
int32_t temp0_7[0x4] = _mm_max_epu8(zmm12, zmm1)
int32_t var_b8[0x4] = __pcmpeqb_xmmdq_memdq(
    _mm_subs_epu8(temp0_7, __punpcklqdq_xmmdq_memdq(zmm0, *arg8)), data_142d8f750) ^ zmm8
zmm1 = data_143600c70
zmm6 ^= zmm1
zmm4 ^= zmm1
int32_t var_a8[0x4] = zmm6
int32_t zmm13[0x4] = zmm10 ^ zmm1
int32_t var_c8[0x4] = zmm7 ^ zmm1
int32_t var_98[0x4] = zmm4
int32_t temp0_11[0x4] = _mm_subs_epi8(zmm4, zmm6)
int32_t temp0_12[0x4] = _mm_subs_epu8(zmm2, zmm3)
int32_t temp0_16[0x4] = _mm_max_epu8(_mm_subs_epu8(zmm7, zmm2) | _mm_subs_epu8(zmm2, zmm7), 
    temp0_12 | _mm_subs_epu8(zmm3, zmm2))
int32_t temp0_17[0x4] = _mm_adds_epu8(zmm5, zmm5)
int32_t temp0_18[0x4] = _mm_subs_epu8(zmm9, zmm10)
int32_t temp0_19[0x4] = _mm_subs_epu8(zmm10, zmm7)
int32_t temp0_20[0x4] = _mm_subs_epu8(zmm10, zmm9)
zmm2 = (temp0_19 | _mm_subs_epu8(zmm7, zmm10)) & data_143600c90
zmm0 = *arg3
int32_t temp0_22[0x4] = _mm_subs_epu8(zmm11, zmm9)
int32_t temp0_23[0x4] = __punpcklqdq_xmmdq_memdq(zmm0, *arg6)
int32_t temp0_25[0x4] = _mm_max_epu8(temp0_18 | temp0_20, temp0_22 | _mm_subs_epu8(zmm9, zmm11))
zmm2 = _mm_srli_epi16(zmm2, 1)
zmm1 = data_143600c10
int32_t temp0_28[0x4] = _mm_subs_epu8(_mm_adds_epu8(zmm2, temp0_17), temp0_23)
zmm0 = *arg4
zmm2 = _mm_cmpeq_epi8(temp0_28, zx.o(0))
int32_t temp0_30[0x4] = __punpcklqdq_xmmdq_memdq(zmm0, *arg7)
int32_t temp0_31[0x4] = _mm_max_epu8(temp0_7, zmm2 ^ zmm8)
zmm2 = data_143600c20
int32_t temp0_34[0x4] =
    _mm_subs_epu8(_mm_max_epu8(temp0_16, _mm_max_epu8(temp0_25, temp0_31)), temp0_30)
int32_t temp0_35[0x4] = _mm_subs_epi8(zmm13, var_c8)
zmm6 = _mm_cmpeq_epi8(temp0_34, zx.o(0))
int32_t temp0_39[0x4] =
    _mm_adds_epi8(_mm_adds_epi8(_mm_adds_epi8(temp0_35 & var_b8, temp0_11), temp0_11), temp0_11)
zmm4 = data_143600c70
zmm6 &= temp0_39
int32_t temp0_40[0x4] = _mm_adds_epi8(data_143600c40, zmm6)
int32_t temp0_41[0x4] = _mm_adds_epi8(zmm2, zmm6)
zmm3 = _mm_cmpgt_epi8(zx.o(0), temp0_40)
zmm0 = _mm_srli_epi16(temp0_40, 3) & data_143600c50
zmm3 = (zmm3 & data_143600c80) | zmm0
zmm9 = _mm_cmpgt_epi8(zx.o(0), temp0_41)
int32_t temp0_45[0x4] = _mm_adds_epi8(zmm1, zmm3)
zmm9 &= data_143600c80
zmm7 = var_b8 & not.o((_mm_cmpgt_epi8(zx.o(0), temp0_45) & zmm4)
    | (_mm_srli_epi16(temp0_45, 1) & data_143600c60))
int32_t temp0_49[0x4] =
    __paddsb_xmmdq_memdq(zmm9 | (_mm_srli_epi16(temp0_41, 3) & data_143600c50), var_a8)
*r10_2 = _mm_adds_epi8(zmm7, zmm13) ^ zmm4
int32_t temp0_51[0x4] = _mm_subs_epi8(var_c8, zmm7)
zmm0 = _mm_subs_epi8(var_98, zmm3) ^ zmm4
*rdx_1 = temp0_49 ^ zmm4
*arg1 = zmm0
*(rax_7 + arg1) = temp0_51 ^ zmm4
return arg7

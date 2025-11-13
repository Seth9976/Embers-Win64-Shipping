// 函数: sub_1429e8500
// 地址: 0x1429e8500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = *(arg1 + 8)
int16_t result[0x8] = *rax
int32_t zmm2[0x4] = rax[1]
int128_t* rax_1 = arg2[3]
int16_t (* rdx)[0x8] = *(arg1 + 0x18)
int128_t zmm8 = data_1436091b0
int16_t temp0[0x8] = _mm_srai_epi16(result, 0xf)
int32_t zmm6[0x4] = *rax_1
int32_t zmm7[0x4] = rax_1[1]
int16_t (* rax_2)[0x8] = *(arg1 + 0x38)
int16_t zmm5[0x8] = _mm_sub_epi16(temp0 ^ result, temp0)
int128_t zmm9 = data_1436091c0
int16_t temp0_2[0x8] = _mm_srai_epi16(zmm2, 0xf)
int16_t temp0_4[0x8] = __pmulhw_xmmdq_memdq(__paddw_xmmdq_memdq(zmm5, *rax_2), *rdx)
int32_t zmm4[0x4] = __pmulhw_xmmdq_memdq(
    __paddw_xmmdq_memdq(_mm_sub_epi16(temp0_2 ^ zmm2, temp0_2), rax_2[1]), rdx[1])
int16_t (* rax_3)[0x8] = *arg2
zmm5 = _mm_sub_epi16(temp0_4 ^ temp0, temp0)
result = _mm_mullo_epi16(zmm5, zmm6)
zmm2 = _mm_cmpeq_epi16(zx.o(0), zmm5)
*rax_3 = zmm5
int32_t temp0_11[0x4] = _mm_sub_epi16(zmm4 ^ temp0_2, temp0_2)
(*arg2)[1] = temp0_11
*arg2[1] = result
arg2[1][1] = _mm_mullo_epi16(temp0_11, zmm7)
char* rax_7 = arg2[5]
int16_t temp0_13[0x8] = _mm_cmpeq_epi16(zx.o(0), zx.o(0))
int32_t temp0_15[0x4] =
    _mm_max_epi16((zmm2 ^ temp0_13) & zmm8, (_mm_cmpeq_epi16(zx.o(0), temp0_11) ^ temp0_13) & zmm9)
int32_t temp0_17[0x4] = _mm_max_epi16(temp0_15, _mm_shuffle_epi32(temp0_15, 0xe))
int32_t temp0_19[0x4] = _mm_max_epi16(temp0_17, _mm_shufflelo_epi16(temp0_17, 0xe))
result = _mm_shufflelo_epi16(temp0_19, 1)
*rax_7 = _mm_max_epi16(temp0_19, result)[0].b
return result

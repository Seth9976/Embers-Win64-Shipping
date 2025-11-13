// 函数: sub_1429e8b30
// 地址: 0x1429e8b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48
int64_t rax_1 = __security_cookie ^ &var_48
int128_t* rax_2 = *(arg1 + 8)
var_48 = 0x8040100
int32_t var_44 = 0x6030205
int32_t var_40 = 0xa0d0c09
int32_t zmm1[0x4] = rax_2[1]
int32_t zmm0[0x4] = *rax_2
int128_t* rax_3 = arg2[3]
int32_t temp0[0x4] = _mm_abs_epi16(zmm0)
int16_t temp0_1[0x8] = _mm_srai_epi16(zmm0, 0xf)
int16_t temp0_2[0x8] = _mm_srai_epi16(zmm1, 0xf)
int32_t var_3c = 0xf0e0b07
int32_t zmm6[0x4] = *rax_3
int32_t zmm7[0x4] = rax_3[1]
int128_t* rax_4 = *(arg1 + 0x38)
int16_t (* rcx)[0x8] = *(arg1 + 0x18)
int16_t zmm4[0x8] = rax_4[1]
int16_t temp0_4[0x8] = __pmulhw_xmmdq_memdq(_mm_add_epi16(*rax_4, temp0), *rcx)
int32_t temp0_5[0x4] = _mm_abs_epi16(zmm1)
int32_t (* rax_5)[0x4] = *arg2
int16_t temp0_7[0x8] = __pmulhw_xmmdq_memdq(_mm_add_epi16(zmm4, temp0_5), rcx[1])
int32_t temp0_8[0x4] = _mm_sub_epi16(temp0_4 ^ temp0_1, temp0_1)
*rax_5 = temp0_8
void* rax_6 = *arg2
int32_t temp0_9[0x4] = _mm_sub_epi16(temp0_7 ^ temp0_2, temp0_2)
int32_t temp0_10[0x4] = _mm_mullo_epi16(temp0_8, zmm6)
*(rax_6 + 0x10) = temp0_9
int32_t (* rax_7)[0x4] = arg2[1]
int32_t temp0_11[0x4] = _mm_mullo_epi16(temp0_9, zmm7)
*rax_7 = temp0_10
*(arg2[1] + 0x10) = temp0_11
uint32_t temp0_16 = _mm_movemask_epi8(__pshufb_xmmdq_memdq(
    _mm_packs_epi16(_mm_cmpgt_epi16(temp0_4, zx.o(0)), _mm_cmpgt_epi16(temp0_7, zx.o(0))), 
    var_48.o))
uint64_t rflags
char temp0_17
temp0_17, rflags = _bit_scan_reverse(temp0_16)
char rcx_2 = temp0_17 + 1
char* result = arg2[5]

if (temp0_16 == 0)
    rcx_2 = 0

*result = rcx_2
__security_check_cookie(rax_1 ^ &var_48)
return result

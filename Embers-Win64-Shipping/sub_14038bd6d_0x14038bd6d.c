// 函数: sub_14038bd6d
// 地址: 0x14038bd6d
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_28[0x4] = zmm6
uint128_t zmm7
uint128_t var_18 = zmm7
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
int64_t rdx = sx.q(arg2)
int64_t rax = rdx * 3
int32_t zmm2[0x4] = *(arg1 + (rdx << 1))
void* rsi_2 = arg1 + rax
int16_t zmm3[0x8] = *rsi_2
uint128_t zmm4 = *(rsi_2 + rdx)
int32_t zmm5[0x4] = *(rsi_2 + (rdx << 1))
void* rsi_3 = rsi_2 + rax
zmm6 = *rsi_3
zmm7 = *(rsi_3 + rdx)
int16_t var_e0[0x8] = *arg1
int16_t zmm0[0x8] = *(rsi_3 + (rdx << 1))
int32_t var_d0[0x4] = *(arg1 + rdx)
int32_t var_c0[0x4] = zmm2
int16_t var_b0[0x8] = zmm3
uint128_t var_a0 = zmm4
int32_t var_90[0x4] = zmm5
int32_t var_80[0x4] = zmm6
uint128_t var_70 = zmm7
int16_t var_60[0x8] = zmm0
int64_t* i = arg5
int64_t rdx_1 = sx.q(arg6)
int32_t zmm1[0x4] = *((sx.q(arg3) << 5) + &data_143608a90)
zmm2 = *((sx.q(arg3) << 5) + 0x143608aa0)
zmm5 = *((sx.q(arg4) << 5) + &data_143608a90)
zmm6 = *((sx.q(arg4) << 5) + 0x143608aa0)
uint128_t temp0 = _mm_bsrli_si128(var_e0, 1)
zmm3 = _mm_unpacklo_epi8(var_e0, 0)
zmm4 = _mm_unpacklo_epi8(temp0, 0)
zmm7 = _mm_srai_epi16(__paddw_xmmdq_memdq(
    _mm_add_epi16(_mm_mullo_epi16(zmm3, zmm1), _mm_mullo_epi16(zmm4, zmm2)), *@@@@@@@"), 7)
int128_t* rsp = &var_d0

do
    zmm3 = *rsp
    uint128_t temp0_8 = _mm_bsrli_si128(zmm3, 1)
    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
    zmm4 = _mm_unpacklo_epi8(temp0_8, 0)
    int16_t temp0_13[0x8] = _mm_add_epi16(_mm_mullo_epi16(zmm3, zmm1), _mm_mullo_epi16(zmm4, zmm2))
    zmm7 = _mm_mullo_epi16(zmm7, zmm5)
    int16_t temp0_16[0x8] = _mm_srai_epi16(__paddw_xmmdq_memdq(temp0_13, *u"@@@@@@@"), 7)
    int16_t temp0_18[0x8] = _mm_add_epi16(_mm_mullo_epi16(temp0_16, zmm6), zmm7)
    zmm7 = temp0_16
    *i = _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(temp0_18, *@@@@@@@"), 7), zx.o(0))[0].q
    rsp = &rsp[1]
    i += rdx_1
while (i != &i[rdx_1])

int64_t* rsp_1 = *rsp
*rsp_1
rsp_1[1]
*(rsp_1 + 0x20)
*(rsp_1 + 0x10)
return (sx.q(arg4) << 5) + &data_143608a90

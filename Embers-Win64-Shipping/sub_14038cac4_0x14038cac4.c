// 函数: sub_14038cac4
// 地址: 0x14038cac4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_28[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_18[0x4] = zmm7
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
char var_e0[0x10]
int128_t* rsp = &var_e0
int64_t rdx = sx.q(arg2)
int64_t rax = rdx * 3
char zmm1[0x10] = *(arg1 + rdx)
char zmm2[0x10] = *(arg1 + (rdx << 1))
void* rsi_2 = arg1 + rax
int32_t zmm3[0x4] = *rsi_2
int32_t zmm4[0x4] = *(rsi_2 + rdx)
uint128_t zmm5 = *(rsi_2 + (rdx << 1))
void* rsi_3 = rsi_2 + rax
zmm6 = *rsi_3
zmm7 = *(rsi_3 + rdx)
var_e0 = *arg1
char zmm0[0x10] = *(rsi_3 + (rdx << 1))
char var_d0[0x10] = zmm1
int64_t var_c0 = zmm2[0].q
int64_t var_b0 = zmm3[0].q
int64_t var_a0 = zmm4[0].q
int64_t var_90 = zmm5.q
int64_t var_80 = zmm6[0].q
int64_t var_70 = zmm7[0].q
int64_t var_60 = zmm0[0].q
int64_t rax_1 = sx.q(arg3)
int64_t result
int64_t** rsp_1

if (rax_1 == 0)
    result = (sx.q(arg4) << 4) + &data_14427e1f0
    int64_t rdx_2 = sx.q(arg6)
    zmm0 = *result
    zmm2 = zx.o(var_d0[0].q)
    zmm3 = zx.o(var_c0)
    zmm1 = _mm_unpacklo_epi8(zx.o(var_e0[0].q), zmm2[0].q)
    zmm4 = zx.o(var_b0)
    zmm2 = _mm_unpacklo_epi8(zmm2, zmm3[0].q)
    zmm5 = zx.o(var_a0)
    int32_t temp0_20[0x4] = _mm_unpacklo_epi8(zmm3, zmm4[0].q)
    zmm6 = zx.o(var_90)
    int32_t temp0_21[0x4] = _mm_unpacklo_epi8(zmm4, zmm5.q)
    zmm7 = zx.o(var_80)
    zmm5 = _mm_unpacklo_epi8(zmm5, zmm6[0].q)
    char temp0_23[0x10] = _mm_maddubs_epi16(zmm1, zmm0)
    char temp0_24[0x10] = _mm_maddubs_epi16(zmm2, zmm0)
    zmm3 = _mm_maddubs_epi16(temp0_20, zmm0)
    zmm4 = _mm_maddubs_epi16(temp0_21, zmm0)
    zmm5 = _mm_maddubs_epi16(zmm5, zmm0)
    zmm6 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm6, zmm7[0].q), zmm0)
    zmm1 = __paddw_xmmdq_memdq(temp0_23, (*u"@@@@@@@@")[0].o)
    zmm2 = __paddw_xmmdq_memdq(temp0_24, (*u"@@@@@@@@")[0].o)
    zmm1 = _mm_srai_epi16(zmm1, 7)
    zmm3 = __paddw_xmmdq_memdq(zmm3, (*u"@@@@@@@@")[0].o)
    zmm2 = _mm_srai_epi16(zmm2, 7)
    zmm4 = __paddw_xmmdq_memdq(zmm4, (*u"@@@@@@@@")[0].o)
    zmm3 = _mm_srai_epi16(zmm3, 7)
    zmm5 = __paddw_xmmdq_memdq(zmm5, (*u"@@@@@@@@")[0].o)
    zmm4 = _mm_srai_epi16(zmm4, 7)
    zmm6 = __paddw_xmmdq_memdq(zmm6, (*u"@@@@@@@@")[0].o)
    zmm5 = _mm_srai_epi16(zmm5, 7)
    zmm6 = _mm_srai_epi16(zmm6, 7)
    zmm1 = _mm_packus_epi16(zmm1, zmm1)
    zmm2 = _mm_packus_epi16(zmm2, zmm2)
    *arg5 = zmm1[0].q
    zmm3 = _mm_packus_epi16(zmm3, zmm3)
    *(arg5 + rdx_2) = zmm2[0].q
    zmm4 = _mm_packus_epi16(zmm4, zmm4)
    zmm1 = zx.o(var_70)
    void* rdi_2 = arg5 + (rdx_2 << 1)
    zmm5 = _mm_packus_epi16(zmm5, zmm5)
    *rdi_2 = zmm3[0].q
    zmm6 = _mm_packus_epi16(zmm6, zmm6)
    *(rdi_2 + rdx_2) = zmm4[0].q
    void* rdi_3 = rdi_2 + (rdx_2 << 1)
    int32_t temp0_48[0x4] = _mm_unpacklo_epi8(zmm7, zmm1[0].q)
    *rdi_3 = zmm5.q
    zmm7 = _mm_maddubs_epi16(temp0_48, zmm0)
    *(rdi_3 + rdx_2) = zmm6[0].q
    char temp0_51[0x10] = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm1, zx.o(var_60)[0].q), zmm0)
    zmm7 = _mm_srai_epi16(__paddw_xmmdq_memdq(zmm7, (*u"@@@@@@@@")[0].o), 7)
    zmm1 = _mm_srai_epi16(__paddw_xmmdq_memdq(temp0_51, (*u"@@@@@@@@")[0].o), 7)
    zmm7 = _mm_packus_epi16(zmm7, zmm7)
    zmm1 = _mm_packus_epi16(zmm1, zmm1)
    void* rdi_4 = rdi_3 + (rdx_2 << 1)
    *rdi_4 = zmm7[0].q
    *(rdi_4 + rdx_2) = zmm1[0].q
    rsp_1 = &var_50
else
    int64_t* i = arg5
    int64_t rdx_1 = sx.q(arg6)
    zmm0 = *((rax_1 << 4) + &data_14427e1f0)
    result = sx.q(arg4)
    
    if (result == 0)
        do
            zmm1 = *rsp
            zmm3 = rsp[1]
            zmm5 = rsp[2]
            zmm2 = _mm_bsrli_si128(zmm1, 1)
            zmm7 = rsp[3]
            zmm4 = _mm_bsrli_si128(zmm3, 1)
            zmm6 = _mm_bsrli_si128(zmm5, 1)
            char temp0_62[0x10] = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm1, zmm2[0].q), zmm0)
            zmm3 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm3, zmm4[0].q), zmm0)
            zmm5 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm5, zmm6[0].q), zmm0)
            zmm7 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm7, _mm_bsrli_si128(zmm7, 1)[0].q), zmm0)
            zmm1 = _mm_srai_epi16(__paddw_xmmdq_memdq(temp0_62, (*u"@@@@@@@@")[0].o), 7)
            zmm3 = _mm_srai_epi16(__paddw_xmmdq_memdq(zmm3, (*u"@@@@@@@@")[0].o), 7)
            zmm5 = _mm_srai_epi16(__paddw_xmmdq_memdq(zmm5, (*u"@@@@@@@@")[0].o), 7)
            zmm7 = _mm_srai_epi16(__paddw_xmmdq_memdq(zmm7, (*u"@@@@@@@@")[0].o), 7)
            zmm1 = _mm_packus_epi16(zmm1, zmm1)
            zmm3 = _mm_packus_epi16(zmm3, zmm3)
            zmm5 = _mm_packus_epi16(zmm5, zmm5)
            *i = zmm1[0].q
            zmm7 = _mm_packus_epi16(zmm7, zmm7)
            *(i + rdx_1) = zmm3[0].q
            void* rdi_5 = i + (rdx_1 << 1)
            *rdi_5 = zmm5.q
            rsp = &rsp[4]
            *(rdi_5 + rdx_1) = zmm7[0].q
            i = rdi_5 + (rdx_1 << 1)
        while (i != &i[rdx_1])
        
        rsp_1 = &rsp[1]
    else
        result = (result << 4) + &data_14427e1f0
        zmm1 = *result
        zmm3 = var_e0
        rsp_1 = &var_d0
        zmm3 = _mm_srai_epi16(__paddw_xmmdq_memdq(
            _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm3, _mm_bsrli_si128(zmm3, 1).q), zmm0), 
            (*@@@@@@@@")[0].o), 7)
        zmm7 = _mm_packus_epi16(zmm3, zmm3)
        
        do
            zmm6 = *rsp_1
            rsp_1 = &rsp_1[2]
            zmm6 = _mm_srai_epi16(__paddw_xmmdq_memdq(
                _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm6, _mm_bsrli_si128(zmm6, 1).q), zmm0), 
                (*@@@@@@@@")[0].o), 7)
            zmm6 = _mm_packus_epi16(zmm6, zmm6)
            zmm7 = _mm_srai_epi16(__paddw_xmmdq_memdq(
                _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm7, zmm6[0].q), zmm1), (*@@@@@@@@")[0].o), 7)
            *i = _mm_packus_epi16(zmm7, zmm7)[0].q
            i += rdx_1
            zmm7 = zmm6
        while (i != &i[rdx_1])

int64_t* rsp_2 = *rsp_1
*rsp_2
rsp_2[1]
*(rsp_2 + 0x20)
*(rsp_2 + 0x10)
return result

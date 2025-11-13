// 函数: sub_14038c1ba
// 地址: 0x14038c1ba
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = &(*u"@@@@@@@@")[8 + sx.q(arg6) * 8]
int32_t zmm7[0x4] = (*u"@@@@@@@@")[0].o
int32_t zmm0[0x4]
int32_t zmm1[0x4]
int32_t zmm2[0x4]
char zmm5[0x10]
char zmm6[0x10]

if (0 == *rax)
    zmm5 = *(rax + 0x100)
    zmm6 = *(rax + 0x80)
    zmm0 = data_14427e020
    int32_t zmm3[0x4] = data_14427e030
    void* rsi_1 = arg1
    int32_t* rdi_1 = arg3
    int64_t rax_2 = sx.q(arg2)
    int64_t i_3 = sx.q(arg5)
    int64_t i
    
    do
        zmm1 = *(rsi_1 - 2)
        int32_t temp0_12[0x4] = _mm_shuffle_epi8(zmm1, zmm0)
        int32_t temp0_13[0x4] = _mm_shuffle_epi8(zmm1, zmm3)
        zmm1 = _mm_maddubs_epi16(temp0_12, zmm5)
        zmm2 = _mm_maddubs_epi16(temp0_13, zmm6)
        rsi_1 += rax_2
        zmm1 = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm1, zmm7), zmm2), 7)
        *rdi_1 = _mm_packus_epi16(zmm1, zmm1)[0]
        rdi_1 += sx.q(arg4)
        i = i_3
        i_3 -= 1
    while (i != 1)
    return rax_2

char zmm4[0x10] = *rax
zmm5 = *(rax + 0x100)
zmm6 = *(rax + 0x80)
void* rsi = arg1
int32_t* rdi = arg3
int64_t rax_1 = sx.q(arg2)
int64_t i_2 = sx.q(arg5)
int64_t i_1

do
    zmm0 = *(rsi - 2)
    zmm1 = zmm0
    int32_t temp0_1[0x4] = __pshufb_xmmdq_memdq(zmm0, data_14427e010)
    int32_t temp0_2[0x4] = __pshufb_xmmdq_memdq(zmm1, data_14427e020)
    zmm0 = _mm_maddubs_epi16(temp0_1, zmm4)
    int32_t temp0_4[0x4] = __pshufb_xmmdq_memdq(zmm1, data_14427e030)
    zmm1 = _mm_maddubs_epi16(temp0_2, zmm5)
    zmm2 = _mm_maddubs_epi16(temp0_4, zmm6)
    rsi += rax_1
    zmm0 = _mm_srai_epi16(_mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm0, zmm1), zmm7), zmm2), 7)
    *rdi = _mm_packus_epi16(zmm0, zmm0)[0]
    rdi += sx.q(arg4)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return rax_1

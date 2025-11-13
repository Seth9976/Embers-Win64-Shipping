// 函数: sub_1403ba3a0
// 地址: 0x1403ba3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_28[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_18[0x4] = zmm7
int64_t rbx
int64_t var_30 = rbx
int64_t rsi
int64_t var_38 = rsi
int64_t rdi
int64_t var_40 = rdi
int64_t* var_50 = &var_40
int128_t* rbx_1 = arg6
int32_t var_60[0x4] = *rbx_1
void* rbx_2 = &rbx_1[1]
int128_t* rsi_1 = arg1
int32_t (* rdi_1)[0x4] = arg2
int64_t result = sx.q(arg3)
int64_t i_1 = sx.q(arg7)
int64_t i

do
    int64_t rdx = 0
    int32_t zmm0[0x4]
    int32_t zmm1[0x4]
    int32_t zmm2[0x4]
    uint8_t zmm3[0x10]
    
    while (true)
        zmm0 = *rsi_1
        zmm1 = *(rsi_1 + result)
        zmm3 = *(rsi_1 + (result << 1))
        uint8_t temp0_1[0x10] = _mm_avg_epu8(zmm1, zmm3)
        int32_t temp0_2[0x4] = _mm_subs_epu8(zmm0, zmm1)
        int32_t temp0_3[0x4] = _mm_subs_epu8(zmm1, zmm0)
        int32_t temp0_4[0x4] = _mm_subs_epu8(zmm0, zmm3)
        zmm3 = _mm_subs_epu8(zmm3, zmm0)
        int32_t temp0_6[0x4] = _mm_adds_epu8(temp0_2, temp0_3)
        int32_t temp0_7[0x4] = _mm_adds_epu8(temp0_4, zmm3)
        int32_t temp0_8[0x4] = _mm_subs_epu8(var_60, temp0_6)
        int32_t temp0_9[0x4] = _mm_subs_epu8(var_60, temp0_7)
        zmm2 = _mm_cmpeq_epi8(temp0_8, zx.o(0))
        zmm7 = _mm_cmpeq_epi8(temp0_9, zx.o(0)) | zmm2
        int64_t rax = neg.q(result)
        zmm1 = *(rsi_1 + (rax << 1))
        zmm3 = *(rsi_1 + rax)
        zmm2 = zmm1
        zmm1 = _mm_avg_epu8(zmm1, zmm3)
        int32_t temp0_13[0x4] = _mm_subs_epu8(zmm0, zmm2)
        int32_t temp0_14[0x4] = _mm_subs_epu8(zmm2, zmm0)
        int32_t temp0_15[0x4] = _mm_subs_epu8(zmm0, zmm3)
        zmm3 = _mm_subs_epu8(zmm3, zmm0)
        int32_t temp0_17[0x4] = _mm_adds_epu8(temp0_13, temp0_14)
        int32_t temp0_18[0x4] = _mm_adds_epu8(temp0_15, zmm3)
        uint8_t temp0_19[0x10] = _mm_avg_epu8(temp0_1, zmm1)
        int32_t temp0_20[0x4] = _mm_subs_epu8(var_60, temp0_17)
        zmm3 = _mm_subs_epu8(var_60, temp0_18)
        zmm7 = zmm7 | _mm_cmpeq_epi8(temp0_20, zx.o(0)) | _mm_cmpeq_epi8(zmm3, zx.o(0))
        *rdi_1 = _mm_adds_epu8(zmm0 & zmm7, zmm7 & not.o(_mm_avg_epu8(temp0_19, zmm0)))
        result = neg.q(rax)
        rsi_1 = &rsi_1[1]
        rdi_1 = &rdi_1[1]
        rdx += 0x10
        
        if (rdx.d s>= arg5)
            break
        
        var_60 = *rbx_2
        rbx_2 += 0x10
    
    void* rdi_2 = rdi_1 - rdx
    int32_t var_60_1[0x4] = *arg6
    int32_t* rbx_4 = &arg6[1]
    uint64_t st1 = *rdi_2
    st1 = _m_punpckhwd(st1, st1.d)
    st1 = _m_punpcklwd(st1, st1.d)
    *(rdi_2 - 8) = _m_punpckldq(st1, st1.d)
    int64_t rdx_1 = sx.q(arg5)
    st1 = *(rdi_2 + rdx_1 - 1)
    st1 = _m_punpckhwd(st1, st1.d)
    st1 = _m_punpcklwd(st1, st1.d)
    *(rdi_2 + rdx_1) = _m_punpckldq(st1, st1.d)
    int64_t rdx_2 = 0
    uint64_t st0 = *(rdi_2 - 0x10)
    st1 = *(rdi_2 - 8)
    
    while (true)
        zmm0 = *(rdi_2 + rdx_2)
        zmm1 = *(rdi_2 + rdx_2 - 2)
        zmm3 = *(rdi_2 + rdx_2 - 1)
        uint8_t temp0_32[0x10] = _mm_avg_epu8(zmm1, zmm3)
        int32_t temp0_33[0x4] = _mm_subs_epu8(zmm0, zmm1)
        int32_t temp0_34[0x4] = _mm_subs_epu8(zmm1, zmm0)
        int32_t temp0_35[0x4] = _mm_subs_epu8(zmm0, zmm3)
        zmm3 = _mm_subs_epu8(zmm3, zmm0)
        int32_t temp0_37[0x4] = _mm_adds_epu8(temp0_33, temp0_34)
        int32_t temp0_38[0x4] = _mm_adds_epu8(temp0_35, zmm3)
        int32_t temp0_39[0x4] = _mm_subs_epu8(var_60_1, temp0_37)
        int32_t temp0_40[0x4] = _mm_subs_epu8(var_60_1, temp0_38)
        zmm2 = _mm_cmpeq_epi8(temp0_39, zx.o(0))
        zmm7 = _mm_cmpeq_epi8(temp0_40, zx.o(0)) | zmm2
        zmm1 = *(rdi_2 + rdx_2 + 1)
        zmm3 = *(rdi_2 + rdx_2 + 2)
        zmm2 = zmm1
        zmm1 = _mm_avg_epu8(zmm1, zmm3)
        int32_t temp0_44[0x4] = _mm_subs_epu8(zmm0, zmm2)
        int32_t temp0_45[0x4] = _mm_subs_epu8(zmm2, zmm0)
        int32_t temp0_46[0x4] = _mm_subs_epu8(zmm0, zmm3)
        zmm3 = _mm_subs_epu8(zmm3, zmm0)
        int32_t temp0_48[0x4] = _mm_adds_epu8(temp0_44, temp0_45)
        int32_t temp0_49[0x4] = _mm_adds_epu8(temp0_46, zmm3)
        uint8_t temp0_50[0x10] = _mm_avg_epu8(temp0_32, zmm1)
        int32_t temp0_51[0x4] = _mm_subs_epu8(var_60_1, temp0_48)
        zmm3 = _mm_subs_epu8(var_60_1, temp0_49)
        zmm7 = zmm7 | _mm_cmpeq_epi8(temp0_51, zx.o(0)) | _mm_cmpeq_epi8(zmm3, zx.o(0))
        int32_t temp0_56[0x4] =
            _mm_adds_epu8(zmm0 & zmm7, zmm7 & not.o(_mm_avg_epu8(temp0_50, zmm0)))
        *(rdi_2 + rdx_2 - 0x10) = st0
        *(rdi_2 + rdx_2 - 8) = st1
        st0 = _mm_movepi64_pi64(temp0_56[0].q)
        st1 = _mm_movepi64_pi64(_mm_bsrli_si128(temp0_56, 8)[0].q)
        rdx_2 += 0x10
        
        if (rdx_2.d s>= arg5)
            break
        
        var_60_1 = *rbx_4
        rbx_4 = &rbx_4[4]
    
    *(rdi_2 + rdx_2 - 0x10) = st0
    
    if (rdx_2.d == arg5)
        *(rdi_2 + rdx_2 - 8) = st1
    
    rsi_1 = rsi_1 - rdx + result
    rdi_1 = rdi_2 + zx.q(arg4)
    result = zx.q(arg3)
    var_60 = *arg6
    rbx_2 = &arg6[1]
    i = i_1
    i_1 -= 1
while (i != 1)
*var_50
var_50[1]
var_50[2]
*(var_50 + 0x28)
*(var_50 + 0x18)
return result

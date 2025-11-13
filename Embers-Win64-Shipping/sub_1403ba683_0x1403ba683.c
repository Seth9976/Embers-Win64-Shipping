// 函数: sub_1403ba683
// 地址: 0x1403ba683
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int32_t i = arg4
int32_t zmm6[0x4]
int32_t var_28[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_18[0x4] = zmm7
int64_t rsi
int64_t var_30 = rsi
int64_t rdi
int64_t var_38 = rdi
int64_t* var_50 = &var_38
int32_t var_5c = arg5
int32_t var_58 = arg5
int32_t var_54 = arg5
int64_t arg_18
arg_18.d = arg3.d + 8
int64_t result

do
    int16_t zmm0[0x8] = zx.o(0)
    int64_t rax_1 = sx.q(arg2)
    int64_t* rdi_2 = arg_8 + (arg_18 - 9) * rax_1
    uint128_t zmm1 = zx.o(*rdi_2)
    int64_t j_3 = 8
    int64_t j
    
    do
        rdi_2 += rax_1
        *rdi_2 = zmm1.q
        j = j_3
        j_3 -= 1
    while (j != 1)
    int64_t rax_2 = neg.q(rax_1)
    int64_t* rdi_3 = arg_8
    zmm1 = zx.o(*rdi_3)
    int64_t j_4 = 8
    int64_t j_1
    
    do
        rdi_3 += rax_2
        *rdi_3 = zmm1.q
        j_1 = j_4
        j_4 -= 1
    while (j_1 != 1)
    void* rsi_2 = &arg_8[rax_2]
    result = neg.q(rax_2)
    int16_t zmm5[0x8] = zx.o(0)
    zmm6 = zx.o(0)
    zmm7 = zx.o(0)
    void* rdi_4 = rsi_2
    int64_t j_5 = 0xf
    uint128_t zmm2
    int64_t j_2
    
    do
        zmm1 = _mm_unpacklo_epi8(zx.o(*rdi_4), zmm0[0].q)
        zmm5 = _mm_add_epi16(zmm5, zmm1)
        zmm1 = _mm_mullo_epi16(zmm1, zmm1)
        zmm2 = zmm1
        zmm1 = _mm_unpacklo_epi16(zmm1, zmm0[0].q)
        zmm2 = _mm_unpackhi_epi16(zmm2, zmm0[0].q)
        zmm6 = _mm_add_epi32(zmm6, zmm1)
        zmm7 = _mm_add_epi32(zmm7, zmm2)
        rdi_4 += result
        j_2 = j_5
        j_5 -= 1
    while (j_2 != 1)
    int64_t rdx_3 = 0
    
    do
        zmm2 = zx.o(*rdi_4)
        zmm1 = _mm_unpacklo_epi8(zx.o(*rsi_2), zmm0[0].q)
        zmm2 = _mm_unpacklo_epi8(zmm2, zmm0[0].q)
        zmm5 = _mm_sub_epi16(_mm_add_epi16(zmm5, zmm2), zmm1)
        zmm2 = _mm_mullo_epi16(zmm2, zmm2)
        int32_t zmm4[0x4] = zmm2
        zmm2 = _mm_unpacklo_epi16(zmm2, zmm0[0].q)
        zmm4 = _mm_unpackhi_epi16(zmm4, zmm0[0].q)
        zmm6 = _mm_add_epi32(zmm6, zmm2)
        zmm7 = _mm_add_epi32(zmm7, zmm4)
        zmm1 = _mm_mullo_epi16(zmm1, zmm1)
        zmm6 = _mm_sub_epi32(zmm6, _mm_unpacklo_epi16(zmm1, zmm0[0].q))
        zmm7 = _mm_sub_epi32(zmm7, _mm_unpackhi_epi16(zmm1, zmm0[0].q))
        int32_t zmm3[0x4] = _mm_sub_epi32(_mm_slli_epi32(zmm6, 4), zmm6)
        zmm1 = zmm5
        zmm4 = zmm5
        zmm1 = _mm_mullo_epi16(zmm1, zmm1)
        zmm4 = _mm_mulhi_epi16(zmm4, zmm4)
        zmm2 = zmm1
        zmm1 = _mm_unpacklo_epi16(zmm1, zmm4[0].q)
        zmm2 = _mm_unpackhi_epi16(zmm2, zmm4[0].q)
        zmm4 = _mm_sub_epi32(_mm_slli_epi32(zmm7, 4), zmm7)
        zmm3 = _mm_sub_epi32(zmm3, zmm1)
        zmm4 = _mm_sub_epi32(zmm4, zmm2)
        zmm3 = __psubd_xmmdq_memdq(zmm3, arg5.o)
        zmm4 = __psubd_xmmdq_memdq(zmm4, arg5.o)
        zmm3 = _mm_packs_epi16(
            _mm_packs_epi32(_mm_srai_epi32(zmm3, 0x1f), _mm_srai_epi32(zmm4, 0x1f)), zmm0)
        zmm1 = zx.o(*(rsi_2 + (result << 3)))
        int64_t rcx_1 = rdx_3 & 0x7f
        int64_t var_e0[0x10]
        var_e0[rcx_1 & 0xf] = ((_mm_packus_epi16(
            _mm_srai_epi16(
                _mm_add_epi16(_mm_add_epi16(_mm_unpacklo_epi8(zmm1, zmm0[0].q), zmm5), 
                    *(&data_14360a7c0 + (rcx_1 << 1))), 
                4), 
            zmm0) & zmm3) | (zmm3 & not.o(zx.o(zmm1.q)))).q
        
        if (rdx_3.d s>= 8)
            *rsi_2 = var_e0[(rdx_3 - 8) & 0xf]
        
        rsi_2 += result
        rdi_4 += result
        rdx_3 += 1
    while (rdx_3.d s< arg_18.d)
    
    arg_8.d += 8
    i -= 8
while (i s> 0)

*var_50
var_50[1]
*(var_50 + 0x20)
*(var_50 + 0x10)
return result

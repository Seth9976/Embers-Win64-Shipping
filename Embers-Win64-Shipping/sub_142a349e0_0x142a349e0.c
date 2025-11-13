// 函数: sub_142a349e0
// 地址: 0x142a349e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2 * 2
int64_t r11 = arg1 + (arg2 << 1)
int64_t rbx_1 = arg10 + rax
int64_t r10_1 = arg6 + rax
int64_t r9_1 = arg7 + rax
int64_t rdx = neg.q(arg2)

if (arg3 != 0)
    int128_t* r9_3 = r9_1 - r10_1
    void* rax_8 = r10_1 + ((rdx + 8) << 1)
    int64_t temp1_1
    
    do
        temp1_1 = rdx
        rdx += 0x10
        *(r9_3 + rax_8 - 0x10) = zx.o(0)
        *(r9_3 + rax_8) = zx.o(0)
        *(rax_8 - 0x10) = zx.o(0)
        *rax_8 = zx.o(0)
        rax_8 += 0x20
    while (temp1_1 + 0x10 s< 0)
    *arg9 = 0
    return arg9

int16_t zmm3[0x8] = *(r11 + (rdx << 1) + 0x10)
int16_t temp0[0x8] = _mm_srai_epi16(*(r11 + (rdx << 1)), 0xf)
int16_t zmm4[0x8] = _mm_sub_epi16(temp0 ^ *(r11 + (rdx << 1)), temp0)
int16_t temp0_2[0x8] = _mm_srai_epi16(zmm3, 0xf)
int32_t zmm10[0x4] = *arg4
zmm4 = _mm_adds_epi16(zmm4, zmm10)
int32_t temp0_4[0x4] = _mm_unpackhi_epi64(zmm10, zmm10[0].q)
int16_t zmm11[0x8] = *arg5
int16_t temp0_5[0x8] = _mm_mulhi_epi16(zmm4, zmm11)
zmm11 = _mm_unpackhi_epi64(zmm11, zmm11[0].q)
int32_t zmm9[0x4] = *arg8
zmm4 = _mm_sub_epi16(temp0_5 ^ temp0, temp0)
int16_t zmm1[0x8] = temp0_2 ^ *(r11 + (rdx << 1) + 0x10)
*(r10_1 + (rdx << 1)) = zmm4
zmm1 = _mm_adds_epi16(_mm_sub_epi16(zmm1, temp0_2), temp0_4)
zmm4 = _mm_mullo_epi16(zmm4, zmm9)
int16_t temp0_11[0x8] = _mm_mulhi_epi16(zmm1, zmm11)
int32_t temp0_12[0x4] = _mm_unpackhi_epi64(zmm9, zmm9[0].q)
int32_t zmm8[0x4] = _mm_srai_epi16(temp0_12, 1)
zmm1 = _mm_sub_epi16(temp0_11 ^ temp0_2, temp0_2)
*(r10_1 + (rdx << 1) + 0x10) = zmm1
*(r9_1 + (rdx << 1)) = zmm4
int16_t temp0_15[0x8] = _mm_cmpeq_epi16(zmm4, zx.o(0))
zmm1 = _mm_mullo_epi16(zmm1, temp0_12)
int16_t temp0_17[0x8] = _mm_cmpeq_epi16(temp0_15, zx.o(0))
*(r9_1 + (rdx << 1) + 0x10) = zmm1
int16_t temp0_18[0x8] = _mm_cmpeq_epi16(zmm1, zx.o(0))
int32_t zmm7[0x4] = *(rbx_1 + (rdx << 1))
int16_t temp0_19[0x8] = _mm_cmpeq_epi16(temp0_18, zx.o(0))
zmm7 = _mm_max_epi16(_mm_sub_epi16(zmm7, temp0_17) & temp0_17, 
    _mm_sub_epi16(*(rbx_1 + (rdx << 1) + 0x10), temp0_19) & temp0_19)

if (rdx + 0x10 s< 0)
    int16_t zmm6[0x8]
    int16_t var_18_1[0x8] = zmm6
    void* rax_5 = r10_1 + ((rdx + 0x18) << 1)
    int128_t* r11_1 = r11 - r10_1
    int16_t (* r9_2)[0x8] = r9_1 - r10_1
    int32_t (* rbx_2)[0x4] = rbx_1 - r10_1
    int64_t i_1 = ((-1 - (rdx + 0x10)) u>> 4) + 1
    int64_t i
    
    do
        zmm6 = *(r11_1 + rax_5)
        int16_t temp0_24[0x8] = _mm_srai_epi16(*(r11_1 + rax_5 - 0x10), 0xf)
        int16_t temp0_25[0x8] = _mm_srai_epi16(zmm6, 0xf)
        zmm3 = temp0_25 ^ *(r11_1 + rax_5)
        int32_t temp0_26[0x4] = _mm_sub_epi16(temp0_24 ^ *(r11_1 + rax_5 - 0x10), temp0_24)
        zmm3 = _mm_sub_epi16(zmm3, temp0_25)
        int16_t temp0_28[0x8] = _mm_cmpgt_epi16(temp0_26, zmm8)
        int32_t zmm0[0x4] = _mm_cmpgt_epi16(zmm3, zmm8)
        int16_t temp0_30 = _mm_movemask_epi8(temp0_28)
        
        if ((_mm_movemask_epi8(zmm0) | temp0_30) == 0)
            *(rax_5 - 0x10) = zx.o(0)
            *rax_5 = zx.o(0)
            *(r9_2 + rax_5 - 0x10) = zx.o(0)
            *(r9_2 + rax_5) = zx.o(0)
        else
            int32_t temp0_32[0x4] = _mm_adds_epi16(temp0_26, temp0_4)
            zmm3 = _mm_adds_epi16(zmm3, temp0_4)
            int32_t zmm2[0x4] = _mm_mulhi_epi16(temp0_32, zmm11)
            zmm3 = _mm_mulhi_epi16(zmm3, zmm11) ^ temp0_25
            int32_t temp0_36[0x4] = _mm_sub_epi16(zmm2 ^ temp0_24, temp0_24)
            *(rax_5 - 0x10) = temp0_36
            zmm3 = _mm_sub_epi16(zmm3, temp0_25)
            *rax_5 = zmm3
            int32_t temp0_38[0x4] = _mm_mullo_epi16(temp0_36, temp0_12)
            zmm3 = _mm_mullo_epi16(zmm3, temp0_12)
            *(r9_2 + rax_5 - 0x10) = temp0_38
            zmm2 = _mm_cmpeq_epi16(temp0_38, zx.o(0))
            *(r9_2 + rax_5) = zmm3
            zmm2 = _mm_cmpeq_epi16(zmm2, zx.o(0))
            zmm1 = *(rbx_2 + rax_5 - 0x10)
            int16_t temp0_42[0x8] = _mm_cmpeq_epi16(zmm3, zx.o(0))
            zmm0 = *(rbx_2 + rax_5)
            int16_t temp0_43[0x8] = _mm_cmpeq_epi16(temp0_42, zx.o(0))
            zmm7 = _mm_max_epi16(zmm7, 
                _mm_max_epi16(_mm_sub_epi16(zmm1, zmm2) & zmm2, 
                    _mm_sub_epi16(zmm0, temp0_43) & temp0_43))
        
        rax_5 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t temp0_49[0x4] = _mm_max_epi16(zmm7, _mm_shuffle_epi32(zmm7, 0xe))
int32_t temp0_51[0x4] = _mm_max_epi16(temp0_49, _mm_shufflelo_epi16(temp0_49, 0xe))
*arg9 = _mm_extract_epi16(_mm_max_epi16(temp0_51, _mm_shufflelo_epi16(temp0_51, 1)), 1)
return arg9

// 函数: sub_142a1a4d0
// 地址: 0x142a1a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2 * 2
int64_t rbx = arg1 + (arg2 << 1)
int64_t rdi_1 = arg12 + rax
int64_t r11_1 = arg8 + rax
int64_t r10_1 = arg9 + rax
int64_t rdx = neg.q(arg2)
int16_t rcx_2

if (arg3 != 0)
    int128_t* r10_3 = r10_1 - r11_1
    int128_t* rax_8 = r11_1 + ((rdx + 8) << 1)
    int64_t temp1_1
    
    do
        temp1_1 = rdx
        rdx += 0x10
        *(r10_3 + rax_8 - 0x10) = zx.o(0)
        *(r10_3 + rax_8) = zx.o(0)
        rax_8[-1] = zx.o(0)
        *rax_8 = zx.o(0)
        rax_8 = &rax_8[2]
    while (temp1_1 + 0x10 s< 0)
    rcx_2 = 0
else
    int16_t zmm4[0x8] = *(rbx + (rdx << 1))
    int16_t zmm5[0x8] = *(rbx + (rdx << 1) + 0x10)
    int32_t temp0_1[0x4] = __psubw_xmmdq_memdq(*arg4, data_1435ffba0)
    int32_t zmm10[0x4] = *arg5
    int16_t temp0_2[0x8] = _mm_srai_epi16(zmm4, 0xf)
    int16_t temp0_3[0x8] = _mm_srai_epi16(zmm5, 0xf)
    int16_t zmm3[0x8] = temp0_3 ^ *(rbx + (rdx << 1) + 0x10)
    int32_t temp0_4[0x4] = _mm_sub_epi16(temp0_2 ^ *(rbx + (rdx << 1)), temp0_2)
    int16_t zmm11[0x8] = *arg6
    int32_t temp0_5[0x4] = _mm_adds_epi16(temp0_4, zmm10)
    int32_t zmm6[0x4] = _mm_mulhi_epi16(temp0_5, zmm11)
    int32_t zmm0[0x4] = _mm_cmpgt_epi16(temp0_4, temp0_1)
    zmm3 = _mm_sub_epi16(zmm3, temp0_3)
    int16_t zmm1[0x8] = zmm3
    int32_t zmm13[0x4] = *arg10
    zmm6 = _mm_add_epi16(zmm6, temp0_5)
    int32_t temp0_10[0x4] = _mm_unpackhi_epi64(zmm10, zmm10[0].q)
    zmm3 = _mm_adds_epi16(zmm3, temp0_10)
    zmm11 = _mm_unpackhi_epi64(zmm11, zmm11[0].q)
    int32_t temp0_13[0x4] = _mm_unpackhi_epi64(temp0_1, temp0_1[0].q)
    int16_t zmm12[0x8] = *arg7
    int16_t temp0_14[0x8] = _mm_cmpgt_epi16(zmm1, temp0_13)
    int32_t zmm2[0x4] = _mm_mulhi_epi16(zmm3, zmm11)
    zmm6 = _mm_mulhi_epi16(zmm6, zmm12)
    zmm12 = _mm_unpackhi_epi64(zmm12, zmm12[0].q)
    zmm2 = _mm_mulhi_epi16(_mm_add_epi16(zmm2, zmm3), zmm12)
    zmm6 = _mm_sub_epi16(zmm6 ^ temp0_2, temp0_2) & zmm0
    *(r11_1 + (rdx << 1)) = zmm6
    int32_t temp0_21[0x4] = _mm_mullo_epi16(zmm6, zmm13)
    int32_t temp0_22[0x4] = _mm_unpackhi_epi64(zmm13, zmm13[0].q)
    zmm2 = _mm_sub_epi16(zmm2 ^ temp0_3, temp0_3) & temp0_14
    *(r11_1 + (rdx << 1) + 0x10) = zmm2
    *(r10_1 + (rdx << 1)) = temp0_21
    zmm6 = _mm_cmpeq_epi16(temp0_21, zx.o(0))
    int32_t temp0_25[0x4] = _mm_mullo_epi16(zmm2, temp0_22)
    zmm6 = _mm_cmpeq_epi16(zmm6, zx.o(0))
    *(r10_1 + (rdx << 1) + 0x10) = temp0_25
    zmm2 = _mm_cmpeq_epi16(temp0_25, zx.o(0))
    int32_t zmm8[0x4] = *(rdi_1 + (rdx << 1))
    zmm2 = _mm_cmpeq_epi16(zmm2, zx.o(0))
    zmm8 = _mm_max_epi16(_mm_sub_epi16(zmm8, zmm6) & zmm6, 
        _mm_sub_epi16(*(rdi_1 + (rdx << 1) + 0x10), zmm2) & zmm2)
    
    if (rdx + 0x10 s< 0)
        void* rax_6 = r11_1 + ((rdx + 0x18) << 1)
        int16_t (* rbx_1)[0x8] = rbx - r11_1
        int64_t r10_2 = r10_1 - r11_1
        int64_t rdi_2 = rdi_1 - r11_1
        int64_t i_1 = ((-1 - (rdx + 0x10)) u>> 4) + 1
        int64_t i
        
        do
            zmm4 = *(rbx_1 + rax_6 - 0x10)
            zmm5 = *(rbx_1 + rax_6)
            rax_6 += 0x20
            int16_t temp0_33[0x8] = _mm_srai_epi16(zmm4, 0xf)
            int16_t temp0_34[0x8] = _mm_srai_epi16(zmm5, 0xf)
            zmm3 = temp0_34 ^ *(rbx_1 + rax_6 - 0x20)
            int32_t temp0_35[0x4] = _mm_sub_epi16(temp0_33 ^ *(rbx_1 + rax_6 - 0x30), temp0_33)
            int32_t temp0_36[0x4] = _mm_adds_epi16(temp0_35, temp0_10)
            zmm0 = _mm_cmpgt_epi16(temp0_35, temp0_13)
            zmm6 = _mm_mulhi_epi16(temp0_36, zmm11)
            zmm3 = _mm_sub_epi16(zmm3, temp0_34)
            zmm1 = zmm3
            zmm3 = _mm_adds_epi16(zmm3, temp0_10)
            int16_t temp0_41[0x8] = _mm_cmpgt_epi16(zmm1, temp0_13)
            zmm6 = _mm_add_epi16(zmm6, temp0_36)
            zmm2 = _mm_mulhi_epi16(zmm3, zmm11)
            zmm6 = _mm_mulhi_epi16(zmm6, zmm12)
            zmm2 = _mm_mulhi_epi16(_mm_add_epi16(zmm2, zmm3), zmm12)
            zmm6 = _mm_sub_epi16(zmm6 ^ temp0_33, temp0_33) & zmm0
            *(rax_6 - 0x30) = zmm6
            int32_t temp0_48[0x4] = _mm_mullo_epi16(zmm6, temp0_22)
            zmm2 = _mm_sub_epi16(zmm2 ^ temp0_34, temp0_34) & temp0_41
            *(rax_6 - 0x20) = zmm2
            *(r10_2 + rax_6 - 0x30) = temp0_48
            zmm6 = _mm_cmpeq_epi16(temp0_48, zx.o(0))
            int32_t temp0_51[0x4] = _mm_mullo_epi16(zmm2, temp0_22)
            zmm6 = _mm_cmpeq_epi16(zmm6, zx.o(0))
            *(r10_2 + rax_6 - 0x20) = temp0_51
            zmm2 = _mm_cmpeq_epi16(temp0_51, zx.o(0))
            zmm1 = *(rdi_2 + rax_6 - 0x30)
            zmm2 = _mm_cmpeq_epi16(zmm2, zx.o(0))
            zmm8 = _mm_max_epi16(zmm8, 
                _mm_max_epi16(_mm_sub_epi16(zmm1, zmm6) & zmm6, 
                    _mm_sub_epi16(*(rdi_2 + rax_6 - 0x20), zmm2) & zmm2))
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t temp0_60[0x4] = _mm_max_epi16(zmm8, _mm_shuffle_epi32(zmm8, 0xe))
    int32_t temp0_62[0x4] = _mm_max_epi16(temp0_60, _mm_shufflelo_epi16(temp0_60, 0xe))
    rcx_2 = _mm_extract_epi16(_mm_max_epi16(temp0_62, _mm_shufflelo_epi16(temp0_62, 1)), 1)

*arg11 = rcx_2
return arg11

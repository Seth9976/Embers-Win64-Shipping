// 函数: sub_140396c20
// 地址: 0x140396c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm14[0x4]
int32_t var_18[0x4] = zmm14

if (arg3 != 0)
    void* rcx_2 = arg6 + (arg2 << 1)
    void* r8_5 = arg4 + (arg2 << 1)
    int64_t i_1 = neg.q(arg2)
    int64_t i
    
    do
        *(rcx_2 + (i_1 << 1)) = zx.o(0)
        *(rcx_2 + (i_1 << 1) + 0x10) = zx.o(0)
        *(r8_5 + (i_1 << 1)) = zx.o(0)
        *(r8_5 + (i_1 << 1) + 0x10) = zx.o(0)
        i = i_1
        i_1 += 0x10
    while (i s< -0x10)
    *arg12 = 0
    return 

int16_t zmm0[0x8] = *arg4
int16_t zmm1[0x8] = *arg6
int16_t zmm2[0x8] = *arg7
arg5 = _mm_srli_epi16(_mm_cmpeq_epi16(arg5, arg5), 0xf)
int16_t temp0_2[0x8] = _mm_add_epi16(zmm0, arg5)
int16_t temp0_3[0x8] = _mm_add_epi16(zmm1, arg5)
zmm0 = _mm_srli_epi16(temp0_2, 1)
zmm1 = _mm_srli_epi16(temp0_3, 1)
int32_t zmm3[0x4] = *arg11
zmm0 = __psubw_xmmdq_memdq(zmm0, data_14427e9b0)
uint16_t temp0_7[0x8] = _mm_slli_epi16(*arg8, 1)
int64_t rcx = arg1 + (arg2 << 1)
int64_t r9_1 = arg9 + (arg2 << 1)
int64_t r10_2 = arg10 + (arg2 << 1)
int64_t r11_2 = arg13 + (arg2 << 1)
int64_t rdx = neg.q(arg2)
int32_t zmm9[0x4] = *(rcx + (rdx << 1))
int32_t zmm10[0x4] = *(rcx + (rdx << 1) + 0x10)
int32_t temp0_8[0x4] = _mm_abs_epi16(zmm9)
int32_t temp0_9[0x4] = _mm_abs_epi16(zmm10)
int32_t zmm7[0x4] = _mm_cmpgt_epi16(temp0_8, zmm0)
zmm0 = _mm_unpackhi_epi64(zmm0, zmm0[0].q)
int16_t temp0_12[0x8] = _mm_cmpgt_epi16(temp0_9, zmm0)
int32_t temp0_13[0x4] = _mm_adds_epi16(temp0_8, zmm1)
zmm1 = _mm_unpackhi_epi64(zmm1, zmm1[0].q)
int32_t temp0_15[0x4] = _mm_adds_epi16(temp0_9, zmm1)
int32_t zmm8[0x4] = _mm_mulhi_epi16(temp0_13, zmm2)
zmm2 = _mm_unpackhi_epi64(zmm2, zmm2[0].q)
int16_t temp0_18[0x8] = _mm_mulhi_epi16(temp0_15, zmm2)
zmm8 = _mm_add_epi16(zmm8, temp0_13)
int16_t temp0_20[0x8] = _mm_add_epi16(temp0_18, temp0_15)
zmm8 = _mm_mulhi_epi16(zmm8, temp0_7)
uint16_t zmm4[0x8] = _mm_unpackhi_epi64(temp0_7, temp0_7[0].q)
int16_t temp0_23[0x8] = _mm_mulhi_epi16(temp0_20, zmm4)
zmm8 = _mm_sign_epi16(zmm8, zmm9) & zmm7
int16_t zmm13[0x8] = _mm_sign_epi16(temp0_23, zmm10) & temp0_12
*(r9_1 + (rdx << 1)) = zmm8
*(r9_1 + (rdx << 1) + 0x10) = zmm13
int32_t temp0_26[0x4] = _mm_abs_epi16(zmm8)
zmm13 = _mm_abs_epi16(zmm13)
int32_t temp0_28[0x4] = _mm_mullo_epi16(temp0_26, zmm3)
int32_t temp0_29[0x4] = _mm_unpackhi_epi64(zmm3, zmm3[0].q)
zmm13 = _mm_mullo_epi16(zmm13, temp0_29)
zmm8 = _mm_srli_epi16(temp0_28, 1)
zmm13 = _mm_srli_epi16(zmm13, 1)
int32_t temp0_33[0x4] = _mm_sign_epi16(zmm8, zmm9)
zmm13 = _mm_sign_epi16(zmm13, zmm10)
*(r10_2 + (rdx << 1)) = temp0_33
*(r10_2 + (rdx << 1) + 0x10) = zmm13
zmm8 = _mm_cmpeq_epi16(temp0_33, zx.o(0))
int16_t temp0_36[0x8] = _mm_cmpeq_epi16(zmm13, zx.o(0))
zmm8 = _mm_max_epi16(zmm8 & not.o(_mm_sub_epi16(*(r11_2 + (rdx << 1)), zmm7)), 
    temp0_36 & not.o(_mm_sub_epi16(*(r11_2 + (rdx << 1) + 0x10), temp0_12)))
int64_t rdx_1 = rdx + 0x10

if (rdx != -0x10)
    while (true)
        zmm9 = *(rcx + (rdx_1 << 1))
        zmm10 = *(rcx + (rdx_1 << 1) + 0x10)
        int32_t temp0_41[0x4] = _mm_abs_epi16(zmm9)
        int32_t temp0_42[0x4] = _mm_abs_epi16(zmm10)
        zmm7 = _mm_cmpgt_epi16(temp0_41, zmm0)
        int16_t temp0_44[0x8] = _mm_cmpgt_epi16(temp0_42, zmm0)
        
        if ((zx.q(_mm_movemask_epi8(zmm7)) | zx.q(_mm_movemask_epi8(temp0_44))) == 0)
            *(r9_1 + (rdx_1 << 1)) = zx.o(0)
            *(r9_1 + (rdx_1 << 1) + 0x10) = zx.o(0)
            *(r10_2 + (rdx_1 << 1)) = zx.o(0)
            *(r10_2 + (rdx_1 << 1) + 0x10) = zx.o(0)
            int64_t temp2_1 = rdx_1
            rdx_1 += 0x10
            
            if (temp2_1 s>= -0x10)
                break
        else
            int32_t temp0_47[0x4] = _mm_adds_epi16(temp0_41, zmm1)
            int32_t temp0_48[0x4] = _mm_adds_epi16(temp0_42, zmm1)
            zmm14 = _mm_mulhi_epi16(temp0_47, zmm2)
            int16_t temp0_50[0x8] = _mm_mulhi_epi16(temp0_48, zmm2)
            zmm14 = _mm_add_epi16(zmm14, temp0_47)
            int16_t temp0_52[0x8] = _mm_add_epi16(temp0_50, temp0_48)
            zmm14 = _mm_mulhi_epi16(zmm14, zmm4)
            int16_t temp0_54[0x8] = _mm_mulhi_epi16(temp0_52, zmm4)
            zmm14 = _mm_sign_epi16(zmm14, zmm9) & zmm7
            zmm13 = _mm_sign_epi16(temp0_54, zmm10) & temp0_44
            *(r9_1 + (rdx_1 << 1)) = zmm14
            *(r9_1 + (rdx_1 << 1) + 0x10) = zmm13
            int32_t temp0_57[0x4] = _mm_abs_epi16(zmm14)
            zmm13 = _mm_abs_epi16(zmm13)
            int32_t temp0_59[0x4] = _mm_mullo_epi16(temp0_57, temp0_29)
            zmm13 = _mm_mullo_epi16(zmm13, temp0_29)
            zmm14 = _mm_srli_epi16(temp0_59, 1)
            zmm13 = _mm_srli_epi16(zmm13, 1)
            int32_t temp0_63[0x4] = _mm_sign_epi16(zmm14, zmm9)
            zmm13 = _mm_sign_epi16(zmm13, zmm10)
            *(r10_2 + (rdx_1 << 1)) = temp0_63
            *(r10_2 + (rdx_1 << 1) + 0x10) = zmm13
            zmm14 = _mm_cmpeq_epi16(temp0_63, zx.o(0))
            int16_t temp0_66[0x8] = _mm_cmpeq_epi16(zmm13, zx.o(0))
            int32_t zmm11[0x4] = *(r11_2 + (rdx_1 << 1) + 0x10)
            int32_t temp0_67[0x4] = _mm_sub_epi16(*(r11_2 + (rdx_1 << 1)), zmm7)
            zmm13 = temp0_66 & not.o(_mm_sub_epi16(zmm11, temp0_44))
            zmm8 = _mm_max_epi16(_mm_max_epi16(zmm8, zmm14 & not.o(temp0_67)), zmm13)
            int64_t temp3_1 = rdx_1
            rdx_1 += 0x10
            
            if (temp3_1 s>= -0x10)
                break

int32_t temp0_72[0x4] = _mm_max_epi16(zmm8, _mm_shuffle_epi32(zmm8, 0xe))
int32_t temp0_74[0x4] = _mm_max_epi16(temp0_72, _mm_shufflelo_epi16(temp0_72, 0xe))
*arg12 = zx.q(_mm_extract_epi16(_mm_max_epi16(temp0_74, _mm_shufflelo_epi16(temp0_74, 1)), 0))

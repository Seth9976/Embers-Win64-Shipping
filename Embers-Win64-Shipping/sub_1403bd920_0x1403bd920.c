// 函数: sub_1403bd920
// 地址: 0x1403bd920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_18[0x8] = arg4
int16_t zmm12[0x8]
int16_t var_38[0x8] = zmm12
int32_t zmm14[0x4]
int32_t var_18[0x4] = zmm14

if (arg3 != 0)
    int64_t rcx_2 = arg8 + (arg2 << 1)
    int64_t r8_4 = arg7 + (arg2 << 1)
    int64_t i_1 = neg.q(arg2)
    int64_t i
    
    do
        *(rcx_2 + (i_1 << 1)) = zx.o(0)
        *(rcx_2 + (i_1 << 1) + 0x10) = zx.o(0)
        *(r8_4 + (i_1 << 1)) = zx.o(0)
        *(r8_4 + (i_1 << 1) + 0x10) = zx.o(0)
        i = i_1
        i_1 += 0x10
    while (i s< -0x10)
    *arg10 = 0
    return 

int32_t zmm1[0x4] = *arg5
int16_t zmm2[0x8] = *arg6
int32_t zmm3[0x4] = *arg9
int64_t rcx = arg1 + (arg2 << 1)
int64_t r11_2 = arg11 + (arg2 << 1)
int64_t r9_1 = arg7 + (arg2 << 1)
int64_t r10_2 = arg8 + (arg2 << 1)
int64_t rdx = neg.q(arg2)
int32_t zmm9[0x4] = *(rcx + (rdx << 1))
int32_t zmm10[0x4] = *(rcx + (rdx << 1) + 0x10)
int32_t temp0[0x4] = _mm_abs_epi16(zmm9)
int32_t temp0_1[0x4] = _mm_abs_epi16(zmm10)
int16_t temp0_2[0x8] = _mm_cmpeq_epi16(arg4, arg4)
int32_t temp0_3[0x4] = _mm_adds_epi16(temp0, zmm1)
int32_t temp0_4[0x4] = _mm_unpackhi_epi64(zmm1, zmm1[0].q)
int32_t temp0_5[0x4] = _mm_adds_epi16(temp0_1, temp0_4)
int32_t zmm8[0x4] = _mm_mulhi_epi16(temp0_3, zmm2)
zmm2 = _mm_unpackhi_epi64(zmm2, zmm2[0].q)
int32_t zmm13[0x4] = _mm_mulhi_epi16(temp0_5, zmm2)
int32_t temp0_9[0x4] = _mm_sign_epi16(zmm8, zmm9)
int32_t temp0_10[0x4] = _mm_sign_epi16(zmm13, zmm10)
*(r9_1 + (rdx << 1)) = temp0_9
*(r9_1 + (rdx << 1) + 0x10) = temp0_10
int32_t temp0_11[0x4] = _mm_mullo_epi16(temp0_9, zmm3)
int32_t temp0_12[0x4] = _mm_unpackhi_epi64(zmm3, zmm3[0].q)
int32_t temp0_13[0x4] = _mm_mullo_epi16(temp0_10, temp0_12)
int32_t zmm0[0x4] = _mm_srli_epi16(temp0_12, 1)
*(r10_2 + (rdx << 1)) = temp0_11
*(r10_2 + (rdx << 1) + 0x10) = temp0_13
zmm8 = _mm_cmpeq_epi16(temp0_11, zx.o(0))
zmm13 = _mm_cmpeq_epi16(temp0_13, zx.o(0))
zmm8 = _mm_max_epi16(zmm8 & not.o(_mm_sub_epi16(*(r11_2 + (rdx << 1)), temp0_2)), 
    zmm13 & not.o(_mm_sub_epi16(*(r11_2 + (rdx << 1) + 0x10), temp0_2)))
int64_t rdx_1 = rdx + 0x10

if (rdx != -0x10)
    while (true)
        zmm9 = *(rcx + (rdx_1 << 1))
        zmm10 = *(rcx + (rdx_1 << 1) + 0x10)
        int32_t temp0_21[0x4] = _mm_abs_epi16(zmm9)
        int32_t temp0_22[0x4] = _mm_abs_epi16(zmm10)
        int16_t temp0_23[0x8] = _mm_cmpgt_epi16(temp0_21, zmm0)
        int16_t temp0_24[0x8] = _mm_cmpgt_epi16(temp0_22, zmm0)
        
        if ((zx.q(_mm_movemask_epi8(temp0_23)) | zx.q(_mm_movemask_epi8(temp0_24))) == 0)
            *(r9_1 + (rdx_1 << 1)) = zx.o(0)
            *(r9_1 + (rdx_1 << 1) + 0x10) = zx.o(0)
            *(r10_2 + (rdx_1 << 1)) = zx.o(0)
            *(r10_2 + (rdx_1 << 1) + 0x10) = zx.o(0)
            int64_t temp2_1 = rdx_1
            rdx_1 += 0x10
            
            if (temp2_1 s>= -0x10)
                break
        else
            int16_t temp0_27[0x8] = _mm_cmpeq_epi16(temp0_23, temp0_23)
            int32_t temp0_28[0x4] = _mm_adds_epi16(temp0_21, temp0_4)
            int32_t temp0_29[0x4] = _mm_adds_epi16(temp0_22, temp0_4)
            zmm14 = _mm_mulhi_epi16(temp0_28, zmm2)
            zmm13 = _mm_mulhi_epi16(temp0_29, zmm2)
            int32_t temp0_32[0x4] = _mm_sign_epi16(zmm14, zmm9)
            int32_t temp0_33[0x4] = _mm_sign_epi16(zmm13, zmm10)
            *(r9_1 + (rdx_1 << 1)) = temp0_32
            *(r9_1 + (rdx_1 << 1) + 0x10) = temp0_33
            int32_t temp0_34[0x4] = _mm_mullo_epi16(temp0_32, temp0_12)
            int32_t temp0_35[0x4] = _mm_mullo_epi16(temp0_33, temp0_12)
            *(r10_2 + (rdx_1 << 1)) = temp0_34
            *(r10_2 + (rdx_1 << 1) + 0x10) = temp0_35
            zmm14 = _mm_cmpeq_epi16(temp0_34, zx.o(0))
            zmm13 = _mm_cmpeq_epi16(temp0_35, zx.o(0))
            int32_t zmm11[0x4] = *(r11_2 + (rdx_1 << 1) + 0x10)
            int32_t temp0_38[0x4] = _mm_sub_epi16(*(r11_2 + (rdx_1 << 1)), temp0_27)
            zmm13 &= not.o(_mm_sub_epi16(zmm11, temp0_27))
            zmm8 = _mm_max_epi16(_mm_max_epi16(zmm8, zmm14 & not.o(temp0_38)), zmm13)
            int64_t temp3_1 = rdx_1
            rdx_1 += 0x10
            
            if (temp3_1 s>= -0x10)
                break

int32_t temp0_43[0x4] = _mm_max_epi16(zmm8, _mm_shuffle_epi32(zmm8, 0xe))
int32_t temp0_45[0x4] = _mm_max_epi16(temp0_43, _mm_shufflelo_epi16(temp0_43, 0xe))
*arg10 = zx.q(_mm_extract_epi16(_mm_max_epi16(temp0_45, _mm_shufflelo_epi16(temp0_45, 1)), 0))

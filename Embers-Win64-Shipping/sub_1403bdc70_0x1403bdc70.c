// 函数: sub_1403bdc70
// 地址: 0x1403bdc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18[0x4] = arg5
int16_t zmm12[0x8]
int16_t var_38[0x8] = zmm12
int32_t zmm14[0x4]
int32_t var_18[0x4] = zmm14

if (arg3 != 0)
    int64_t rcx_2 = arg9 + (arg2 << 1)
    int64_t r8_4 = arg8 + (arg2 << 1)
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
    *arg11 = 0
    return 

uint16_t zmm2[0x8] = *arg7
int16_t zmm1[0x8] =
    _mm_srli_epi16(_mm_add_epi16(*arg6, _mm_srli_epi16(_mm_cmpeq_epi16(arg4, arg4), 0xf)), 1)
int32_t zmm3[0x4] = *arg10
uint16_t temp0_4[0x8] = _mm_slli_epi16(zmm2, 1)
int64_t rcx = arg1 + (arg2 << 1)
int64_t r11_2 = arg12 + (arg2 << 1)
int64_t r9_1 = arg8 + (arg2 << 1)
int64_t r10_2 = arg9 + (arg2 << 1)
int64_t rdx = neg.q(arg2)
int32_t zmm9[0x4] = *(rcx + (rdx << 1))
int32_t zmm10[0x4] = *(rcx + (rdx << 1) + 0x10)
int32_t temp0_5[0x4] = _mm_abs_epi16(zmm9)
int32_t temp0_6[0x4] = _mm_abs_epi16(zmm10)
arg5 = _mm_cmpeq_epi16(arg5, arg5)
int32_t temp0_8[0x4] = _mm_adds_epi16(temp0_5, zmm1)
zmm1 = _mm_unpackhi_epi64(zmm1, zmm1[0].q)
int32_t temp0_10[0x4] = _mm_adds_epi16(temp0_6, zmm1)
int32_t zmm8[0x4] = _mm_mulhi_epi16(temp0_8, temp0_4)
zmm2 = _mm_unpackhi_epi64(temp0_4, temp0_4[0].q)
int16_t temp0_13[0x8] = _mm_mulhi_epi16(temp0_10, zmm2)
int32_t temp0_14[0x4] = _mm_sign_epi16(zmm8, zmm9)
int16_t zmm13[0x8] = _mm_sign_epi16(temp0_13, zmm10)
*(r9_1 + (rdx << 1)) = temp0_14
*(r9_1 + (rdx << 1) + 0x10) = zmm13
int32_t temp0_16[0x4] = _mm_abs_epi16(temp0_14)
zmm13 = _mm_abs_epi16(zmm13)
int32_t temp0_18[0x4] = _mm_mullo_epi16(temp0_16, zmm3)
int32_t temp0_19[0x4] = _mm_unpackhi_epi64(zmm3, zmm3[0].q)
zmm13 = _mm_mullo_epi16(zmm13, temp0_19)
zmm8 = _mm_srli_epi16(temp0_18, 1)
zmm13 = _mm_srli_epi16(zmm13, 1)
int32_t temp0_23[0x4] = _mm_sign_epi16(zmm8, zmm9)
zmm13 = _mm_sign_epi16(zmm13, zmm10)
int32_t zmm0[0x4] = _mm_srli_epi16(temp0_19, 2)
*(r10_2 + (rdx << 1)) = temp0_23
*(r10_2 + (rdx << 1) + 0x10) = zmm13
zmm8 = _mm_cmpeq_epi16(temp0_23, zx.o(0))
int16_t temp0_27[0x8] = _mm_cmpeq_epi16(zmm13, zx.o(0))
zmm8 = _mm_max_epi16(zmm8 & not.o(_mm_sub_epi16(*(r11_2 + (rdx << 1)), arg5)), 
    temp0_27 & not.o(_mm_sub_epi16(*(r11_2 + (rdx << 1) + 0x10), arg5)))
int64_t rdx_1 = rdx + 0x10

if (rdx != -0x10)
    while (true)
        zmm9 = *(rcx + (rdx_1 << 1))
        zmm10 = *(rcx + (rdx_1 << 1) + 0x10)
        int32_t temp0_32[0x4] = _mm_abs_epi16(zmm9)
        int32_t temp0_33[0x4] = _mm_abs_epi16(zmm10)
        arg5 = _mm_cmpgt_epi16(temp0_32, zmm0)
        int16_t temp0_35[0x8] = _mm_cmpgt_epi16(temp0_33, zmm0)
        
        if ((zx.q(_mm_movemask_epi8(arg5)) | zx.q(_mm_movemask_epi8(temp0_35))) == 0)
            *(r9_1 + (rdx_1 << 1)) = zx.o(0)
            *(r9_1 + (rdx_1 << 1) + 0x10) = zx.o(0)
            *(r10_2 + (rdx_1 << 1)) = zx.o(0)
            *(r10_2 + (rdx_1 << 1) + 0x10) = zx.o(0)
            int64_t temp2_1 = rdx_1
            rdx_1 += 0x10
            
            if (temp2_1 s>= -0x10)
                break
        else
            arg5 = _mm_cmpeq_epi16(arg5, arg5)
            int32_t temp0_39[0x4] = _mm_adds_epi16(temp0_32, zmm1)
            int32_t temp0_40[0x4] = _mm_adds_epi16(temp0_33, zmm1)
            zmm14 = _mm_mulhi_epi16(temp0_39, zmm2)
            int16_t temp0_42[0x8] = _mm_mulhi_epi16(temp0_40, zmm2)
            int32_t temp0_43[0x4] = _mm_sign_epi16(zmm14, zmm9)
            zmm13 = _mm_sign_epi16(temp0_42, zmm10)
            *(r9_1 + (rdx_1 << 1)) = temp0_43
            *(r9_1 + (rdx_1 << 1) + 0x10) = zmm13
            int32_t temp0_45[0x4] = _mm_abs_epi16(temp0_43)
            zmm13 = _mm_abs_epi16(zmm13)
            int32_t temp0_47[0x4] = _mm_mullo_epi16(temp0_45, temp0_19)
            zmm13 = _mm_mullo_epi16(zmm13, temp0_19)
            zmm14 = _mm_srli_epi16(temp0_47, 1)
            zmm13 = _mm_srli_epi16(zmm13, 1)
            int32_t temp0_51[0x4] = _mm_sign_epi16(zmm14, zmm9)
            zmm13 = _mm_sign_epi16(zmm13, zmm10)
            *(r10_2 + (rdx_1 << 1)) = temp0_51
            *(r10_2 + (rdx_1 << 1) + 0x10) = zmm13
            zmm14 = _mm_cmpeq_epi16(temp0_51, zx.o(0))
            int16_t temp0_54[0x8] = _mm_cmpeq_epi16(zmm13, zx.o(0))
            int32_t zmm11[0x4] = *(r11_2 + (rdx_1 << 1) + 0x10)
            int32_t temp0_55[0x4] = _mm_sub_epi16(*(r11_2 + (rdx_1 << 1)), arg5)
            zmm13 = temp0_54 & not.o(_mm_sub_epi16(zmm11, arg5))
            zmm8 = _mm_max_epi16(_mm_max_epi16(zmm8, zmm14 & not.o(temp0_55)), zmm13)
            int64_t temp3_1 = rdx_1
            rdx_1 += 0x10
            
            if (temp3_1 s>= -0x10)
                break

int32_t temp0_60[0x4] = _mm_max_epi16(zmm8, _mm_shuffle_epi32(zmm8, 0xe))
int32_t temp0_62[0x4] = _mm_max_epi16(temp0_60, _mm_shufflelo_epi16(temp0_60, 0xe))
*arg11 = zx.q(_mm_extract_epi16(_mm_max_epi16(temp0_62, _mm_shufflelo_epi16(temp0_62, 1)), 0))

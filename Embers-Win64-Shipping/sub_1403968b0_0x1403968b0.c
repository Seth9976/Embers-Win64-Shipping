// 函数: sub_1403968b0
// 地址: 0x1403968b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm14[0x4]
int32_t var_18[0x4] = zmm14

if (arg3 != 0)
    void* rcx_2 = arg5 + (arg2 << 1)
    void* r8_4 = arg4 + (arg2 << 1)
    int64_t i_3 = neg.q(arg2)
    int64_t i
    
    do
        *(rcx_2 + (i_3 << 1)) = zx.o(0)
        *(rcx_2 + (i_3 << 1) + 0x10) = zx.o(0)
        *(r8_4 + (i_3 << 1)) = zx.o(0)
        *(r8_4 + (i_3 << 1) + 0x10) = zx.o(0)
        i = i_3
        i_3 += 0x10
    while (i s< -0x10)
    *arg11 = 0
    return 

int32_t zmm1[0x4] = *arg5
int16_t zmm2[0x8] = *arg6
int32_t zmm3[0x4] = *arg10
int32_t temp0[0x4] = __psubw_xmmdq_memdq(*arg4, data_14427e9b0)
int16_t zmm4[0x8] = *arg7
int64_t rcx = arg1 + (arg2 << 1)
int64_t r9_1 = arg8 + (arg2 << 1)
int64_t r10_2 = arg9 + (arg2 << 1)
int64_t r11_2 = arg12 + (arg2 << 1)
int64_t rdx = neg.q(arg2)
int32_t zmm9[0x4] = *(rcx + (rdx << 1))
int32_t zmm10[0x4] = *(rcx + (rdx << 1) + 0x10)
int32_t temp0_1[0x4] = _mm_abs_epi16(zmm9)
int32_t temp0_2[0x4] = _mm_abs_epi16(zmm10)
int32_t zmm7[0x4] = _mm_cmpgt_epi16(temp0_1, temp0)
int32_t temp0_4[0x4] = _mm_unpackhi_epi64(temp0, temp0[0].q)
int16_t temp0_5[0x8] = _mm_cmpgt_epi16(temp0_2, temp0_4)
int32_t temp0_6[0x4] = _mm_adds_epi16(temp0_1, zmm1)
int32_t temp0_7[0x4] = _mm_unpackhi_epi64(zmm1, zmm1[0].q)
int32_t temp0_8[0x4] = _mm_adds_epi16(temp0_2, temp0_7)
int32_t zmm8[0x4] = _mm_mulhi_epi16(temp0_6, zmm2)
zmm2 = _mm_unpackhi_epi64(zmm2, zmm2[0].q)
int16_t temp0_11[0x8] = _mm_mulhi_epi16(temp0_8, zmm2)
zmm8 = _mm_add_epi16(zmm8, temp0_6)
int16_t temp0_13[0x8] = _mm_add_epi16(temp0_11, temp0_8)
zmm8 = _mm_mulhi_epi16(zmm8, zmm4)
zmm4 = _mm_unpackhi_epi64(zmm4, zmm4[0].q)
int16_t temp0_16[0x8] = _mm_mulhi_epi16(temp0_13, zmm4)
zmm8 = _mm_sign_epi16(zmm8, zmm9) & zmm7
int16_t zmm13[0x8] = _mm_sign_epi16(temp0_16, zmm10) & temp0_5
*(r9_1 + (rdx << 1)) = zmm8
*(r9_1 + (rdx << 1) + 0x10) = zmm13
int32_t temp0_19[0x4] = _mm_mullo_epi16(zmm8, zmm3)
int32_t temp0_20[0x4] = _mm_unpackhi_epi64(zmm3, zmm3[0].q)
zmm13 = _mm_mullo_epi16(zmm13, temp0_20)
*(r10_2 + (rdx << 1)) = temp0_19
*(r10_2 + (rdx << 1) + 0x10) = zmm13
zmm8 = _mm_cmpeq_epi16(temp0_19, zx.o(0))
int16_t temp0_23[0x8] = _mm_cmpeq_epi16(zmm13, zx.o(0))
zmm8 = _mm_max_epi16(zmm8 & not.o(_mm_sub_epi16(*(r11_2 + (rdx << 1)), zmm7)), 
    temp0_23 & not.o(_mm_sub_epi16(*(r11_2 + (rdx << 1) + 0x10), temp0_5)))
int64_t i_2 = rdx + 0x10

if (rdx != -0x10)
    int64_t i_1
    
    do
        zmm9 = *(rcx + (i_2 << 1))
        zmm10 = *(rcx + (i_2 << 1) + 0x10)
        int32_t temp0_28[0x4] = _mm_abs_epi16(zmm9)
        int32_t temp0_29[0x4] = _mm_abs_epi16(zmm10)
        zmm7 = _mm_cmpgt_epi16(temp0_28, temp0_4)
        int16_t temp0_31[0x8] = _mm_cmpgt_epi16(temp0_29, temp0_4)
        int32_t temp0_32[0x4] = _mm_adds_epi16(temp0_28, temp0_7)
        int32_t temp0_33[0x4] = _mm_adds_epi16(temp0_29, temp0_7)
        zmm14 = _mm_mulhi_epi16(temp0_32, zmm2)
        int16_t temp0_35[0x8] = _mm_mulhi_epi16(temp0_33, zmm2)
        zmm14 = _mm_add_epi16(zmm14, temp0_32)
        int16_t temp0_37[0x8] = _mm_add_epi16(temp0_35, temp0_33)
        zmm14 = _mm_mulhi_epi16(zmm14, zmm4)
        int16_t temp0_39[0x8] = _mm_mulhi_epi16(temp0_37, zmm4)
        zmm14 = _mm_sign_epi16(zmm14, zmm9) & zmm7
        zmm13 = _mm_sign_epi16(temp0_39, zmm10) & temp0_31
        *(r9_1 + (i_2 << 1)) = zmm14
        *(r9_1 + (i_2 << 1) + 0x10) = zmm13
        int32_t temp0_42[0x4] = _mm_mullo_epi16(zmm14, temp0_20)
        zmm13 = _mm_mullo_epi16(zmm13, temp0_20)
        *(r10_2 + (i_2 << 1)) = temp0_42
        *(r10_2 + (i_2 << 1) + 0x10) = zmm13
        zmm14 = _mm_cmpeq_epi16(temp0_42, zx.o(0))
        int16_t temp0_45[0x8] = _mm_cmpeq_epi16(zmm13, zx.o(0))
        int32_t zmm11[0x4] = *(r11_2 + (i_2 << 1) + 0x10)
        int32_t temp0_46[0x4] = _mm_sub_epi16(*(r11_2 + (i_2 << 1)), zmm7)
        zmm13 = temp0_45 & not.o(_mm_sub_epi16(zmm11, temp0_31))
        zmm8 = _mm_max_epi16(_mm_max_epi16(zmm8, zmm14 & not.o(temp0_46)), zmm13)
        i_1 = i_2
        i_2 += 0x10
    while (i_1 s< -0x10)

int32_t temp0_51[0x4] = _mm_max_epi16(zmm8, _mm_shuffle_epi32(zmm8, 0xe))
int32_t temp0_53[0x4] = _mm_max_epi16(temp0_51, _mm_shufflelo_epi16(temp0_51, 0xe))
*arg11 = zx.q(_mm_extract_epi16(_mm_max_epi16(temp0_53, _mm_shufflelo_epi16(temp0_53, 1)), 0))

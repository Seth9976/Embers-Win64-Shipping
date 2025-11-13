// 函数: sub_141d1d070
// 地址: 0x141d1d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg4
int64_t rdi = sx.q(arg1)

if (*(rdi + result) == 0)
    int128_t* rax_2 = rdi * 0x30 + *(arg3 + 8)
    float zmm3[0x4] = *rax_2
    float zmm10[0x4] = rax_2[1]
    float temp0_1[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0_1)
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
    float temp0_9[0x4] = _mm_mul_ps(temp0_3, temp0_7)
    float zmm1[0x4] = rax_2[2]
    int64_t rax_3 = *(arg2 + 8)
    float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
    float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
    int32_t rcx = *(rax_3 + (rdi << 2))
    float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_6)
    int32_t rax_4 = sx.d(data_143a21158)
    float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_9)
    zmm3 = data_143f36f70
    float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
    zmm3[0].q = zmm10 u>> 0x40
    float temp0_17[0x4] = _mm_sub_ps(zmm3, temp0_11)
    zmm10 = _mm_shuffle_ps(zmm10, zmm3, 0xc4)
    float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_17, zmm1), data_143f36f80)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
    float zmm8[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x10)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
    float zmm9[0x4] = _mm_shuffle_ps(temp0_25, temp0_24, 0x88)
    float zmm7[0x4] = _mm_shuffle_ps(temp0_26, zmm2, 0xe8)
    int64_t rdx
    
    if (rcx == rax_4)
        rdx = *arg5
    else
        int64_t* var_68_1 = arg5
        sub_141d1d070(rcx)
        rdx = *arg5
        int64_t rax_5 = *(arg2 + 8)
        float temp0_29[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        float temp0_30[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        int64_t rcx_1 = sx.q(*(rax_5 + (rdi << 2)))
        float temp0_31[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        float temp0_32[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
        int128_t* rcx_3 = (rcx_1 << 6) + rdx
        float zmm6[0x4] = rcx_3[3]
        zmm3 = rcx_3[1]
        float zmm4_1[0x4] = *rcx_3
        float zmm5_1[0x4] = rcx_3[2]
        float temp0_33[0x4] = _mm_mul_ps(temp0_29, zmm3)
        float temp0_34[0x4] = _mm_mul_ps(temp0_30, zmm4_1)
        float temp0_35[0x4] = _mm_mul_ps(temp0_31, zmm5_1)
        float temp0_36[0x4] = _mm_mul_ps(temp0_32, zmm6)
        float temp0_38[0x4] = _mm_add_ps(_mm_add_ps(temp0_33, temp0_34), temp0_35)
        float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xaa), zmm5_1)
        float temp0_41[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
        zmm8 = _mm_add_ps(temp0_38, temp0_36)
        float temp0_43[0x4] = _mm_mul_ps(temp0_41, zmm3)
        float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm4_1)
        float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xff), zmm6)
        float temp0_49[0x4] = _mm_add_ps(_mm_add_ps(temp0_43, temp0_45), temp0_40)
        float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm5_1)
        float temp0_52[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm9 = _mm_add_ps(temp0_49, temp0_47)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm3)
        float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm4_1)
        float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), zmm6)
        float temp0_60[0x4] = _mm_add_ps(_mm_add_ps(temp0_54, temp0_56), temp0_51)
        float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xaa), zmm5_1)
        float temp0_63[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
        zmm7 = _mm_add_ps(temp0_60, temp0_58)
        float temp0_65[0x4] = _mm_mul_ps(temp0_63, zmm3)
        float temp0_66[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
        float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xff), zmm6)
        zmm10 = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(temp0_65, _mm_mul_ps(temp0_66, zmm4_1)), temp0_62), temp0_68)
    
    int64_t rax_8 = rdi << 6
    *(rax_8 + rdx) = zmm8
    *(rax_8 + rdx + 0x10) = zmm9
    *(rax_8 + rdx + 0x20) = zmm7
    *(rax_8 + rdx + 0x30) = zmm10
    result = *arg4
    *(rdi + result) = 1

return result

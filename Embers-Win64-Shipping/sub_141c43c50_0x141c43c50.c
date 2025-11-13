// 函数: sub_141c43c50
// 地址: 0x141c43c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i_2 = 1 << arg3

if (i_2 s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    int128_t* r8 = nullptr
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    int64_t r9_1 = 0x10
    float zmm11[0x4]
    float var_68_1[0x4] = zmm11
    float zmm12[0x4]
    float var_78_1[0x4] = zmm12
    result = arg2 + 0x40
    float zmm13[0x4]
    float var_88_1[0x4] = zmm13
    float zmm14[0x4]
    float var_98_1[0x4] = zmm14
    float zmm15[0x4]
    float var_a8_1[0x4] = zmm15
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rcx_1 = *(arg1 + 0x10)
        int64_t j_1 = 2
        zmm7 = *(r8 + rcx_1)
        zmm8 = *(r8 + rcx_1 + 0x40)
        zmm9 = *(r8 + rcx_1 + 0x50)
        zmm10 = *(r8 + rcx_1 + 0x70)
        zmm11 = *(r8 + rcx_1 + 0x80)
        zmm12 = *(r8 + rcx_1 + 0xa0)
        zmm13 = *(r8 + rcx_1 + 0x90)
        zmm14 = *(r8 + rcx_1 + 0x60)
        zmm15 = *(r8 + rcx_1 + 0x10)
        float var_c8_1[0x4] = *(r8 + rcx_1 + 0x20)
        void* const* result_1 = result
        float var_b8_1[0x4] = *(r8 + rcx_1 + 0x30)
        int64_t j
        
        do
            float zmm2[0x4] = *(result_1 + 0x20)
            float zmm1[0x4] = *result_1
            float zmm0[0x4] = *(result_1 - 0x20)
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xb1)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xb1)
            float temp0_4[0x4] = _mm_mul_ps(temp0_1, zmm12)
            float temp0_5[0x4] = _mm_mul_ps(temp0_2, zmm10)
            float temp0_6[0x4] = _mm_mul_ps(temp0_3, zmm8)
            float temp0_7[0x4] = _mm_add_ps(temp0_4, zmm2)
            float temp0_8[0x4] = _mm_add_ps(temp0_5, zmm1)
            float temp0_9[0x4] = _mm_add_ps(temp0_6, zmm0)
            float temp0_10[0x4] = _mm_mul_ps(temp0_7, zmm13)
            float temp0_11[0x4] = _mm_mul_ps(temp0_7, zmm11)
            float temp0_12[0x4] = _mm_mul_ps(temp0_8, zmm9)
            float temp0_13[0x4] = _mm_add_ps(temp0_10, temp0_9)
            float temp0_14[0x4] = _mm_mul_ps(temp0_8, zmm14)
            float temp0_15[0x4] = _mm_add_ps(temp0_11, temp0_9)
            float temp0_16[0x4] = __addps_xmmps_memps(temp0_12, *(result_1 - 0x40))
            float temp0_17[0x4] = __addps_xmmps_memps(temp0_14, *(result_1 - 0x40))
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xb1)
            float temp0_19[0x4] = _mm_mul_ps(temp0_15, zmm15)
            float temp0_20[0x4] = _mm_mul_ps(temp0_15, zmm7)
            float temp0_21[0x4] = _mm_add_ps(temp0_19, temp0_16)
            *(result_1 - 0x40) = _mm_add_ps(temp0_20, temp0_16)
            float temp0_23[0x4] = __mulps_xmmps_memps(temp0_18, var_c8_1)
            float temp0_24[0x4] = __mulps_xmmps_memps(temp0_18, var_b8_1)
            *(result_1 - 0x20) = temp0_21
            float temp0_25[0x4] = _mm_add_ps(temp0_23, temp0_17)
            float temp0_26[0x4] = _mm_add_ps(temp0_24, temp0_17)
            *result_1 = temp0_25
            *(result_1 + 0x20) = temp0_26
            result_1 = &result_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        r8 = &r8[0xb]
        r9_1 += 0x20
        result -= -0x80
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

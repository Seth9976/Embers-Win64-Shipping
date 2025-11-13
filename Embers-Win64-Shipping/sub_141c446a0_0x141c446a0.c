// 函数: sub_141c446a0
// 地址: 0x141c446a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4] = data_142d3f7c0
uint64_t r9 = zx.q(1 << (arg4 - 3))
float zmm14[0x4] = data_143205560
float zmm15[0x4] = data_1432055a0
uint64_t result = zx.q((r9 << 2).d)

if (r9.d s> 0)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    int64_t r11_1 = sx.q(result.d)
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    int64_t rdx = r11_1 << 2
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    float (* rbp_1)[0x4] = rdx + arg2
    int64_t r12_1 = (sx.q((r9 * 2).d) - r11_1) << 2
    int64_t rbx_2 = (sx.q((r9 * 3).d * 2) - r11_1) << 2
    uint64_t result_1 = rbx_2 - arg2 + arg3
    int64_t r14_1 = (sx.q((r9 << 3).d) - r11_1) << 2
    int64_t rdi_2 = (sx.q((r9 * 5).d * 2) - r11_1) << 2
    int64_t rsi_2 = (sx.q((r9 * 3).d << 2) - r11_1) << 2
    int64_t r15_1 = (sx.q(r9.d * 0xe) - r11_1) << 2
    result = result_1
    uint64_t i_1 = zx.q(((r9 - 1).d u>> 1) + 1)
    uint64_t i
    
    do
        zmm8 = *(rbx_2 + rbp_1)
        zmm10 = *(r12_1 + rbp_1)
        zmm7 = *rbp_1
        zmm12 = *(rbp_1 + (neg.q(r11_1) << 2))
        zmm9 = *(rdi_2 + rbp_1)
        float temp0_1[0x4] = _mm_add_ps(*(r15_1 + rbp_1), zmm8)
        float temp0_2[0x4] = __subps_xmmps_memps(zmm8, *(r15_1 + rbp_1))
        float zmm4[0x4] = *(rsi_2 + rbp_1)
        float temp0_3[0x4] = _mm_add_ps(zmm9, zmm10)
        float temp0_4[0x4] = __subps_xmmps_memps(zmm10, *(rdi_2 + rbp_1))
        zmm11 = *(r14_1 + rbp_1)
        float temp0_5[0x4] = _mm_add_ps(zmm4, zmm7)
        float temp0_6[0x4] = __subps_xmmps_memps(zmm7, *(rsi_2 + rbp_1))
        float temp0_7[0x4] = _mm_add_ps(zmm11, zmm12)
        float temp0_8[0x4] = _mm_mul_ps(temp0_2, zmm13)
        float temp0_9[0x4] = __subps_xmmps_memps(zmm12, *(r14_1 + rbp_1))
        float temp0_10[0x4] = _mm_add_ps(temp0_1, temp0_3)
        float temp0_11[0x4] = _mm_mul_ps(temp0_6, zmm13)
        float temp0_12[0x4] = _mm_add_ps(temp0_5, temp0_7)
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xb1)
        float temp0_14[0x4] = _mm_sub_ps(temp0_7, temp0_5)
        float temp0_15[0x4] = _mm_add_ps(temp0_13, temp0_4)
        float temp0_16[0x4] = _mm_sub_ps(temp0_4, temp0_13)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xb1)
        float temp0_18[0x4] = _mm_sub_ps(temp0_3, temp0_1)
        float temp0_19[0x4] = _mm_add_ps(temp0_17, temp0_9)
        float temp0_20[0x4] = _mm_sub_ps(temp0_9, temp0_17)
        float temp0_21[0x4] = _mm_mul_ps(temp0_15, zmm13)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xb1)
        float temp0_23[0x4] = _mm_mul_ps(temp0_18, zmm13)
        float temp0_25[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xb1), temp0_15)
        float temp0_26[0x4] = _mm_mul_ps(temp0_16, zmm13)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xb1)
        float temp0_28[0x4] = _mm_add_ps(temp0_10, temp0_12)
        float temp0_29[0x4] = _mm_sub_ps(temp0_12, temp0_10)
        float temp0_30[0x4] = _mm_add_ps(temp0_22, temp0_26)
        *(arg3 - rdx - arg2 + rbp_1) = temp0_28
        float temp0_31[0x4] = _mm_add_ps(temp0_27, temp0_14)
        *(rbp_1 + r12_1 - arg2 + arg3) = temp0_29
        float temp0_32[0x4] = _mm_mul_ps(temp0_30, zmm13)
        float temp0_33[0x4] = _mm_sub_ps(temp0_14, temp0_27)
        *(arg3 - arg2 + rbp_1) = temp0_31
        *(result + rbp_1) = temp0_33
        float temp0_34[0x4] = _mm_mul_ps(temp0_25, zmm14)
        float temp0_35[0x4] = _mm_mul_ps(temp0_25, zmm15)
        float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_19)
        float temp0_37[0x4] = _mm_add_ps(temp0_35, temp0_19)
        *(r14_1 - arg2 + arg3 + rbp_1) = temp0_36
        float temp0_38[0x4] = _mm_mul_ps(temp0_32, zmm15)
        *(rdi_2 - arg2 + arg3 + rbp_1) = temp0_37
        float temp0_39[0x4] = _mm_mul_ps(temp0_32, zmm14)
        float temp0_40[0x4] = _mm_add_ps(temp0_38, temp0_20)
        float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_20)
        *(rsi_2 - arg2 + arg3 + rbp_1) = temp0_40
        *(r15_1 - arg2 + arg3 + rbp_1) = temp0_41
        rbp_1 = &rbp_1[1]
        result = result_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

// 函数: sub_141c3ce90
// 地址: 0x141c3ce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = *arg4
float zmm7[0x4] = arg4[1].d
float zmm8[0x4] = *(arg4 + 0x28)
float temp0[0x4] = _mm_unpacklo_ps(*(arg4 + 0x14), (*(arg4 + 4))[0].q)
float zmm1[0x4] = *(arg4 + 0x1c)
float zmm9[0x4] = *arg4
float temp0_1[0x4] = _mm_unpacklo_ps(zmm7, result[0].q)
result = *(arg4 + 0x18)
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(*(arg4 + 0x2c), zmm1[0].q)
float temp0_4[0x4] = _mm_unpacklo_ps(zmm8, result[0].q)
float zmm12[0x4] = arg4[2]
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
float zmm10[0x4] = *(arg4 + 8)
float zmm11[0x4] = *(arg4 + 0x18)

if (arg3 s> 0)
    void* rcx = arg1 + 0xc
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    void* r8_1 = arg2 + 0x20
    void* rdx = rcx
    uint64_t i_1 = zx.q(((arg3 - 1) u>> 1) + 1)
    uint64_t i
    
    do
        float zmm4[0x4] = *(rcx - 0xc)
        zmm6 = *(rcx - 8)
        int64_t zmm5 = *rcx
        zmm1 = *(rdx - 8)
        result = *(rdx - 0xc)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_7[0x4] = _mm_shuffle_ps(result, result, 0)
        float temp0_8[0x4] = _mm_mul_ps(temp0_6, zmm11)
        float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm9)
        float temp0_10[0x4] = _mm_unpacklo_ps(zmm6, zmm5)
        float temp0_11[0x4] = _mm_add_ps(temp0_8, temp0_9)
        result = *(rcx - 4)
        float temp0_12[0x4] = _mm_unpacklo_ps(zmm4, result[0].q)
        rcx += 0x10
        float temp0_13[0x4] = _mm_unpacklo_ps(zmm4, result[0].q)
        result = *rdx
        float temp0_14[0x4] = _mm_unpacklo_ps(temp0_13, temp0_12[0].q)
        *(r8_1 - 0x20) = temp0_11
        zmm1 = *(rdx - 4)
        rdx += 0x10
        float temp0_15[0x4] = _mm_unpacklo_ps(zmm6, zmm5)
        float temp0_16[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_17[0x4] = _mm_unpacklo_ps(temp0_15, temp0_10[0].q)
        float temp0_18[0x4] = _mm_shuffle_ps(result, result, 0)
        float temp0_19[0x4] = _mm_mul_ps(temp0_17, temp0_5)
        float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_2)
        float temp0_21[0x4] = _mm_mul_ps(temp0_16, zmm10)
        result = _mm_mul_ps(temp0_18, zmm12)
        float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_19)
        float temp0_24[0x4] = _mm_add_ps(temp0_21, result)
        *(r8_1 - 0x10) = temp0_23
        *r8_1 = temp0_24
        r8_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

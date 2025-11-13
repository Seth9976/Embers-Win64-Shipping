// 函数: sub_141a80100
// 地址: 0x141a80100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result
uint32_t zmm0_1[0x4]

if (*(arg1 + 0x28) s> 0)
    zmm0_1, result = sub_141a803d0(arg1, arg1 + 0x60)

if (*(arg1 + 0x28) s<= 0 || zmm0_1[0] f<= 9.99999975e-06f)
    result.b = 0
else
    uint32_t zmm6[0x4]
    uint32_t var_18_1[0x4] = zmm6
    float zmm11[0x4] = 0x3f800000
    
    if (not(zmm0_1[0] f<= 1f))
        zmm11[0] = 1f f/ zmm0_1[0]
    
    int32_t i = 1
    zmm11[0] = zmm11[0] f* **(arg1 + 0x60)
    result = *(arg1 + 0x20)
    zmm0_1 = zmm11
    zmm11[0] = zmm11[0] f* *result
    zmm0_1[0] = zmm0_1[0] f* result[1]
    zmm11[0] = zmm11[0] f* result[2]
    zmm11[0] = zmm11[0] f* result[3]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
    temp0_1[0] = zmm0_1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm11[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = zmm11[0]
    *arg2 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
    float zmm5[0x4]
    
    if (*(arg1 + 0x28) s> 1)
        float zmm3[0x4] = (*arg2)[1]
        int32_t* rcx = 0x10
        zmm5 = *arg2
        int32_t* r8_1 = 4
        zmm6 = (*arg2)[2]
        float zmm4[0x4] = (*arg2)[3]
        uint32_t zmm7[0x4]
        uint32_t var_28_1[0x4] = zmm7
        float zmm8[0x4]
        float var_38_1[0x4] = zmm8
        uint32_t zmm9[0x4]
        uint32_t var_48_1[0x4] = zmm9
        uint32_t zmm10[0x4]
        uint32_t var_58_1[0x4] = zmm10
        uint32_t zmm12[0x4]
        uint32_t var_78_1[0x4] = zmm12
        float zmm13[0x4]
        float var_88_1[0x4] = zmm13
        
        do
            zmm7 = zmm11
            zmm12 = zmm6
            zmm13 = zmm5
            zmm7[0] = zmm7[0] f* *(r8_1 + *(arg1 + 0x60))
            result = *(arg1 + 0x20)
            zmm8 = zmm7
            zmm8[0] = zmm8[0] f* *(rcx + result)
            zmm7[0] = zmm7[0] f* *(rcx + result + 4)
            zmm7[0] = zmm7[0] f* *(rcx + result + 8)
            zmm7[0] = zmm7[0] f* *(rcx + result + 0xc)
            zmm8[0] = zmm8[0] * zmm5[0]
            float zmm1_1[0x4] = zmm7
            zmm7[0] = zmm7[0] f* zmm3[0]
            zmm1_1[0] = zmm1_1[0] f* zmm6[0]
            zmm8[0] = zmm8[0] f+ zmm7[0]
            zmm7[0] = zmm7[0] f* zmm4[0]
            zmm8[0] = zmm8[0] + zmm1_1[0]
            zmm8[0] = zmm8[0] f+ zmm7[0]
            
            if (zmm8[0] >= 0f)
                zmm5 = zmm8
                zmm3[0] = zmm3[0] f+ zmm7[0]
                zmm6 = zmm7
                zmm5[0] = zmm5[0] + zmm13[0]
                zmm6[0] = zmm6[0] f+ zmm12[0]
                zmm4[0] = zmm4[0] f+ zmm7[0]
            else
                zmm5[0] = zmm5[0] - zmm8[0]
                zmm3[0] = zmm3[0] f- zmm7[0]
                zmm6[0] = zmm6[0] f- zmm7[0]
                zmm4[0] = zmm4[0] f- zmm7[0]
            
            *arg2 = zmm5[0]
            i += 1
            (*arg2)[1] = zmm3[0]
            r8_1 = &r8_1[1]
            (*arg2)[2] = zmm6[0]
            rcx = &rcx[4]
            (*arg2)[3] = zmm4[0]
        while (i s< *(arg1 + 0x28))
    
    zmm6 = *arg2
    result.b = 1
    zmm5 = data_143f2b570
    float temp0_5[0x4] = _mm_mul_ps(zmm6, zmm6)
    float temp0_7[0x4] = _mm_add_ps(temp0_5, _mm_shuffle_ps(temp0_5, temp0_5, 0x4e))
    float temp0_9[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x39), temp0_7)
    float temp0_10[0x4] = _mm_rsqrt_ps(temp0_9)
    float temp0_11[0x4] = _mm_mul_ps(temp0_9, zmm5)
    float temp0_16[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_10, temp0_10), temp0_11)), 
            temp0_10), 
        temp0_10)
    float temp0_19[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_16, temp0_16), temp0_11))
    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_9, 2)
    *arg2 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_19, temp0_16), temp0_16), zmm6) ^ data_143f2b560, 
        zmm0_1) ^ data_143f2b560

return result

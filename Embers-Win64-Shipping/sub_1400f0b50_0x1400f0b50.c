// 函数: sub_1400f0b50
// 地址: 0x1400f0b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4]
float var_18[0x4] = zmm8
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm6[0x4]
float var_38[0x4] = zmm6
uint64_t result = zx.q(_mm_movemask_ps(*arg4))
int32_t i = arg3 - 1
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]

if (result.d != 0xf)
    if (i s> 0)
        int64_t i_2 = sx.q(i)
        int32_t* r10_2 = arg2 + (i_2 << 2)
        float (* rdx_5)[0x4] = i_2 * 0x30 + arg1
        zmm8 = data_142d3f690
        zmm1 = data_142d3f7c0
        zmm2 = data_142d3f7d0
        zmm3 = data_142d3f7b0
        
        do
            zmm0 = *rdx_5
            result = sx.q(*r10_2) * 0x30
            float temp0_19[0x4] = _mm_mul_ps(*(arg1 + result), zmm8)
            float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), zmm0)
            float temp0_22[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0)
            float temp0_26[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), temp0_22), zmm1), temp0_21)
            float temp0_27[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
            float temp0_31[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_27), zmm2), temp0_26)
            float temp0_32[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
            *rdx_5 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_32), zmm3), temp0_31)
            i -= 1
            r10_2 = &r10_2[-1]
            rdx_5 = &rdx_5[-3]
        while (i s> 0)
else if (i s> 0)
    int64_t i_1 = sx.q(i)
    int32_t* r10_1 = arg2 + (i_1 << 2)
    float (* rdx_2)[0x4] = i_1 * 0x30 + arg1
    zmm8 = data_142d3f690
    zmm1 = data_142d3f7c0
    zmm2 = data_142d3f7d0
    zmm3 = data_142d3f7b0
    
    do
        zmm0 = *rdx_2
        result = sx.q(*r10_1) * 0x30
        float temp0_1[0x4] = _mm_mul_ps(*(arg1 + result), zmm8)
        float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0xff), zmm0)
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0)
        float temp0_8[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), temp0_4), zmm1), temp0_3)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x55)
        float temp0_13[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_9), zmm2), temp0_8)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xaa)
        *rdx_2 = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_14), zmm3), temp0_13)
        i -= 1
        r10_1 = &r10_1[-1]
        rdx_2 = &rdx_2[-3]
    while (i s> 0)
return result

// 函数: sub_1400f3560
// 地址: 0x1400f3560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm12
int128_t var_18 = zmm12
float zmm11[0x4]
float var_28[0x4] = zmm11
float zmm10[0x4]
float var_38[0x4] = zmm10
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm6[0x4]
float var_78[0x4] = zmm6
uint64_t result = zx.q(_mm_movemask_ps(*arg5))
float zmm1[0x4]

if (result.d != 0xf)
    if (arg4 s> 0)
        float temp0_26[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
        uint64_t i_3 = zx.q(arg4)
        result = 0x20
        zmm11 = data_142e6da00
        zmm8 = data_142d3f7c0
        zmm9 = data_142d3f7d0
        zmm10 = data_142d3f7b0
        uint64_t i
        
        do
            float temp0_27[0x4] = _mm_mul_ps(*(arg2 + result - 0x20), temp0_26)
            float temp0_29[0x4] = __addps_xmmps_memps(
                _mm_mul_ps(*(arg2 + result - 0x10), temp0_26), *(arg1 + result - 0x10))
            float temp0_32[0x4] = __mulps_xmmps_memps(
                _mm_add_ps(_mm_mul_ps(*(arg2 + result), temp0_26), zmm11), *(arg1 + result))
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xe7)
            temp0_33[0] = temp0_33[0] * temp0_33[0]
            
            if (not(1f <= temp0_33[0]))
                zmm1 = *(arg1 + result - 0x20)
                float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xff), zmm1)
                float temp0_36[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0)
                float temp0_40[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x1b), temp0_36), zmm8), 
                    temp0_35)
                float temp0_41[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
                float temp0_45[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm1, zmm1, 1), temp0_41), zmm9), temp0_40)
                float temp0_46[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
                *(arg1 + result - 0x20) = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xb1), temp0_46), zmm10), 
                    temp0_45)
            
            *(arg1 + result - 0x10) = temp0_29
            *(arg1 + result) = temp0_32
            result += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (arg4 s> 0)
    float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
    uint64_t i_2 = zx.q(arg4)
    result = 0x20
    zmm11 = data_142e6da00
    zmm8 = data_142d3f7c0
    zmm9 = data_142d3f7d0
    zmm10 = data_142d3f7b0
    uint64_t i_1
    
    do
        float temp0_2[0x4] = _mm_mul_ps(*(arg2 + result - 0x20), temp0_1)
        float temp0_4[0x4] = __addps_xmmps_memps(_mm_mul_ps(*(arg2 + result - 0x10), temp0_1), 
            *(arg1 + result - 0x10))
        float temp0_7[0x4] = __mulps_xmmps_memps(
            _mm_add_ps(_mm_mul_ps(*(arg2 + result), temp0_1), zmm11), *(arg1 + result))
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe7)
        temp0_8[0] = temp0_8[0] * temp0_8[0]
        
        if (not(1f <= temp0_8[0]))
            zmm1 = *(arg1 + result - 0x20)
            float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), zmm1)
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0)
            float temp0_15[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x1b), temp0_11), zmm8), temp0_10)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x55)
            float temp0_20[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm1, zmm1, 1), temp0_16), zmm9), temp0_15)
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xaa)
            *(arg1 + result - 0x20) = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xb1), temp0_21), zmm10), temp0_20)
        
        *(arg1 + result - 0x10) = temp0_4
        *(arg1 + result) = temp0_7
        result += 0x30
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result

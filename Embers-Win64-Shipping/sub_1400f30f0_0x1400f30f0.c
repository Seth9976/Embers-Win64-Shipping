// 函数: sub_1400f30f0
// 地址: 0x1400f30f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(_mm_movemask_ps(*arg5))
float zmm0[0x4]
float zmm3[0x4]
uint32_t zmm4[0x4]

if (result.d != 0xf)
    if (arg4 s> 0)
        float temp0_19[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
        uint64_t i_3 = zx.q(arg4)
        result = 0x20
        uint64_t i
        
        do
            zmm0 = *(arg2 + result - 0x20)
            float temp0_20[0x4] = _mm_mul_ps(*(arg1 + result - 0x20), temp0_19)
            float temp0_21[0x4] = _mm_mul_ps(temp0_20, zmm0)
            zmm4 = _mm_add_ps(_mm_shuffle_pd(temp0_21, temp0_21, 1), temp0_21)
            float temp0_25[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x39), zmm4)
            zmm4 = _mm_cmpeq_ps(zx.o(0), temp0_25, 2)
            float temp0_27[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_25, 6)
            zmm3 = _mm_and_ps(_mm_sub_ps(zx.o(0), temp0_20), temp0_27)
            zmm4 = _mm_add_ps(_mm_or_ps(_mm_and_ps(zmm4, temp0_20), zmm3), zmm0)
            float temp0_34[0x4] = __addps_xmmps_memps(
                _mm_mul_ps(*(arg1 + result - 0x10), temp0_19), *(arg2 + result - 0x10))
            float temp0_36[0x4] =
                __addps_xmmps_memps(_mm_mul_ps(*(arg1 + result), temp0_19), *(arg2 + result))
            *(arg2 + result - 0x20) = zmm4
            *(arg2 + result - 0x10) = temp0_34
            *(arg2 + result) = temp0_36
            result += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (arg4 s> 0)
    float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
    uint64_t i_2 = zx.q(arg4)
    result = 0x20
    uint64_t i_1
    
    do
        zmm0 = *(arg2 + result - 0x20)
        float temp0_2[0x4] = _mm_mul_ps(*(arg1 + result - 0x20), temp0_1)
        float temp0_3[0x4] = _mm_mul_ps(temp0_2, zmm0)
        zmm4 = _mm_add_ps(_mm_shuffle_pd(temp0_3, temp0_3, 1), temp0_3)
        float temp0_7[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x39), zmm4)
        zmm4 = _mm_cmpeq_ps(zx.o(0), temp0_7, 2)
        float temp0_9[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_7, 6)
        zmm3 = _mm_and_ps(_mm_sub_ps(zx.o(0), temp0_2), temp0_9)
        zmm4 = _mm_add_ps(_mm_or_ps(_mm_and_ps(zmm4, temp0_2), zmm3), zmm0)
        float temp0_16[0x4] = __addps_xmmps_memps(_mm_mul_ps(*(arg1 + result - 0x10), temp0_1), 
            *(arg2 + result - 0x10))
        float temp0_18[0x4] =
            __addps_xmmps_memps(_mm_mul_ps(*(arg1 + result), temp0_1), *(arg2 + result))
        *(arg2 + result - 0x20) = zmm4
        *(arg2 + result - 0x10) = temp0_16
        *(arg2 + result) = temp0_18
        result += 0x30
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result

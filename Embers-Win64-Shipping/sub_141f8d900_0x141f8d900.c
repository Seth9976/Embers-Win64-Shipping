// 函数: sub_141f8d900
// 地址: 0x141f8d900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 1
float zmm7[0x4] = *arg3
float zmm2[0x4] = *(arg2 + 4)
uint64_t result = *(arg1 + 0x100)
uint32_t zmm9[0x4] = data_143f3c560
float temp0[0x4] = _mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q)
float zmm0[0x4] = *(arg3 + 8)
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
zmm2 = *(arg3 + 4)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm7, zmm0[0].q)
void* result_1 = arg1 + 0x80

if (result != 0)
    result_1 = result

int32_t rdx = 0
zmm7 = _mm_and_ps(_mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(zmm2, 0)[0].q), zmm9)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x55)
float temp0_9[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_10[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xaa)
float temp0_12[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)

if (*(arg1 + 0x110) s<= 0)
    result.b = 1
else
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    
    while (true)
        float zmm3[0x4] = *result_1
        float zmm5[0x4] = *(result_1 + 0x10)
        float zmm4[0x4] = *(result_1 + 0x20)
        zmm6 = zmm5
        zmm2 = *(result_1 + 0x30)
        zmm5 = _mm_and_ps(zmm5, zmm9)
        float temp0_14[0x4] = _mm_mul_ps(zmm6, temp0_8)
        float zmm1[0x4] = zmm4
        result_1 += 0x40
        float temp0_15[0x4] = _mm_mul_ps(zmm3, temp0_7)
        zmm3 = _mm_and_ps(zmm3, zmm9)
        float temp0_17[0x4] = _mm_mul_ps(zmm5, temp0_10)
        zmm4 = _mm_and_ps(zmm4, zmm9)
        float temp0_19[0x4] = _mm_mul_ps(zmm3, temp0_9)
        float temp0_20[0x4] = _mm_add_ps(temp0_14, temp0_15)
        float temp0_21[0x4] = _mm_mul_ps(zmm1, temp0_11)
        float temp0_22[0x4] = _mm_mul_ps(zmm4, temp0_12)
        float temp0_23[0x4] = _mm_add_ps(temp0_17, temp0_19)
        float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_21)
        float temp0_25[0x4] = _mm_add_ps(temp0_23, temp0_22)
        float temp0_26[0x4] = _mm_sub_ps(temp0_24, zmm2)
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_25, temp0_26, 1)))
        
        if (result.d != 0)
            *arg4 = 0
            result.b = 0
            break
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_sub_ps(zx.o(0), temp0_25), temp0_26, 1)) != 0)
            *arg4 = result.b
        
        rdx += 4
        
        if (rdx s>= *(arg1 + 0x110))
            result.b = 1
            break

return result

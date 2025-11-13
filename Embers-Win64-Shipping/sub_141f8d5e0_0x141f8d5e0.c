// 函数: sub_141f8d5e0
// 地址: 0x141f8d5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg3
float zmm2[0x4] = *(arg2 + 4)
void* result = *(arg1 + 0x100)
uint32_t zmm7[0x4] = data_143f3c560
float zmm9[0x4] = *arg4
float temp0[0x4] = _mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q)
uint32_t zmm0[0x4] = *(arg3 + 8)
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
void* result_1 = arg1 + 0x80

if (result != 0)
    result_1 = result

int32_t rdx = 0
float temp0_3[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
float temp0_4[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
zmm0 = *(arg4 + 8)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
zmm2 = *(arg4 + 4)
float temp0_6[0x4] = _mm_add_ps(temp0_2, temp0_5)
int32_t r9 = *(arg1 + 0x110)
zmm9 = _mm_and_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm9, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q), 
    zmm7)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0)
float temp0_12[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
float temp0_13[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
float temp0_15[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)

if (r9 s<= 0)
    result.b = 1
else
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    
    while (true)
        float zmm5[0x4] = *result_1
        zmm6 = *(result_1 + 0x10)
        zmm3 = *(result_1 + 0x20)
        zmm2 = *(result_1 + 0x30)
        float zmm4[0x4] = _mm_and_ps(zmm6, zmm7)
        float temp0_18[0x4] = _mm_mul_ps(zmm6, temp0_14)
        result_1 += 0x40
        float temp0_19[0x4] = _mm_mul_ps(zmm4, temp0_13)
        uint32_t temp0_20[0x4] = _mm_and_ps(zmm5, zmm7)
        float temp0_21[0x4] = _mm_mul_ps(zmm5, temp0_11)
        float zmm1[0x4] = _mm_and_ps(zmm3, zmm7)
        zmm0 = _mm_mul_ps(temp0_20, temp0_12)
        float temp0_24[0x4] = _mm_mul_ps(zmm3, temp0_16)
        float temp0_25[0x4] = _mm_add_ps(temp0_18, temp0_21)
        float temp0_26[0x4] = _mm_mul_ps(zmm1, temp0_15)
        float temp0_27[0x4] = _mm_add_ps(temp0_19, zmm0)
        float temp0_28[0x4] = _mm_add_ps(temp0_25, temp0_24)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_add_ps(temp0_27, temp0_26), 
                _mm_sub_ps(temp0_28, zmm2), 1)) != 0)
            result.b = 0
            break
        
        rdx += 4
        
        if (rdx s>= r9)
            result.b = 1
            break

return result

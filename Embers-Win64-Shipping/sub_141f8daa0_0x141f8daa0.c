// 函数: sub_141f8daa0
// 地址: 0x141f8daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg3
void* result = *(arg1 + 0x100)
void* result_1 = arg1 + 0x80

if (result != 0)
    result_1 = result

int32_t r9 = *(arg1 + 0x110)
int32_t rdx = 0
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q), 
    _mm_unpacklo_ps(*(arg2 + 4), 0)[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x55)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xaa)

if (r9 s> 0)
    do
        float zmm0[0x4] = *(result_1 + 0x30)
        float zmm2[0x4] = *result_1
        float zmm3[0x4] = *(result_1 + 0x10)
        float zmm1[0x4] = *(result_1 + 0x20)
        result_1 += 0x40
        float temp0_7[0x4] = _mm_mul_ps(zmm3, temp0_5)
        float temp0_8[0x4] = _mm_mul_ps(zmm2, temp0_4)
        float temp0_9[0x4] = _mm_mul_ps(zmm1, temp0_6)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_3, 
                _mm_sub_ps(_mm_add_ps(_mm_add_ps(temp0_7, temp0_8), temp0_9), zmm0), 1)) != 0)
            result.b = 0
            return result
        
        rdx += 4
    while (rdx s< r9)

result.b = 1
return result

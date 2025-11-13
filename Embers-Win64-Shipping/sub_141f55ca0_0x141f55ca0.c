// 函数: sub_141f55ca0
// 地址: 0x141f55ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm1[0x4] = *(arg4 + 4)
uint32_t temp0[0x4] = _mm_and_ps(*arg4, 0x7fffffff)
uint32_t zmm4[0x4] = *(arg4 + 8)
uint32_t temp0_1[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
temp0[0] = temp0[0] f- temp0_1[0]
uint32_t temp0_2[0x4] = _mm_and_ps(zmm4, 0x7fffffff)
uint32_t result

if (_mm_and_ps(temp0, 0x7fffffff)[0] f> 9.99999975e-05f)
label_141f55cf1:
    zmm4 = *arg2
    uint32_t zmm2[0x4] = *arg3
    uint32_t zmm5[0x4] = data_143f3b860
    zmm1 = _mm_sub_ps(zmm4, zmm2)
    float temp0_7[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_7, _mm_and_ps(zmm1, zmm5), 1)) != 0
            && _mm_movemask_ps(_mm_cmpeq_ps(temp0_7, _mm_and_ps(_mm_add_ps(zmm2, zmm4), zmm5), 1))
            != 0)
        result.b = 0
        return result
else
    temp0[0] = temp0[0] f- temp0_2[0]
    
    if (_mm_and_ps(temp0, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141f55cf1
    
    temp0_1[0] = temp0_1[0] f- temp0_2[0]
    
    if (not(_mm_and_ps(temp0_1, 0x7fffffff)[0] f<= 9.99999975e-05f))
        goto label_141f55cf1

result.b = 1
return result

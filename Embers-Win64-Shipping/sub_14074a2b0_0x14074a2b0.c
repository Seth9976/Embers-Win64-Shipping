// 函数: sub_14074a2b0
// 地址: 0x14074a2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg2
float zmm2[0x4] = *arg3
uint32_t zmm5[0x4] = data_143cdfe60
float temp0[0x4] = _mm_sub_ps(zmm4, zmm2)
float temp0_1[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
uint32_t result

if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(temp0, zmm5), 1)) != 0
        && _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_add_ps(zmm2, zmm4), zmm5), 1))
        != 0)
    result.b = 0
    return result

result.b = 1
return result

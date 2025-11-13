// 函数: sub_141f40e50
// 地址: 0x141f40e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
uint32_t result

if (rdx != 0)
    float temp0_1[0x4] = __subps_xmmps_memps(*(arg1 + 0x30), *(rdx + 0x1d0))
    uint32_t zmm4[0x4] = data_143f3b3e0
    float temp0_2[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(temp0_1, zmm4), 1)) != 0)
        result.b = 1
        return result
    
    uint32_t zmm3[0x4] = *(arg1 + 0x20)
    float zmm5[0x4] = *(rdx + 0x1c0)
    uint32_t temp0_9 =
        _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(_mm_sub_ps(zmm3, zmm5), zmm4), 1))
    uint32_t temp0_13
    
    if (temp0_9 != 0)
        temp0_13 =
            _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(_mm_add_ps(zmm3, zmm5), zmm4), 1))
    
    if (temp0_9 != 0 && temp0_13 != 0)
        result.b = 1
        return result
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
            _mm_and_ps(__subps_xmmps_memps(*(arg1 + 0x40), *(rdx + 0x1e0)), zmm4), 1)) != 0)
        result.b = 1
        return result

result.b = 0
return result

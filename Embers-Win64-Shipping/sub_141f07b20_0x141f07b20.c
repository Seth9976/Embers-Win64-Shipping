// 函数: sub_141f07b20
// 地址: 0x141f07b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f31af0(arg1, arg2, arg3)
arg2[0x80] = *(arg1 + 0xe8)
uint32_t result = sub_141ee8490(arg2)
int32_t rcx_1 = *(arg1 + 0xe0)

if (rcx_1 != 0xffffffff)
    float temp0_1[0x4] = __subps_xmmps_memps(*(arg1 + 0xc0), *(arg2 + 0x1d0))
    uint32_t zmm4_1[0x4] = data_143f3ade0
    float temp0_2[0x4] = _mm_shuffle_ps(0x3a83126f, 0x3a83126f, 0)
    result = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(temp0_1, zmm4_1), 1))
    
    if (result == 0)
        float zmm5_1[0x4] = *(arg1 + 0xb0)
        uint32_t zmm3_1[0x4] = *(arg2 + 0x1c0)
        uint32_t temp0_9 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
            _mm_and_ps(_mm_sub_ps(zmm5_1, zmm3_1), zmm4_1), 1))
        
        if (temp0_9 != 0)
            result = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                _mm_and_ps(_mm_add_ps(zmm3_1, zmm5_1), zmm4_1), 1))
        
        if (temp0_9 == 0 || result == 0)
            result = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                _mm_and_ps(__subps_xmmps_memps(*(arg1 + 0xd0), *(arg2 + 0x1e0)), zmm4_1), 1))
            
            if (result == 0)
                *(arg2 + 0x23c) = rcx_1

if ((arg2[0x11].b & 1) != 0 && (*(arg1 + 0xe0) != 0xffffffff || *(arg1 + 0x20) s> 0))
    return sub_141ee8490(arg2)

return result

// 函数: sub_141f07a10
// 地址: 0x141f07a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f31af0(arg1, arg2, arg3)
float temp0[0x4] = __subps_xmmps_memps(*(arg1 + 0xc0), *(arg2 + 0x1d0))
uint32_t zmm4[0x4] = data_143f3ade0
float temp0_1[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
uint32_t result = _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(temp0, zmm4), 1))

if (result == 0)
    uint32_t zmm2_1[0x4] = *(arg1 + 0xb0)
    float zmm5_1[0x4] = *(arg2 + 0x1c0)
    uint32_t temp0_8 =
        _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_sub_ps(zmm2_1, zmm5_1), zmm4), 1))
    
    if (temp0_8 != 0)
        result =
            _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_add_ps(zmm2_1, zmm5_1), zmm4), 1))
    
    if (temp0_8 == 0 || result == 0)
        result = _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, 
            _mm_and_ps(__subps_xmmps_memps(*(arg1 + 0xd0), *(arg2 + 0x1e0)), zmm4), 1))
        
        if (result == 0)
            int64_t var_18
            
            if (*(arg2 + 0x14f) == 2 || arg2[0x14] == 0)
                var_18 = 0
                int64_t var_10_1 = 0
            else
                var_18.o = *(arg1 + 0xe0)
            
            *(arg2 + 0x1f0) = var_18.o
            *(arg2 + 0x234) = *(arg1 + 0xf0)
            return sub_141ee8490(arg2)

return result

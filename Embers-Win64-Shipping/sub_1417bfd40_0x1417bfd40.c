// 函数: sub_1417bfd40
// 地址: 0x1417bfd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg2 + 0x10))(arg2)
int64_t r8 = *arg1
uint64_t result

if (rax_1 == (*(r8 + 0x10))(arg1, arg3, r8).d)
    result = arg2[1]
    
    if (arg1[1].d == result.d && *(arg1 + 0xc) == (result u>> 0x20).d
            && not(arg2[2].d[0] f!= arg1[2].d) && not((*(arg2 + 0x14))[0] f!= *(arg1 + 0x14)))
        float temp0_1[0x4] = __subps_xmmps_memps(*(arg1 + 0x30), *(arg2 + 0x30))
        uint32_t zmm4_1[0x4] = data_143ef8480
        float temp0_2[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(temp0_1, zmm4_1), 1)))
        
        if (result.d == 0)
            uint32_t zmm3[0x4] = *(arg1 + 0x20)
            float zmm5_1[0x4] = *(arg2 + 0x20)
            uint32_t temp0_9 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                _mm_and_ps(_mm_sub_ps(zmm3, zmm5_1), zmm4_1), 1))
            
            if (temp0_9 != 0)
                result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                    _mm_and_ps(_mm_add_ps(zmm3, zmm5_1), zmm4_1), 1)))
            
            if ((temp0_9 == 0 || result.d == 0) && zx.d(_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                    _mm_and_ps(__subps_xmmps_memps(*(arg1 + 0x40), *(arg2 + 0x40)), zmm4_1), 1))) == 0)
                result.b = 1
                return result

result.b = 0
return result

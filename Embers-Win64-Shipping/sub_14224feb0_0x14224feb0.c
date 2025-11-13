// 函数: sub_14224feb0
// 地址: 0x14224feb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg1
int32_t arg_8 = 0x7f800000
uint32_t result

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm2, data_142d3f760), 
        data_142d3f760, 0)) == 0)
    arg_8 = 0x7f800000
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(arg1[1], data_142d3f760), 
            data_142d3f760, 0)) == 0)
        arg_8 = 0x7f800000
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(arg1[2], data_142d3f760), data_142d3f760, 0)) == 0)
            uint32_t zmm1[0x4] = data_143f515b0
            float temp0_9[0x4] = _mm_mul_ps(zmm2, zmm2)
            float temp0_11[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_9, temp0_9, 0x4e))
            zmm1 = _mm_sub_ps(zmm1, _mm_add_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x39), temp0_11))
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(data_143f51a20, 
                    __andps_xmmxud_memxud(zmm1, data_143f51a30), 1)) == 0)
                result.b = 1
                return result

result.b = 0
return result

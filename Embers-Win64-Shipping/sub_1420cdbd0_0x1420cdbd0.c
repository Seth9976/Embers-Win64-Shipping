// 函数: sub_1420cdbd0
// 地址: 0x1420cdbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm5[0x4] = data_143f47e10
float arg_20 = arg4[0]
arg4 = *arg2
float zmm4[0x4] = arg_20
float zmm6[0x4] = *arg1
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(temp0, _mm_and_ps(_mm_sub_ps(zmm6, arg4), zmm5), 1))
uint32_t temp0_8

if (temp0_4 != 0)
    temp0_8 = _mm_movemask_ps(_mm_cmpeq_ps(temp0, _mm_and_ps(_mm_add_ps(arg4, zmm6), zmm5), 1))

uint32_t result

if (temp0_4 == 0 || temp0_8 == 0)
    float temp0_9[0x4] = __subps_xmmps_memps(arg1[1], arg2[1])
    float zmm0[0x4] = arg3
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), _mm_and_ps(temp0_9, zmm5), 1))
            == 0)
        float temp0_14[0x4] = __subps_xmmps_memps(arg1[2], arg2[2])
        zmm0 = arg5[0]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), _mm_and_ps(temp0_14, zmm5), 
                1)) == 0)
            result.b = 1
            return result

result.b = 0
return result

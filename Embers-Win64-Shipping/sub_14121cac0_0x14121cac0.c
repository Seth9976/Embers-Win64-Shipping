// 函数: sub_14121cac0
// 地址: 0x14121cac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if ((*(arg1 + 0x28) & 3) != 0)
    float zmm5[0x4] = *arg1
    arg6 = *(arg2 + 4)
    float temp0_1[0x4] = _mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q)
    float zmm0[0x4] = *(arg2 + 0x18)
    arg6 = _mm_unpacklo_ps(arg6, 0)
    float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), _mm_shuffle_ps(zmm0, zmm0, 0))
    arg4 = _mm_unpacklo_ps(temp0_1, arg6[0].q)
    float temp0_7[0x4] = _mm_sub_ps(zmm5, arg4)
    float temp0_8[0x4] = _mm_mul_ps(temp0_5, temp0_5)
    float temp0_9[0x4] = _mm_mul_ps(temp0_7, temp0_7)
    arg5 = _mm_add_ps(
        _mm_add_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xaa), _mm_shuffle_ps(temp0_9, temp0_9, 0x55)), 
        _mm_shuffle_ps(temp0_9, temp0_9, 0))
    result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_8, arg5, 1)))

if ((*(arg1 + 0x28) & 3) == 0 || result.d == 0)
    int64_t* rcx = *(arg1[2].q + 0x20)
    
    if ((*(*rcx + 8))(rcx, arg5, arg6, arg4).b != 0)
        void* rcx_1 = *(arg1[2].q + 0x20)
        
        if (((*(rcx_1 + 0x139) & 4) == 0 || (*(arg3 + 0x3a) & 0x10) != 0)
                && (*(arg3 + 0x3f) & *(rcx_1 + 0x13d)) != 0)
            result.b = 1
            return result

result.b = 0
return result

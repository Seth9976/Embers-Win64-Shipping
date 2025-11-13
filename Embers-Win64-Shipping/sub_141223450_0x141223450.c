// 函数: sub_141223450
// 地址: 0x141223450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg3[1]
uint64_t result

if ((*(arg2 + 0x28) & 3) != 0)
    float zmm5[0x4] = *arg2
    arg5 = *(arg3 + 0x14)
    float temp0_1[0x4] = _mm_unpacklo_ps(arg3[2].d, arg3[3].d[0].q)
    float zmm0[0x4] = arg3[5].d
    arg5 = _mm_unpacklo_ps(arg5, 0)
    float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), _mm_shuffle_ps(zmm0, zmm0, 0))
    arg4 = _mm_unpacklo_ps(temp0_1, arg5[0].q)
    float temp0_7[0x4] = _mm_sub_ps(zmm5, arg4)
    float temp0_8[0x4] = _mm_mul_ps(temp0_5, temp0_5)
    float temp0_9[0x4] = _mm_mul_ps(temp0_7, temp0_7)
    result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_8, 
        _mm_add_ps(
            _mm_add_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xaa), 
                _mm_shuffle_ps(temp0_9, temp0_9, 0x55)), 
            _mm_shuffle_ps(temp0_9, temp0_9, 0)), 
        1)))

if ((*(arg2 + 0x28) & 3) == 0 || result.d == 0)
    int64_t* rcx = *(arg2[2].q + 0x20)
    result = (*(*rcx + 8))(rcx, &arg3[2], arg5, arg4)
    
    if (result.b != 0)
        result = arg2[2].q
        void* rcx_1 = *(result + 0x20)
        
        if ((*(rcx_1 + 0x139) & 4) == 0 || (*(rsi + 0x3a) & 0x10) != 0)
            result = zx.q(*(rcx_1 + 0x13d))
            
            if ((*(rsi + 0x3f) & result.b) != 0)
                return sub_14141ae40(arg1, *arg3)

return result

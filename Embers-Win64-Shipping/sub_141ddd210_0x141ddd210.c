// 函数: sub_141ddd210
// 地址: 0x141ddd210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg2 + 0x10)
float zmm6[0x4] = zx.o(0)

if (not(zmm0[0] < 0f))
    zmm6 = __minss_xmmss_memss(zmm0[0], 0x3f800000)

uint64_t result = zx.q(arg4[1].d)

if (result.d != 0)
    float (* rdx)[0x4] = nullptr
    void* r8 = nullptr
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int64_t rcx = sx.q(*(r8 + *arg1))
        float arg_10
        
        if (rcx.d s< 0 || rcx.d s>= *(arg2 + 0x38))
            arg_10 = zmm6[0]
        else
            arg_10 = (*(*(arg2 + 0x30) + (rcx << 2)))[0]
        
        int64_t rcx_1 = *arg3
        result = *arg4
        r8 += 4
        float zmm5[0x4] = arg_10
        float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float zmm1[0x4] = *(rdx + rcx_1)
        float temp0_3[0x4] = _mm_mul_ps(*(rdx + result), temp0_2)
        float temp0_4[0x4] = _mm_mul_ps(zmm1, temp0_3)
        float temp0_5[0x4] = _mm_sub_ps(zx.o(0), temp0_3)
        float temp0_7[0x4] = _mm_add_ps(temp0_4, _mm_shuffle_ps(temp0_4, temp0_4, 0x4e))
        *(rdx + rcx_1) = __addps_xmmps_memps(
            _mm_and_ps(
                _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x39), temp0_7), 
                    2), 
                temp0_5 ^ temp0_3) ^ temp0_5, 
            *(rdx + rcx_1))
        *(rdx + rcx_1 + 0x10) =
            __addps_xmmps_memps(_mm_mul_ps(*(rdx + result + 0x10), temp0_2), *(rdx + rcx_1 + 0x10))
        *(rdx + rcx_1 + 0x20) =
            __addps_xmmps_memps(_mm_mul_ps(*(rdx + result + 0x20), temp0_2), *(rdx + rcx_1 + 0x20))
        rdx = &rdx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

// 函数: sub_1400edf10
// 地址: 0x1400edf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x8] = *arg5
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))

if (result.d != 0xff)
    if (arg4 s> 0)
        zmm0[0].o = _mm_permute_ps(arg3, 0)
        uint64_t i_3 = zx.q(arg4)
        result = 0x20
        uint64_t i
        
        do
            float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x20))
            float temp0_7[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x10))
            float temp0_8[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result))
            *(arg2 + result - 0x20) = temp0_6
            *(arg2 + result - 0x10) = temp0_7
            *(arg2 + result) = temp0_8
            result += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (arg4 s> 0)
    zmm0[0].o = _mm_permute_ps(arg3, 0)
    uint64_t i_2 = zx.q(arg4)
    result = 0x20
    uint64_t i_1
    
    do
        float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x20))
        float temp0_3[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x10))
        float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result))
        *(arg2 + result - 0x20) = temp0_2
        *(arg2 + result - 0x10) = temp0_3
        *(arg2 + result) = temp0_4
        result += 0x30
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

_mm256_zeroupper()
return result

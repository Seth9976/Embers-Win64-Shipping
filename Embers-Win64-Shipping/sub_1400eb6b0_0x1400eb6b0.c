// 函数: sub_1400eb6b0
// 地址: 0x1400eb6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x8] = *arg5
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))
int32_t r8_2
int64_t r10_1

if (result.d != 0xff)
    if (arg4 s> 0)
        zmm0[0].o = _mm_broadcastss_ps(arg3)
        
        if (arg4 != 1)
            r8_2 = arg4 & 1
            result = 0x50
            r10_1 = 0
            
            do
                float temp0_9[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x50))
                float temp0_10[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x40))
                float temp0_11[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x30))
                *(arg2 + result - 0x50) = temp0_9
                *(arg2 + result - 0x40) = temp0_10
                *(arg2 + result - 0x30) = temp0_11
                float temp0_12[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x20))
                float temp0_13[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x10))
                float temp0_14[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result))
                *(arg2 + result - 0x20) = temp0_12
                *(arg2 + result - 0x10) = temp0_13
                *(arg2 + result) = temp0_14
                r10_1 += 2
                result += 0x60
            while (arg4 - r8_2 != r10_1.d)
            
        label_1400eb7d3:
            
            if (r8_2 != 0)
                goto label_1400eb7d8
        else
        label_1400eb769:
            r10_1 = 0
        label_1400eb7d8:
            result = r10_1 * 0x30
            float temp0_15[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result))
            float temp0_16[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result + 0x10))
            zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result + 0x20))
            *(arg2 + result) = temp0_15
            *(arg2 + result + 0x10) = temp0_16
            *(arg2 + result + 0x20) = zmm0[0].o
else if (arg4 s> 0)
    zmm0[0].o = _mm_broadcastss_ps(arg3)
    
    if (arg4 == 1)
        goto label_1400eb769
    
    r8_2 = arg4 & 1
    result = 0x50
    r10_1 = 0
    
    do
        float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x50))
        float temp0_3[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x40))
        float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x30))
        *(arg2 + result - 0x50) = temp0_2
        *(arg2 + result - 0x40) = temp0_3
        *(arg2 + result - 0x30) = temp0_4
        float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x20))
        float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result - 0x10))
        float temp0_7[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg1 + result))
        *(arg2 + result - 0x20) = temp0_5
        *(arg2 + result - 0x10) = temp0_6
        *(arg2 + result) = temp0_7
        r10_1 += 2
        result += 0x60
    while (arg4 - r8_2 != r10_1.d)
    
    goto label_1400eb7d3
_mm256_zeroupper()
return result

// 函数: sub_1400ee150
// 地址: 0x1400ee150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_18[0x4] = zmm7
float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm0[0x8] = *arg4
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (result.d != 0xff)
    if (arg3 s>= 2)
        float (* r9_1)[0x4] = arg1 + 0x30
        int64_t i = 1
        zmm0[0].o = data_142d3f7c0
        zmm1 = data_142d3f7d0
        zmm2 = data_142d3f7b0
        
        do
            zmm3 = *r9_1
            result = sx.q(*(arg2 + (i << 2))) * 0x30
            zmm4 = *(arg1 + result)
            float temp0_19[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3, _mm_permute_ps(zmm4, 0xff))
            float temp0_20[0x4] = _mm_permute_ps(zmm4, 0)
            float temp0_24[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_19, 
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0x1b), temp0_20), zmm0[0].o))
            float temp0_25[0x4] = _mm_permute_ps(zmm4, 0x55)
            float temp0_29[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm3, 1), temp0_25), zmm1), 
                temp0_24)
            float temp0_30[0x4] = _mm_permute_ps(zmm4, 0xaa)
            *r9_1 = __vaddps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0xb1), temp0_30), zmm2), 
                temp0_29)
            i += 1
            r9_1 = &r9_1[3]
        while (zx.q(arg3) != i)
else if (arg3 s>= 2)
    float (* r9)[0x4] = arg1 + 0x30
    int64_t i_1 = 1
    zmm0[0].o = data_142d3f7c0
    zmm1 = data_142d3f7d0
    zmm2 = data_142d3f7b0
    
    do
        zmm3 = *r9
        result = sx.q(*(arg2 + (i_1 << 2))) * 0x30
        zmm4 = *(arg1 + result)
        float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3, _mm_permute_ps(zmm4, 0xff))
        float temp0_3[0x4] = _mm_permute_ps(zmm4, 0)
        float temp0_7[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_2, 
            __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0x1b), temp0_3), zmm0[0].o))
        float temp0_8[0x4] = _mm_permute_ps(zmm4, 0x55)
        float temp0_12[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm3, 1), temp0_8), zmm1), 
            temp0_7)
        float temp0_13[0x4] = _mm_permute_ps(zmm4, 0xaa)
        *r9 = __vaddps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0xb1), temp0_13), zmm2), 
            temp0_12)
        i_1 += 1
        r9 = &r9[3]
    while (zx.q(arg3) != i_1)
_mm256_zeroupper()
return result

// 函数: sub_1400ebb50
// 地址: 0x1400ebb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4]
float var_18[0x4] = zmm8
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm0[0x8] = *arg4
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))
int32_t i = arg3 - 1
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (result.d != 0xff)
    if (i s> 0)
        int64_t i_2 = sx.q(i)
        int32_t* r10_2 = arg2 + (i_2 << 2)
        float (* rdx_5)[0x4] = i_2 * 0x30 + arg1
        zmm8 = data_142d3f690
        zmm1 = data_142d3f7c0
        zmm2 = data_142d3f7d0
        zmm3 = data_142d3f7b0
        
        do
            zmm4 = *rdx_5
            result = sx.q(*r10_2) * 0x30
            float temp0_16[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm8, *(arg1 + result))
            float temp0_17[0x4] = _mm_permute_ps(temp0_16, 0xff)
            float temp0_18[0x4] = _mm_broadcastss_ps(temp0_16)
            zmm0[0].o = _mm_permute_ps(zmm4, 0x1b)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_18)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1)
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm4, temp0_17)
            float temp0_23[0x4] = _mm_permute_ps(temp0_16, 0x55)
            float temp0_26[0x4] = _mm_fmadd_ps(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), temp0_23), zmm0[0].o, zmm2)
            zmm0[0].o = _mm_permute_ps(temp0_16, 0xaa)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), zmm0[0].o)
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, temp0_26, zmm3)
            *rdx_5 = zmm0[0].o
            i -= 1
            r10_2 = &r10_2[-1]
            rdx_5 = &rdx_5[-3]
        while (i s> 0)
else if (i s> 0)
    int64_t i_1 = sx.q(i)
    int32_t* r10_1 = arg2 + (i_1 << 2)
    int128_t* rdx_2 = i_1 * 0x30 + arg1
    zmm8 = data_142d3f690
    zmm1 = data_142d3f7c0
    zmm2 = data_142d3f7d0
    zmm3 = data_142d3f7b0
    
    do
        zmm4 = *rdx_2
        result = sx.q(*r10_1) * 0x30
        float temp0_1[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm8, *(arg1 + result))
        float temp0_2[0x4] = _mm_permute_ps(temp0_1, 0xff)
        float temp0_3[0x4] = _mm_broadcastss_ps(temp0_1)
        zmm0[0].o = _mm_permute_ps(zmm4, 0x1b)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_3)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1)
        zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm4, temp0_2)
        float temp0_8[0x4] = _mm_permute_ps(temp0_1, 0x55)
        float temp0_11[0x4] = _mm_fmadd_ps(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), temp0_8), zmm0[0].o, zmm2)
        zmm0[0].o = _mm_permute_ps(temp0_1, 0xaa)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), zmm0[0].o)
        zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, temp0_11, zmm3)
        *rdx_2 = zmm0[0].o
        i -= 1
        r10_1 = &r10_1[-1]
        rdx_2 = &rdx_2[-3]
    while (i s> 0)
_mm256_zeroupper()
return result

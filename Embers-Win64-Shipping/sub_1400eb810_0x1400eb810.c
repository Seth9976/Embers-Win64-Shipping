// 函数: sub_1400eb810
// 地址: 0x1400eb810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4]
float var_18[0x4] = zmm8
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm0[0x8] = *arg5
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (result.d != 0xff)
    if (arg4 s> 0)
        float temp0_20[0x4] = _mm_broadcastss_ps(arg3)
        float temp0_21[0x4] = _mm256_broadcastss_ps(arg3)
        uint64_t i_3 = zx.q(arg4)
        result = 0x20
        arg3 = __vxorps_xmmdq_xmmdq_xmmdq(arg3, arg3)
        uint64_t i
        
        do
            zmm3 = *(arg1 + result - 0x10)
            zmm4 = *(arg1 + result)
            zmm5 = *(arg2 + result - 0x20)
            float temp0_23[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_20, *(arg1 + result - 0x20))
            float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_23, zmm5)
            zmm0[0].o = _mm_permute_pd(temp0_24, 1)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_24, zmm0[0].o)
            float temp0_27[0x4] = _mm_permute_ps(zmm0[0].o, 0x39)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_27)
            zmm0[0].o = _mm_cmp_ps(arg3, zmm0[0].o, 2)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
            zmm0[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(
                __vsubps_xmmdq_xmmdq_xmmdq(arg3, temp0_23), temp0_23, zmm0[0].o)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
            float temp0_37[0x4] =
                __vfmadd213ps_xmmdq_xmmdq_memdq(zmm3, temp0_21, *(arg2 + result - 0x10))
            float temp0_38[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm4, temp0_21, *(arg2 + result))
            *(arg2 + result - 0x20) = zmm0[0].o
            *(arg2 + result - 0x10) = temp0_37
            *(arg2 + result) = temp0_38
            result += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (arg4 s> 0)
    float temp0_1[0x4] = _mm_broadcastss_ps(arg3)
    float temp0_2[0x4] = _mm256_broadcastss_ps(arg3)
    uint64_t i_2 = zx.q(arg4)
    result = 0x20
    arg3 = __vxorps_xmmdq_xmmdq_xmmdq(arg3, arg3)
    uint64_t i_1
    
    do
        zmm3 = *(arg1 + result - 0x10)
        zmm4 = *(arg1 + result)
        zmm5 = *(arg2 + result - 0x20)
        float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + result - 0x20))
        float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_4, zmm5)
        zmm0[0].o = _mm_permute_pd(temp0_5, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_5, zmm0[0].o)
        float temp0_8[0x4] = _mm_permute_ps(zmm0[0].o, 0x39)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_8)
        zmm0[0].o = _mm_cmp_ps(arg3, zmm0[0].o, 2)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm0 = _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
        zmm0[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(__vsubps_xmmdq_xmmdq_xmmdq(arg3, temp0_4), 
            temp0_4, zmm0[0].o)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
        float temp0_18[0x4] =
            __vfmadd213ps_xmmdq_xmmdq_memdq(zmm3, temp0_2, *(arg2 + result - 0x10))
        float temp0_19[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm4, temp0_2, *(arg2 + result))
        *(arg2 + result - 0x20) = zmm0[0].o
        *(arg2 + result - 0x10) = temp0_18
        *(arg2 + result) = temp0_19
        result += 0x30
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
_mm256_zeroupper()
return result

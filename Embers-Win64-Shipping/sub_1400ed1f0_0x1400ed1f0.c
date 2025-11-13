// 函数: sub_1400ed1f0
// 地址: 0x1400ed1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4]
float var_18[0x4] = zmm8
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm6[0x4]
float var_38[0x4] = zmm6

if (arg4 s> 0)
    float temp0_1[0x4] = _mm_broadcastss_ps(arg3)
    float zmm1[0x4] = _mm256_broadcastss_ps(arg3)
    uint64_t i_1 = zx.q(arg4)
    int64_t rax = 0x20
    arg3 = __vxorps_xmmdq_xmmdq_xmmdq(arg3, arg3)
    uint64_t i
    
    do
        float zmm3[0x4] = *(arg1 + rax - 0x10)
        float zmm4[0x4] = *(arg1 + rax)
        float zmm5[0x4] = *(arg2 + rax - 0x20)
        float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax - 0x20))
        float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_4, zmm5)
        uint32_t zmm0[0x8]
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
        float temp0_18[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm3, zmm1, *(arg2 + rax - 0x10))
        float temp0_19[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm4, zmm1, *(arg2 + rax))
        *(arg2 + rax - 0x20) = zmm0[0].o
        *(arg2 + rax - 0x10) = temp0_18
        *(arg2 + rax) = temp0_19
        rax += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

_mm256_zeroupper()

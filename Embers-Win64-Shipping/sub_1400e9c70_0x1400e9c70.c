// 函数: sub_1400e9c70
// 地址: 0x1400e9c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s> 0)
    float zmm17[0x4] = _mm_mask_broadcastss_ps(arg5, arg3)
    float zmm1[0x4] = _mm256_broadcastss_ps(arg3).o
    uint64_t i_1 = zx.q(arg4)
    int64_t rax = 0x20
    arg6 = _mm_mask_xor_ps(arg5, arg6, arg6)
    char i
    
    do
        float zmm3[0x4] = *(arg1 + rax - 0x10)
        float zmm4[0x4] = *(arg1 + rax)
        float zmm5[0x4] = *(arg2 + rax - 0x20)
        uint32_t zmm16[0x8]
        zmm16[0].o =
            __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm17, *(arg1 + rax - 0x20))
        uint32_t zmm0[0x8]
        zmm0[0].o = _mm_mask_mul_ps(arg5, zmm16[0].o, zmm5)
        arg3 = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
        arg3 = _mm_permute_ps(zmm0[0].o, 0x39)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
        int64_t k1_1 = _mm_cmp_ps_mask(arg5, arg6, zmm0[0].o, 2)
        zmm0[0].o = _mm_mask_sub_ps(arg5, arg6, zmm16[0].o)
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(_mm256_mask_xor_ps(k1_1, zmm0, zmm16).o, zmm0[0].o)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
        zmm3 = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm3, zmm1, *(arg2 + rax - 0x10))
        zmm4 = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm4, zmm1, *(arg2 + rax))
        *(arg2 + rax - 0x20) = zmm0[0].o
        *(arg2 + rax - 0x10) = zmm3
        *(arg2 + rax) = zmm4
        rax += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

_mm256_zeroupper()

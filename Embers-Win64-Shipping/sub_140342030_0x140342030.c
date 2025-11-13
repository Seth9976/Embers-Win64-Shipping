// 函数: sub_140342030
// 地址: 0x140342030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s> 0)
    float zmm0[0x8]
    zmm0[0].o = *arg6
    float zmm1[0x8]
    zmm1[0].o = data_143443240
    int64_t k0 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm1[0].o)
    _kortest_mask8_u8(k0, k0)
    uint64_t rax
    
    if (arg4 == 0)
        int64_t i = 0
        int64_t k1_2 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0, zmm0[0].o, data_142fc92e0)
        zmm0 = data_143443260
        
        do
            rax = zx.q(*(arg3 + (i << 1))) << 6
            *arg1 = _mm256_mask_storeu_ps(k1_2, 
                _mm256_mask_permutex2var_ps(_mm256_mask_loadu_ps(k1_2, *(arg2 + rax)), k0, zmm0, 
                    _mm256_mask_loadu_ps(k1_2, *(arg2 + rax + 0x20))))
            i += 1
            arg1 = &arg1[0x18]
        while (zx.q(arg4) != i)
    else
        zmm1[0].o &= zmm0[0].o
        int64_t i_1 = 0
        float zmm2[0x8]
        zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
        int64_t k1_1 = _mm_mask_test_epi16_mask(k0, zmm1[0].o, zmm2[0].o)
        int64_t k2_1 = _mm_mask_test_epi16_mask(k0, zmm0[0].o, zmm2[0].o)
        zmm0 = data_143443260
        zmm1 = data_143443280
        
        do
            rax = zx.q(*(arg3 + (i_1 << 1))) << 6
            zmm2 = _mm256_mask_loadu_ps(k2_1, *(arg2 + rax))
            float zmm3[0x8] = _mm256_mask_loadu_ps(k2_1, *(arg2 + rax + 0x20))
            *arg1 = _mm256_mask_storeu_ps(k2_1, _mm256_mask_permutex2var_ps(zmm2, k0, zmm0, zmm3))
            *(arg1 + 0x20) =
                _mm256_mask_storeu_ps(k1_1, _mm256_mask_permutex2var_ps(zmm2, k0, zmm1, zmm3))
            i_1 += 1
            arg1 = &arg1[0x18]
        while (zx.q(arg4) != i_1)

_mm256_zeroupper()

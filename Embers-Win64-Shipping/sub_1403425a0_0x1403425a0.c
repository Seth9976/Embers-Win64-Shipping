// 函数: sub_1403425a0
// 地址: 0x1403425a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg5[0].o

if (arg4 s> 0)
    void* rcx = arg1 + 0x20
    int64_t i = 0
    int32_t zmm0[0x8] = data_143443320
    
    do
        uint64_t rax = zx.q(*(arg3 + (i << 1))) << 6
        float zmm1[0x8]
        zmm1[0].o = *(arg2 + rax)
        double zmm2[0x4]
        zmm2[0].o = *(arg2 + rax + 0x20)
        zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm1, *(arg2 + rax + 0x10), 1)
        double temp0_2[0x4] = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm2, *(arg2 + rax + 0x30), 1)
        double temp0_3[0x4] = _mm256_movedup_pd(temp0_2)
        double temp0_4[0x4] = _mm256_permute2f128_ps(temp0_2, zmm0, 1)
        double zmm3[0x4] = _mm256_blend_ps(temp0_3, _mm256_permute_ps(temp0_4, 0x14), 0x48)
        float zmm5[0x8] = _mm256_permute2f128_ps(zmm1, zmm0, 1)
        arg5 = _mm256_blend_ps(zmm1, _mm256_permute_ps(zmm5, 0xe1), 0x12)
        zmm3 = _mm256_blend_ps(arg5, zmm3, 0xcc)
        *(rcx - 0x10) = __vextractf128_memdq_ymmdq_immb(zmm3[0].o, 1)
        *(rcx - 0x20) = zmm3[0].o
        zmm2 = _mm256_blend_ps(temp0_2, _mm256_permute_ps(temp0_4, 0xb4), 0x48)
        zmm1 = _mm256_blend_ps(
            _mm256_blend_ps(_mm256_permute_pd(zmm1, 5), _mm256_permute_ps(zmm5, 0xeb), 0x12), zmm2, 
            0xcc)
        *rcx = _mm256_maskstore_ps(zmm0, zmm1)
        i += 1
        rcx += 0x30
    while (zx.q(arg4) != i)

arg5[0].o = var_18
_mm256_zeroupper()

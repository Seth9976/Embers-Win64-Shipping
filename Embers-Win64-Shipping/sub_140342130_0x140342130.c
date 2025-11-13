// 函数: sub_140342130
// 地址: 0x140342130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s> 0)
    void* rcx = arg1 + 0x20
    int64_t i = 0
    float zmm0[0x8] = data_143443260
    float zmm1[0x8] = data_143443280
    uint32_t r10
    r10.b = 0xf
    
    do
        uint64_t rax = zx.q(*(arg3 + (i << 1))) << 6
        float zmm2[0x8] = *(arg2 + rax)
        float zmm3[0x8] = *(arg2 + rax + 0x20)
        *(rcx - 0x20) = _mm256_mask_permutex2var_ps(zmm2, arg5, zmm0, zmm3)
        float temp0_2[0x8] = _mm256_mask_permutex2var_ps(zmm2, arg5, zmm1, zmm3)
        *rcx = _mm256_mask_storeu_ps(_cvtu32_mask32(r10), temp0_2)
        i += 1
        rcx += 0x30
    while (zx.q(arg4) != i)

_mm256_zeroupper()

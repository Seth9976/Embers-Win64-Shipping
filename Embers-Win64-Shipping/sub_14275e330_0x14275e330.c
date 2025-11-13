// 函数: sub_14275e330
// 地址: 0x14275e330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg1 + 0x10)
float zmm6[0x4]
float var_18[0x4] = zmm6
uint32_t result_1 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t result = result_1
float var_28[0x4]

if (result_1.b == 0)
    uint32_t rdi_4 = zx.d(*(rax + 1))
    int32_t r8_2 = *(arg1 + 0x80)
    *(arg1 + 0x10) = &rax[3]
    uint64_t rsi_3 = zx.q(zx.d(*(rax + 3)) * r8_2)
    *(arg1 + 0x10) = &rax[5]
    result = *(arg1 + 0x44)
    uint32_t (* rsi_4)[0x4] = rsi_3 + *(arg1 + 0x70)
    float (* rdi_6)[0x4] = zx.q(rdi_4 * r8_2) + *(arg1 + 0x70)
    
    if (result s> 0)
        uint64_t rbp_1 = zx.q(result)
        uint64_t i
        
        do
            uint32_t (* rbx_2)[0x4] = rsi_4
            var_28 = *rdi_6
            rdi_6 = &rdi_6[1]
            rsi_4 = &rsi_4[1]
            uint32_t zmm0_2[0x4]
            zmm0_2, zmm6 = sub_141c46b90(&var_28)
            float zmm2_2[0x4] = data_143f87690
            *rbx_2 = _mm_and_ps(zmm0_2 ^ zmm2_2, _mm_cmpeq_ps(zmm2_2, zmm6, 1)) ^ zmm2_2
            i = rbp_1
            rbp_1 -= 1
        while (i != 1)
else if (result == 1)
    int32_t* r9_1 = *(arg1 + 0x20)
    uint32_t rcx_1 = zx.d(*(rax + 1))
    *(arg1 + 0x10) = &rax[3]
    int32_t r8_1 = 0
    int32_t rax_2 = *r9_1
    
    if (rcx_1 s>= rax_2)
        int64_t rdx = 0
        
        do
            rcx_1 -= rax_2
            rdx += 1
            rax_2 = r9_1[rdx]
            r8_1 += 1
        while (rcx_1 s>= rax_2)
    
    zmm6 = *(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    uint64_t rdi_2 = zx.q(*(arg1 + 0x80) * zx.d(*(rax + 3)))
    *(arg1 + 0x10) = &rax[5]
    result = *(arg1 + 0x44)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
    uint32_t (* rdi_3)[0x4] = rdi_2 + *(arg1 + 0x70)
    
    if (result s> 0)
        uint64_t rsi_1 = zx.q(result)
        uint64_t i_1
        
        do
            uint32_t (* rbx_1)[0x4] = rdi_3
            var_28 = zmm6
            rdi_3 = &rdi_3[1]
            uint32_t zmm0_1[0x4]
            zmm0_1, zmm6 = sub_141c46b90(&var_28)
            float zmm2_1[0x4] = data_143f87690
            *rbx_1 = _mm_and_ps(zmm0_1 ^ zmm2_1, _mm_cmpeq_ps(zmm2_1, zmm6, 1)) ^ zmm2_1
            i_1 = rsi_1
            rsi_1 -= 1
        while (i_1 != 1)
return result

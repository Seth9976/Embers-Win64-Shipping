// 函数: sub_14275ee00
// 地址: 0x14275ee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg1 + 0x10)
float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
uint32_t rdx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t rax_1 = zx.q(rdx)
float zmm0[0x4]

if (rdx.b == 0)
    uint32_t r11_2 = zx.d(*(rax + 1))
    int32_t r8_2 = *(arg1 + 0x80)
    *(arg1 + 0x10) = &rax[3]
    uint64_t rcx_5 = zx.q(zx.d(*(rax + 3)) * r8_2)
    *(arg1 + 0x10) = &rax[5]
    rax_1 = zx.q(*(arg1 + 0x44))
    uint64_t rcx_6 = rcx_5 + *(arg1 + 0x70)
    float (* r11_4)[0x4] = zx.q(r11_2 * r8_2) + *(arg1 + 0x70)
    
    if (rax_1.d s> 0)
        zmm6 = data_143f87760
        uint64_t i_3 = zx.q(rax_1.d)
        uint64_t i
        
        do
            zmm0 = *r11_4
            rax_1 = rcx_6
            float zmm5[0x4] = data_143f877a0
            r11_4 = &r11_4[1]
            float zmm2[0x4] = data_143f87770
            rcx_6 += 0x10
            float temp0_17[0x4] = _mm_mul_ps(data_143f877b0, zmm0)
            zmm0 = data_143f87690
            float temp0_18[0x4] = _mm_add_ps(zmm5, temp0_17)
            zmm2 = _mm_and_ps(zmm2 ^ zmm0, _mm_cmpeq_ps(zmm0, temp0_18, 2)) ^ data_143f87770
            float temp0_24[0x4] =
                _mm_sub_ps(temp0_17, _mm_sub_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_18)), zmm2))
            float temp0_28[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(zmm5, _mm_and_ps(zmm6, temp0_24)), temp0_24), data_143f87790)
            *rax_1 = _mm_mul_ps(__addps_xmmps_memps(_mm_and_ps(zmm6, temp0_28), data_143f87780), 
                temp0_28)
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (rax_1.d == 1)
    int32_t* r9_1 = *(arg1 + 0x20)
    uint32_t rcx_1 = zx.d(*(rax + 1))
    *(arg1 + 0x10) = &rax[3]
    int32_t r8_1 = 0
    int32_t rax_3 = *r9_1
    
    if (rcx_1 s>= rax_3)
        int64_t rdx_1 = 0
        
        do
            rcx_1 -= rax_3
            rdx_1 += 1
            rax_3 = r9_1[rdx_1]
            r8_1 += 1
        while (rcx_1 s>= rax_3)
    
    zmm7 = *(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    uint64_t rdx_4 = zx.q(*(arg1 + 0x80) * zx.d(*(rax + 3)))
    *(arg1 + 0x10) = &rax[5]
    rax_1 = zx.q(*(arg1 + 0x44))
    float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    float (* rdx_5)[0x4] = rdx_4 + *(arg1 + 0x70)
    
    if (rax_1.d s> 0)
        uint64_t i_2 = zx.q(rax_1.d)
        uint32_t zmm8[0x4] = data_143f87760
        float (* rax_7)[0x4]
        uint64_t i_1
        
        do
            zmm6 = data_143f877a0
            rax_7 = rdx_5
            rdx_5 = &rdx_5[1]
            float zmm3[0x4] = data_143f87690
            zmm0 = data_143f87770 ^ data_143f87690
            float temp0_2[0x4] = _mm_mul_ps(data_143f877b0, temp0_1)
            float temp0_3[0x4] = _mm_add_ps(temp0_2, zmm6)
            zmm3 = _mm_and_ps(_mm_cmpeq_ps(zmm3, temp0_3, 2), zmm0) ^ data_143f87770
            float temp0_9[0x4] =
                _mm_sub_ps(temp0_2, _mm_sub_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3)), zmm3))
            float temp0_13[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(zmm6, _mm_and_ps(temp0_9, zmm8)), temp0_9), data_143f87790)
            *rax_7 = _mm_mul_ps(__addps_xmmps_memps(_mm_and_ps(temp0_13, zmm8), data_143f87780), 
                temp0_13)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        return rax_7
return rax_1

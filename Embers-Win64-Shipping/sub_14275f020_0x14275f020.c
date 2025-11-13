// 函数: sub_14275f020
// 地址: 0x14275f020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax_8 = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax_8)
*(arg1 + 0x10) = &rax_8[1]
uint64_t rax = zx.q(rdx)
float zmm2[0x4]

if (rdx.b == 0)
    uint32_t r11_2 = zx.d(*(rax_8 + 1))
    int32_t r8_2 = *(arg1 + 0x80)
    *(arg1 + 0x10) = &rax_8[3]
    uint64_t rcx_5 = zx.q(zx.d(*(rax_8 + 3)) * r8_2)
    *(arg1 + 0x10) = &rax_8[5]
    rax = zx.q(*(arg1 + 0x44))
    uint64_t rcx_6 = rcx_5 + *(arg1 + 0x70)
    float (* r11_4)[0x4] = zx.q(r11_2 * r8_2) + *(arg1 + 0x70)
    
    if (rax.d s> 0)
        float zmm4[0x4] = data_143f87750
        uint64_t i_3 = zx.q(rax.d)
        uint64_t i
        
        do
            zmm2 = *r11_4
            r11_4 = &r11_4[1]
            rax = rcx_6
            rcx_6 += 0x10
            *rax = _mm_and_ps(_mm_rcp_ps(_mm_rsqrt_ps(zmm2)) ^ data_143f87690, 
                _mm_cmpeq_ps(zmm4, zmm2, 1)) ^ data_143f87690
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (rax.d == 1)
    int32_t* r9_1 = *(arg1 + 0x20)
    uint32_t rcx_1 = zx.d(*(rax_8 + 1))
    *(arg1 + 0x10) = &rax_8[3]
    int32_t r8_1 = 0
    int32_t rax_2 = *r9_1
    
    if (rcx_1 s>= rax_2)
        int64_t rdx_1 = 0
        
        do
            rcx_1 -= rax_2
            rdx_1 += 1
            rax_2 = r9_1[rdx_1]
            r8_1 += 1
        while (rcx_1 s>= rax_2)
    
    float zmm1[0x4] = *(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    uint64_t rdx_4 = zx.q(*(arg1 + 0x80) * zx.d(*(rax_8 + 3)))
    *(arg1 + 0x10) = &rax_8[5]
    rax = zx.q(*(arg1 + 0x44))
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float (* rdx_5)[0x4] = rdx_4 + *(arg1 + 0x70)
    
    if (rax.d s> 0)
        zmm2 = data_143f87750
        uint64_t i_2 = zx.q(rax.d)
        float temp0_2[0x4] = _mm_rsqrt_ps(temp0_1)
        float temp0_3[0x4] = _mm_cmpeq_ps(zmm2, temp0_1, 1)
        float temp0_4[0x4] = _mm_rcp_ps(temp0_2)
        float (* rax_6)[0x4]
        uint64_t i_1
        
        do
            rax_6 = rdx_5
            rdx_5 = &rdx_5[1]
            *rax_6 = _mm_and_ps(temp0_4 ^ data_143f87690, temp0_3) ^ data_143f87690
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        return rax_6
return rax

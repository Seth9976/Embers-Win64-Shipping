// 函数: sub_1427604b0
// 地址: 0x1427604b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r9

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8 s>= rax_1)

float result[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint64_t rbx_1 = zx.q(*(arg1 + 0x80) * zx.d(rax[1]))
*(arg1 + 0x10) = &rax[2]
int32_t i_2 = *(arg1 + 0x44)
result = _mm_shuffle_ps(result, result, 0)
float (* rbx_2)[0x4] = rbx_1 + *(arg1 + 0x70)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    float zmm13[0x4]
    float var_88_1[0x4] = zmm13
    float zmm8[0x4] = result[3]
    float zmm9[0x4] = result[0].12:8.d
    float zmm11[0x4] = result[0].q:4.d
    float zmm12[0x4] = result[0]
    float zmm14[0x4]
    float var_98_1[0x4] = zmm14
    uint64_t i
    
    do
        float (* rdi_1)[0x4] = rbx_2
        rbx_2 = &rbx_2[1]
        
        if (zmm8[0] >= -1f)
            result = _mm_min_ss(zmm8[0], 0x3f800000)
        else
            result = 0xbf800000
        
        zmm14 = asinf(result[0])
        float zmm0[0x4]
        
        if (zmm9[0] >= -1f)
            zmm0 = _mm_min_ss(zmm9[0], 0x3f800000)
        else
            zmm0 = 0xbf800000
        
        zmm13 = asinf(zmm0[0])
        float zmm0_1[0x4]
        
        if (zmm11[0] >= -1f)
            zmm0_1 = _mm_min_ss(zmm11[0], 0x3f800000)
        else
            zmm0_1 = 0xbf800000
        
        zmm10 = asinf(zmm0_1[0])
        float zmm0_2[0x4]
        
        if (zmm12[0] >= -1f)
            zmm0_2 = _mm_min_ss(zmm12[0], 0x3f800000)
        else
            zmm0_2 = 0xbf800000
        
        result = _mm_unpacklo_ps(_mm_unpacklo_ps(asinf(zmm0_2[0]), zmm13[0].q), 
            _mm_unpacklo_ps(zmm10, zmm14[0].q)[0].q)
        *rdi_1 = result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

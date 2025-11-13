// 函数: sub_142760340
// 地址: 0x142760340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint32_t rbx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t rdi_1 = zx.q(zx.d(rax[1]) * r9)
*(arg1 + 0x10) = &rax[2]
int32_t result = *(arg1 + 0x44)
float (* rdi_2)[0x4] = rdi_1 + *(arg1 + 0x70)
int128_t* rbx_2 = zx.q(rbx * r9) + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    uint64_t i
    
    do
        float zmm0[0x4] = *rbx_2
        rbx_2 = &rbx_2[1]
        int96_t var_88_1 = zmm0[0].12
        float (* rsi_1)[0x4] = rdi_2
        int64_t var_78_1 = zmm0[0].q
        rdi_2 = &rdi_2[1]
        float var_68_1 = zmm0[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
        
        if (temp0_1[0] >= -1f)
            zmm0 = _mm_min_ss(temp0_1[0], 0x3f800000)
        else
            zmm0 = 0xbf800000
        
        zmm10 = asinf(zmm0[0])
        float zmm0_1[0x4] = var_88_1:8.d
        
        if (zmm0_1[0] >= -1f)
            zmm0_1 = _mm_min_ss(zmm0_1[0], 0x3f800000)
        else
            zmm0_1 = 0xbf800000
        
        zmm9 = asinf(zmm0_1[0])
        float zmm0_2[0x4] = var_78_1:4.d
        
        if (zmm0_2[0] >= -1f)
            zmm0_2 = _mm_min_ss(zmm0_2[0], 0x3f800000)
        else
            zmm0_2 = 0xbf800000
        
        zmm8 = asinf(zmm0_2[0])
        float zmm0_3[0x4] = var_68_1
        
        if (zmm0_3[0] >= -1f)
            zmm0_3 = _mm_min_ss(zmm0_3[0], 0x3f800000)
        else
            zmm0_3 = 0xbf800000
        
        zmm0, result = asinf(zmm0_3[0])
        *rsi_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm9[0].q), 
            _mm_unpacklo_ps(zmm8, zmm10[0].q)[0].q)
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result

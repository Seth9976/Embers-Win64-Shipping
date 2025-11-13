// 函数: sub_14275c650
// 地址: 0x14275c650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm10[0x4]
float var_58[0x4] = zmm10
char* rax = *(arg1 + 0x10)
uint32_t result_1 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t result = result_1
float zmm0[0x4]

if (result_1.b == 0)
    uint32_t rbx_4 = zx.d(*(rax + 1))
    int32_t r8_2 = *(arg1 + 0x80)
    *(arg1 + 0x10) = &rax[3]
    uint64_t rdi_3 = zx.q(zx.d(*(rax + 3)) * r8_2)
    *(arg1 + 0x10) = &rax[5]
    result = *(arg1 + 0x44)
    float (* rdi_4)[0x4] = rdi_3 + *(arg1 + 0x70)
    float (* rbx_6)[0x4] = zx.q(rbx_4 * r8_2) + *(arg1 + 0x70)
    
    if (result s> 0)
        uint64_t rbp_1 = zx.q(result)
        uint64_t i
        
        do
            zmm0 = *rbx_6
            rbx_6 = &rbx_6[1]
            int96_t var_a8_2 = zmm0[0].12
            float (* rsi_2)[0x4] = rdi_4
            int64_t var_b8_2 = zmm0[0].q
            rdi_4 = &rdi_4[1]
            float var_c8_2 = zmm0[0]
            float temp0_9[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
            
            if (temp0_9[0] >= -1f)
                zmm0 = _mm_min_ss(temp0_9[0], 0x3f800000)
            else
                zmm0 = 0xbf800000
            
            zmm10 = asinf(zmm0[0])
            float zmm0_4[0x4] = var_a8_2:8.d
            
            if (zmm0_4[0] >= -1f)
                zmm0_4 = _mm_min_ss(zmm0_4[0], 0x3f800000)
            else
                zmm0_4 = 0xbf800000
            
            zmm9 = asinf(zmm0_4[0])
            float zmm0_5[0x4] = var_b8_2:4.d
            
            if (zmm0_5[0] >= -1f)
                zmm0_5 = _mm_min_ss(zmm0_5[0], 0x3f800000)
            else
                zmm0_5 = 0xbf800000
            
            zmm8 = asinf(zmm0_5[0])
            float zmm0_6[0x4] = var_c8_2
            
            if (zmm0_6[0] >= -1f)
                zmm0_6 = _mm_min_ss(zmm0_6[0], 0x3f800000)
            else
                zmm0_6 = 0xbf800000
            
            zmm0, result = asinf(zmm0_6[0])
            *rsi_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm9[0].q), 
                _mm_unpacklo_ps(zmm8, zmm10[0].q)[0].q)
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
    
    zmm0 = *(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    uint64_t rbx_2 = zx.q(*(arg1 + 0x80) * zx.d(*(rax + 3)))
    *(arg1 + 0x10) = &rax[5]
    result = *(arg1 + 0x44)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    float (* rbx_3)[0x4] = rbx_2 + *(arg1 + 0x70)
    
    if (result s> 0)
        uint64_t rsi_1 = zx.q(result)
        float zmm13[0x4]
        float var_88_1[0x4] = zmm13
        zmm8 = temp0_1[3]
        zmm9 = temp0_1[0].12:8.d
        float zmm11[0x4] = temp0_1[0].q:4.d
        float zmm12[0x4] = temp0_1[0]
        float zmm14[0x4]
        float var_98_1[0x4] = zmm14
        uint64_t i_1
        
        do
            float (* rdi_1)[0x4] = rbx_3
            rbx_3 = &rbx_3[1]
            
            if (zmm8[0] >= -1f)
                zmm0 = _mm_min_ss(zmm8[0], 0x3f800000)
            else
                zmm0 = 0xbf800000
            
            zmm14 = asinf(zmm0[0])
            float zmm0_1[0x4]
            
            if (zmm9[0] >= -1f)
                zmm0_1 = _mm_min_ss(zmm9[0], 0x3f800000)
            else
                zmm0_1 = 0xbf800000
            
            zmm13 = asinf(zmm0_1[0])
            float zmm0_2[0x4]
            
            if (zmm11[0] >= -1f)
                zmm0_2 = _mm_min_ss(zmm11[0], 0x3f800000)
            else
                zmm0_2 = 0xbf800000
            
            zmm10 = asinf(zmm0_2[0])
            float zmm0_3[0x4]
            
            if (zmm12[0] >= -1f)
                zmm0_3 = _mm_min_ss(zmm12[0], 0x3f800000)
            else
                zmm0_3 = 0xbf800000
            
            zmm0, result = asinf(zmm0_3[0])
            *rdi_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm13[0].q), 
                _mm_unpacklo_ps(zmm10, zmm14[0].q)[0].q)
            i_1 = rsi_1
            rsi_1 -= 1
        while (i_1 != 1)
return result

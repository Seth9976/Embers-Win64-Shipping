// 函数: sub_14275d2a0
// 地址: 0x14275d2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg1 + 0x10)
int128_t zmm6
int128_t var_18 = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
uint32_t result_1 = zx.d(*rax)
float zmm9[0x4]
float var_48[0x4] = zmm9
uint64_t result = zx.q(result_1)
float zmm10[0x4]
float var_58[0x4] = zmm10
*(arg1 + 0x10) = &rax[1]

if (result_1.b == 0)
    uint32_t rdi_1 = zx.d(*(rax + 1))
    int32_t r8_2 = *(arg1 + 0x80)
    *(arg1 + 0x10) = &rax[3]
    uint64_t rsi_2 = zx.q(zx.d(*(rax + 3)) * r8_2)
    *(arg1 + 0x10) = &rax[5]
    result = zx.q(*(arg1 + 0x44))
    float (* rsi_3)[0x4] = rsi_2 + *(arg1 + 0x70)
    float (* rdi_3)[0x4] = zx.q(rdi_1 * r8_2) + *(arg1 + 0x70)
    
    if (result.d s> 0)
        uint64_t i_3 = zx.q(result.d)
        uint64_t i
        
        do
            zmm9 = *rdi_3
            rdi_3 = &rdi_3[1]
            float (* rbx_3)[0x4] = rsi_3
            rsi_3 = &rsi_3[1]
            zmm8 = powf(0x40000000.d, zmm9[0])
            float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
            zmm7 = powf(0x40000000[0], temp0_7[0])
            float temp0_8[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
            zmm6 = powf(0x40000000[0], temp0_8[0])
            int64_t zmm0
            zmm0, result = powf(0x40000000.d, _mm_shuffle_ps(zmm9, zmm9, 0xff)[0])
            float temp0_10[0x4] = _mm_unpacklo_ps(zmm7, zmm0)
            *rbx_3 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm6.q), temp0_10[0].q)
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (result.d == 1)
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
    
    int32_t i_4 = *(arg1 + 0x44)
    zmm10 = *(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    result = &rax[5]
    uint64_t rbx_2 = zx.q(*(arg1 + 0x80) * zx.d(*(rax + 3)))
    float temp0_1[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    *(arg1 + 0x10) = result
    uint64_t result_2 = rbx_2 + *(arg1 + 0x70)
    
    if (i_4 s> 0)
        zmm9 = powf(0x40000000.d, temp0_1[0])
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x55)
        zmm7 = powf(0x40000000[0], temp0_2[0])
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xaa)
        zmm6 = powf(0x40000000[0], temp0_3[0])
        float temp0_4[0x4] = _mm_unpacklo_ps(zmm7, powf(0x40000000.d, temp0_1[0]))
        uint64_t i_2 = zx.q(i_4)
        float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm9, zmm6.q), temp0_4[0].q)
        uint64_t i_1
        
        do
            result = result_2
            result_2 += 0x10
            *result = temp0_6
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result

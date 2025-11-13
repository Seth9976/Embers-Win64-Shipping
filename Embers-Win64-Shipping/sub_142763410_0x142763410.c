// 函数: sub_142763410
// 地址: 0x142763410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint32_t rdi = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t rsi_1 = zx.q(zx.d(rax[1]) * r9)
*(arg1 + 0x10) = &rax[2]
int32_t result = *(arg1 + 0x44)
float (* rsi_2)[0x4] = rsi_1 + *(arg1 + 0x70)
int128_t* rdi_2 = zx.q(rdi * r9) + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    uint64_t i
    
    do
        zmm9 = *rdi_2
        rdi_2 = &rdi_2[1]
        float (* rbx_1)[0x4] = rsi_2
        rsi_2 = &rsi_2[1]
        zmm8 = tanf(zmm9[0].q.d)
        zmm7 = tanf(_mm_shuffle_ps(zmm9, zmm9, 0x55)[0])
        zmm6 = tanf(_mm_shuffle_ps(zmm9, zmm9, 0xaa)[0])
        int64_t zmm0
        zmm0, result = tanf(_mm_shuffle_ps(zmm9, zmm9, 0xff)[0])
        float temp0_4[0x4] = _mm_unpacklo_ps(zmm7, zmm0)
        *rbx_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm6[0].q), temp0_4[0].q)
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result

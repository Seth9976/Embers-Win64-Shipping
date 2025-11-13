// 函数: sub_142754400
// 地址: 0x142754400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
uint32_t rbx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rcx_1 = zx.q(zx.d(rax[2]) * r9)
*(arg1 + 0x10) = &rax[3]
uint64_t result = zx.q(*(arg1 + 0x44))
int128_t* r8_3 = zx.q(rax_1 * r9) + r10
uint64_t result_1 = rcx_1 + r10
int128_t* rbx_2 = zx.q(rbx * r9) + r10

if (result.d s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    uint64_t i_1 = zx.q(result.d)
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4] = data_143f87760
    float zmm10[0x4] = data_143f877e0
    uint64_t i
    
    do
        zmm6 = *r8_3
        result = result_1
        zmm7 = *rbx_2
        float temp0_1[0x4] = _mm_div_ps(zmm7, zmm6)
        r8_3 = &r8_3[1]
        rbx_2 = &rbx_2[1]
        result_1 += 0x10
        uint32_t temp0_2[0x4] = _mm_and_ps(zmm8, zmm6)
        float temp0_4[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_1))
        float zmm2[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(zmm10, _mm_and_ps(zmm8, temp0_1), 2), temp0_4 ^ temp0_1)
        *result = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_2), 
            _mm_min_ps(_mm_sub_ps(zmm7, _mm_mul_ps(zmm2 ^ temp0_4, zmm6)), temp0_2))
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

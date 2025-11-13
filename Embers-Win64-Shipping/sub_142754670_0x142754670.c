// 函数: sub_142754670
// 地址: 0x142754670
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

int32_t r8_1 = *(arg1 + 0x80)
float zmm7[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint32_t rax_4 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rcx_3 = zx.q(zx.d(rax[2]) * r8_1)
*(arg1 + 0x10) = &rax[3]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float (* r11_3)[0x4] = zx.q(rax_4 * r8_1) + *(arg1 + 0x70)
uint64_t result_1 = rcx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    uint64_t i_1 = zx.q(result.d)
    uint32_t zmm8[0x4] = data_143f87760
    float zmm10[0x4] = data_143f877e0
    uint64_t i
    
    do
        zmm6 = *r11_3
        float temp0_1[0x4] = _mm_div_ps(temp0, zmm6)
        result = result_1
        r11_3 = &r11_3[1]
        result_1 += 0x10
        uint32_t temp0_2[0x4] = _mm_and_ps(zmm8, zmm6)
        float temp0_4[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_1))
        float temp0_8[0x4] = _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm10, _mm_and_ps(temp0_1, zmm8), 2), temp0_4 ^ temp0_1)
                ^ temp0_4, 
            zmm6)
        *result = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_2), 
            _mm_min_ps(_mm_sub_ps(temp0, temp0_8), temp0_2))
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

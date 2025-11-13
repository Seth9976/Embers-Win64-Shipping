// 函数: sub_142760dc0
// 地址: 0x142760dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint32_t r11 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t rdx_1 = zx.q(zx.d(rax[1]) * r9)
*(arg1 + 0x10) = &rax[2]
uint64_t result = zx.q(*(arg1 + 0x44))
uint64_t result_1 = rdx_1 + *(arg1 + 0x70)
int128_t* r11_2 = zx.q(r11 * r9) + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    float zmm6[0x4] = data_143f87760
    uint64_t i
    
    do
        float zmm0[0x4] = *r11_2
        result = result_1
        float zmm5[0x4] = data_143f877a0
        r11_2 = &r11_2[1]
        uint32_t zmm2[0x4] = data_143f87770
        float temp0_1[0x4] = _mm_add_ps(data_143f877c0, zmm0)
        zmm0 = data_143f87690
        result_1 += 0x10
        float temp0_2[0x4] = __mulps_xmmps_memps(temp0_1, data_143f877b0)
        float temp0_3[0x4] = _mm_add_ps(zmm5, temp0_2)
        zmm2 = _mm_and_ps(zmm2 ^ zmm0, _mm_cmpeq_ps(zmm0, temp0_3, 2)) ^ data_143f87770
        float temp0_9[0x4] =
            _mm_sub_ps(temp0_2, _mm_sub_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3)), zmm2))
        float temp0_13[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(zmm5, _mm_and_ps(zmm6, temp0_9)), temp0_9), data_143f87790)
        *result =
            _mm_mul_ps(__addps_xmmps_memps(_mm_and_ps(zmm6, temp0_13), data_143f87780), temp0_13)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

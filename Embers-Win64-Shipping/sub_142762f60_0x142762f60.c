// 函数: sub_142762f60
// 地址: 0x142762f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r10 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r10

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r10[rcx]
        rdx += 1
    while (r8 s>= rax_1)

float zmm6[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint64_t rdx_3 = zx.q(*(arg1 + 0x80) * zx.d(rax[1]))
*(arg1 + 0x10) = &rax[2]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
uint64_t result_1 = rdx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    float zmm7[0x4] = data_143f87760
    uint64_t i
    
    do
        float zmm5[0x4] = data_143f877a0
        result = result_1
        float zmm0[0x4] = data_143f87690
        result_1 += 0x10
        uint32_t zmm2[0x4] = data_143f87770
        float temp0_1[0x4] = _mm_mul_ps(data_143f877b0, temp0)
        float temp0_2[0x4] = _mm_add_ps(zmm5, temp0_1)
        zmm2 = _mm_and_ps(zmm2 ^ zmm0, _mm_cmpeq_ps(zmm0, temp0_2, 2)) ^ data_143f87770
        float temp0_8[0x4] =
            _mm_sub_ps(temp0_1, _mm_sub_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_2)), zmm2))
        float temp0_12[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(zmm5, _mm_and_ps(zmm7, temp0_8)), temp0_8), data_143f87790)
        *result =
            _mm_mul_ps(__addps_xmmps_memps(_mm_and_ps(zmm7, temp0_12), data_143f87780), temp0_12)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

// 函数: sub_142753be0
// 地址: 0x142753be0
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
float zmm6[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint32_t rax_4 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rcx_3 = zx.q(zx.d(rax[2]) * r8_1)
*(arg1 + 0x10) = &rax[3]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
int128_t* r10_3 = zx.q(rax_4 * r8_1) + *(arg1 + 0x70)
uint64_t result_1 = rcx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint32_t zmm4[0x4] = data_143f87750
    uint64_t i_1 = zx.q(result.d)
    float zmm5[0x4] = data_143f87760
    uint64_t i
    
    do
        float zmm2[0x4] = *r10_3
        r10_3 = &r10_3[1]
        result = result_1
        result_1 += 0x10
        float zmm1[0x4] = _mm_div_ps(temp0, zmm2) ^ data_143f87690
        *result = _mm_and_ps(_mm_cmpeq_ps(zmm4, _mm_and_ps(zmm5, zmm2), 1), zmm1) ^ data_143f87690
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

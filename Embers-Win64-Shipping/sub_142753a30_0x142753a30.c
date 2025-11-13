// 函数: sub_142753a30
// 地址: 0x142753a30
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
    float zmm4[0x4] = data_143f87750
    uint64_t i_1 = zx.q(result.d)
    uint32_t zmm5[0x4] = data_143f87760
    uint64_t i
    
    do
        float zmm1[0x4] = *r8_3
        r8_3 = &r8_3[1]
        float zmm3[0x4] = *rbx_2
        rbx_2 = &rbx_2[1]
        result = result_1
        result_1 += 0x10
        zmm3 = _mm_div_ps(zmm3, zmm1) ^ data_143f87690
        *result = _mm_and_ps(_mm_cmpeq_ps(zmm4, _mm_and_ps(zmm5, zmm1), 1), zmm3) ^ data_143f87690
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

// 函数: sub_14275ab90
// 地址: 0x14275ab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint64_t r9_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
float (* r9_2)[0x4] = r9_1 + *(arg1 + 0x70)
uint32_t rcx = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t rax_1 = *r10

if (rcx s>= rax_1)
    int64_t rdx_1 = 0
    
    do
        rcx -= rax_1
        rdx_1 += 1
        rax_1 = r10[rdx_1]
        r8_1 += 1
    while (rcx s>= rax_1)

float (* r8_4)[0x4] = zx.q(zx.d(rax[2]) * *(arg1 + 0x80)) + *(arg1 + 0x70)
float zmm2[0x4] = *(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
*(arg1 + 0x10) = &rax[3]
uint64_t rcx_3 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
uint64_t result_1 = rcx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        float zmm1[0x4] = *r9_2
        result = result_1
        float zmm0[0x4] = *r8_4
        r9_2 = &r9_2[1]
        r8_4 = &r8_4[1]
        result_1 += 0x10
        *result = _mm_add_ps(_mm_mul_ps(zmm1, temp0), zmm0)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

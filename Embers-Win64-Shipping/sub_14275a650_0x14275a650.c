// 函数: sub_14275a650
// 地址: 0x14275a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r10 = *(arg1 + 0x20)
int32_t r9 = 0
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r10

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r10[rcx]
        r9 += 1
    while (r8 s>= rax_1)

int64_t rdi = *(arg1 + 0x18)
float (* r9_3)[0x4] = zx.q(zx.d(rax[1]) * *(arg1 + 0x80)) + *(arg1 + 0x70)
float zmm4[0x4] = *(sx.q(r8) + *(rdi + (sx.q(r9) << 3)))
*(arg1 + 0x10) = &rax[2]
uint32_t rax_4 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rcx_3 = rax_4
int32_t r8_1 = *r10
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)

if (rax_4 s>= r8_1)
    int64_t rax_5 = 0
    
    do
        rcx_3 -= r8_1
        rax_5 += 1
        r8_1 = r10[rax_5]
        rdx += 1
    while (rcx_3 s>= r8_1)

float zmm3[0x4] = *(sx.q(rcx_3) + *(rdi + (sx.q(rdx) << 3)))
uint64_t rcx_6 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
uint64_t result_1 = rcx_6 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        float zmm1[0x4] = *r9_3
        result = result_1
        float temp0_2[0x4] = _mm_sub_ps(data_143f87770, temp0_1)
        float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm1)
        r9_3 = &r9_3[1]
        result_1 += 0x10
        *result = _mm_add_ps(_mm_mul_ps(temp0_2, temp0), temp0_3)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

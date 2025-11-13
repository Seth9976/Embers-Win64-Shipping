// 函数: sub_142755ae0
// 地址: 0x142755ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint64_t r9_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
float (* r9_2)[0x4] = r9_1 + *(arg1 + 0x70)
uint32_t rcx = rax_1
int32_t rdx = *r10

if (rax_1 s>= rdx)
    int64_t rax_2 = 0
    
    do
        rcx -= rdx
        rax_2 += 1
        rdx = r10[rax_2]
        r8_1 += 1
    while (rcx s>= rdx)

float zmm1[0x4] = *(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
uint64_t rcx_3 = zx.q(zx.d(rax[2]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[3]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
uint64_t result_1 = rcx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = result_1
        float temp0_1[0x4] = _mm_sub_ps(*r9_2, temp0)
        r9_2 = &r9_2[1]
        result_1 += 0x10
        *result = temp0_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

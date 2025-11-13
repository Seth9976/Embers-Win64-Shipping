// 函数: sub_142755bb0
// 地址: 0x142755bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_5 = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax_5)
*(arg1 + 0x10) = &rax_5[1]
int32_t rax = *r9

if (r8 s>= rax)
    int64_t rcx = 0
    
    do
        r8 -= rax
        rcx += 1
        rax = r9[rcx]
        rdx += 1
    while (r8 s>= rax)

int32_t r8_1 = *(arg1 + 0x80)
float zmm2[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint32_t rax_3 = zx.d(rax_5[1])
*(arg1 + 0x10) = &rax_5[2]
uint64_t rcx_3 = zx.q(zx.d(rax_5[2]) * r8_1)
*(arg1 + 0x10) = &rax_5[3]
uint64_t result = zx.q(*(arg1 + 0x44))
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float (* r10_3)[0x4] = zx.q(rax_3 * r8_1) + *(arg1 + 0x70)
uint64_t result_1 = rcx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        float zmm1[0x4] = *r10_3
        result = result_1
        r10_3 = &r10_3[1]
        result_1 += 0x10
        *result = _mm_sub_ps(temp0, zmm1)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

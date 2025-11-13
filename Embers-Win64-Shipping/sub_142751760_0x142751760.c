// 函数: sub_142751760
// 地址: 0x142751760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint64_t r9_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t (* r9_2)[0x4] = r9_1 + *(arg1 + 0x70)
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

uint128_t zmm1 = zx.o(*(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3))))
uint32_t rcx_2 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint64_t rax_7 = zx.q(rcx_2 * *(arg1 + 0x80))
int32_t i_2 = *(arg1 + 0x44)
zmm1 = _mm_shuffle_epi32(zmm1, 0)
int32_t (* result)[0x4] = rax_7 + *(arg1 + 0x70)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int32_t zmm0[0x4] = *r9_2
        r9_2 = &r9_2[1]
        int32_t (* result_1)[0x4] = result
        result = &result[1]
        *result_1 = _mm_sub_epi32(zmm0, zmm1)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

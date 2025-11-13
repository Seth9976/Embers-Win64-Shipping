// 函数: sub_142759590
// 地址: 0x142759590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r8 = 0
int32_t* r10 = *(arg1 + 0x20)
int32_t r9 = 0
uint32_t rax_1 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rdx_1 = *r10

if (rax_1 s>= rdx_1)
    int64_t rcx = 0
    
    do
        rax_1 -= rdx_1
        rcx += 1
        rdx_1 = r10[rcx]
        r9 += 1
    while (rax_1 s>= rdx_1)

int64_t rdi = *(arg1 + 0x18)
int32_t (* r9_3)[0x4] = zx.q(zx.d(rax[1]) * *(arg1 + 0x80)) + *(arg1 + 0x70)
uint128_t zmm4 = zx.o(*(sx.q(rax_1) + *(rdi + (sx.q(r9) << 3))))
*(arg1 + 0x10) = &rax[2]
uint32_t rax_3 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rcx_3 = rax_3
int32_t rdx_3 = *r10
zmm4 = _mm_shuffle_epi32(zmm4, 0)

if (rax_3 s>= rdx_3)
    int64_t rax_4 = 0
    
    do
        rcx_3 -= rdx_3
        rax_4 += 1
        rdx_3 = r10[rax_4]
        r8 += 1
    while (rcx_3 s>= rdx_3)

uint128_t zmm3 = zx.o(*(sx.q(rcx_3) + *(rdi + (sx.q(r8) << 3))))
uint64_t rcx_6 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
zmm3 = _mm_shuffle_epi32(zmm3, 0)
uint64_t result_1 = rcx_6 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm1[0x4] = *r9_3
        r9_3 = &r9_3[1]
        result = result_1
        result_1 += 0x10
        int32_t zmm2[0x4] = (_mm_cmpgt_epi32(zmm4, zmm1) & (zmm4 ^ zmm1)) ^ zmm1
        *result = ((zmm2 ^ zmm3) & _mm_cmpgt_epi32(zmm3, zmm2)) ^ zmm3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

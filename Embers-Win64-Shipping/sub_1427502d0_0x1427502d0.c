// 函数: sub_1427502d0
// 地址: 0x1427502d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = 0
int32_t* r10 = *(arg1 + 0x20)
int32_t rdx = 0
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

int64_t rdi = *(arg1 + 0x18)
uint128_t zmm1 = zx.o(*(sx.q(r8) + *(rdi + (sx.q(rdx) << 3))))
uint32_t rax_4 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rcx_2 = rax_4
int32_t rdx_1 = *r10
zmm1 = _mm_shuffle_epi32(zmm1, 0)

if (rax_4 s>= rdx_1)
    int64_t rax_5 = 0
    
    do
        rcx_2 -= rdx_1
        rax_5 += 1
        rdx_1 = r10[rax_5]
        r9 += 1
    while (rcx_2 s>= rdx_1)

int32_t zmm0[0x4] = zx.o(*(sx.q(rcx_2) + *(rdi + (sx.q(r9) << 3))))
uint32_t rcx_4 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint64_t rax_10 = zx.q(rcx_4 * *(arg1 + 0x80))
int32_t i_2 = *(arg1 + 0x44)
zmm0 = _mm_shuffle_epi32(zmm0, 0)
int32_t (* result)[0x4] = rax_10 + *(arg1 + 0x70)

if (i_2 s> 0)
    int32_t temp0_2[0x4] = _mm_cmpgt_epi32(zmm0, zmm1)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int32_t (* result_1)[0x4] = result
        result = &result[1]
        *result_1 = temp0_2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

// 函数: sub_1427596e0
// 地址: 0x1427596e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r8 = 0
int32_t* r9 = *(arg1 + 0x20)
int32_t r10 = 0
uint32_t rax_1 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rdx_1 = *r9

if (rax_1 s>= rdx_1)
    int64_t rcx = 0
    
    do
        rax_1 -= rdx_1
        rcx += 1
        rdx_1 = r9[rcx]
        r10 += 1
    while (rax_1 s>= rdx_1)

int64_t rdi = *(arg1 + 0x18)
uint128_t zmm0 = zx.o(*(sx.q(rax_1) + *(rdi + (sx.q(r10) << 3))))
uint32_t rax_3 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rcx_2 = rax_3
int32_t rdx_3 = *r9
zmm0 = _mm_shuffle_epi32(zmm0, 0)

if (rax_3 s>= rdx_3)
    int64_t rax_4 = 0
    
    do
        rcx_2 -= rdx_3
        rax_4 += 1
        rdx_3 = r9[rax_4]
        r8 += 1
    while (rcx_2 s>= rdx_3)

int32_t r8_1 = *(arg1 + 0x80)
int128_t* r10_3 = zx.q(zx.d(rax[2]) * r8_1) + *(arg1 + 0x70)
int32_t zmm1[0x4] = zx.o(*(sx.q(rcx_2) + *(rdi + (sx.q(r8) << 3))))
*(arg1 + 0x10) = &rax[3]
uint64_t rcx_5 = zx.q(zx.d(rax[3]) * r8_1)
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
zmm1 = _mm_shuffle_epi32(zmm1, 0)
uint64_t result_1 = rcx_5 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    int32_t zmm3[0x4] = ((zmm0 ^ zmm1) & _mm_cmpgt_epi32(zmm0, zmm1)) ^ zmm1
    uint64_t i
    
    do
        uint128_t zmm2 = *r10_3
        r10_3 = &r10_3[1]
        result = result_1
        result_1 += 0x10
        *result = ((zmm3 ^ zmm2) & _mm_cmpgt_epi32(zmm2, zmm3)) ^ zmm2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

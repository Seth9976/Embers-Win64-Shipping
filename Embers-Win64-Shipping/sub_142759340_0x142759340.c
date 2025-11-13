// 函数: sub_142759340
// 地址: 0x142759340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint64_t rbx_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r9 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t r10 = 0
int32_t (* rbx_2)[0x4] = rbx_1 + *(arg1 + 0x70)
uint32_t rcx = rax_1
int32_t rdx = *r9

if (rax_1 s>= rdx)
    int64_t rax_2 = 0
    
    do
        rcx -= rdx
        rax_2 += 1
        rdx = r9[rax_2]
        r10 += 1
    while (rcx s>= rdx)

int64_t rsi = *(arg1 + 0x18)
uint128_t zmm4 = zx.o(*(sx.q(rcx) + *(rsi + (sx.q(r10) << 3))))
uint32_t rax_5 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rcx_2 = rax_5
int32_t rdx_1 = *r9
zmm4 = _mm_shuffle_epi32(zmm4, 0)

if (rax_5 s>= rdx_1)
    int64_t rax_6 = 0
    
    do
        rcx_2 -= rdx_1
        rax_6 += 1
        rdx_1 = r9[rax_6]
        r8_1 += 1
    while (rcx_2 s>= rdx_1)

uint128_t zmm3 = zx.o(*(sx.q(rcx_2) + *(rsi + (sx.q(r8_1) << 3))))
uint64_t rcx_5 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
zmm3 = _mm_shuffle_epi32(zmm3, 0)
uint64_t result_1 = rcx_5 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm0[0x4] = *rbx_2
        rbx_2 = &rbx_2[1]
        result = result_1
        result_1 += 0x10
        int32_t zmm2[0x4] = (_mm_cmpgt_epi32(zmm0, zmm4) & (zmm0 ^ zmm4)) ^ zmm4
        *result = ((zmm2 ^ zmm3) & _mm_cmpgt_epi32(zmm3, zmm2)) ^ zmm3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

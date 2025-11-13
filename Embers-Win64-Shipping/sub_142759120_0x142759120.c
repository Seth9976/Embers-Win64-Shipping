// 函数: sub_142759120
// 地址: 0x142759120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r8 = 0
uint64_t r10_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r9 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint64_t r11_1 = zx.q(zx.d(rax[1]) * *(arg1 + 0x80))
uint128_t* r10_2 = r10_1 + *(arg1 + 0x70)
*(arg1 + 0x10) = &rax[2]
uint32_t rax_1 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint32_t rcx_2 = rax_1
int32_t (* r11_2)[0x4] = r11_1 + *(arg1 + 0x70)
int32_t rdx = *r9

if (rax_1 s>= rdx)
    int64_t rax_2 = 0
    
    do
        rcx_2 -= rdx
        rax_2 += 1
        rdx = r9[rax_2]
        r8 += 1
    while (rcx_2 s>= rdx)

uint128_t zmm3 = zx.o(*(sx.q(rcx_2) + *(*(arg1 + 0x18) + (sx.q(r8) << 3))))
uint64_t rcx_5 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
zmm3 = _mm_shuffle_epi32(zmm3, 0)
uint64_t result_1 = rcx_5 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm1[0x4] = *r11_2
        r11_2 = &r11_2[1]
        uint128_t zmm0 = *r10_2
        r10_2 = &r10_2[1]
        result = result_1
        result_1 += 0x10
        int32_t zmm2[0x4] = (_mm_cmpgt_epi32(zmm0, zmm1) & (zmm0 ^ zmm1)) ^ zmm1
        *result = ((zmm2 ^ zmm3) & _mm_cmpgt_epi32(zmm3, zmm2)) ^ zmm3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

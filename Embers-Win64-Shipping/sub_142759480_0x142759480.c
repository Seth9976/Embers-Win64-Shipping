// 函数: sub_142759480
// 地址: 0x142759480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r8 = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t rax_1 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rdx_1 = *r9

if (rax_1 s>= rdx_1)
    int64_t rcx = 0
    
    do
        rax_1 -= rdx_1
        rcx += 1
        rdx_1 = r9[rcx]
        r8 += 1
    while (rax_1 s>= rdx_1)

int64_t r9_1 = *(arg1 + 0x70)
int32_t r8_2 = *(arg1 + 0x80)
uint128_t zmm4 = zx.o(*(sx.q(rax_1) + *(*(arg1 + 0x18) + (sx.q(r8) << 3))))
uint32_t rax_3 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t r11 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint64_t rcx_3 = zx.q(zx.d(rax[3]) * r8_2)
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
int32_t (* r10_3)[0x4] = zx.q(rax_3 * r8_2) + r9_1
int128_t* r11_2 = zx.q(r11 * r8_2) + r9_1
zmm4 = _mm_shuffle_epi32(zmm4, 0)
uint64_t result_1 = rcx_3 + r9_1

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm1[0x4] = *r10_3
        result = result_1
        uint128_t zmm3 = *r11_2
        r11_2 = &r11_2[1]
        r10_3 = &r10_3[1]
        result_1 += 0x10
        int32_t zmm2[0x4] = (_mm_cmpgt_epi32(zmm4, zmm1) & (zmm4 ^ zmm1)) ^ zmm1
        *result = ((zmm2 ^ zmm3) & _mm_cmpgt_epi32(zmm3, zmm2)) ^ zmm3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

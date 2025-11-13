// 函数: sub_142759230
// 地址: 0x142759230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t* r9 = *(arg1 + 0x20)
uint64_t r11_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t (* r11_2)[0x4] = r11_1 + *(arg1 + 0x70)
int32_t rcx = *r9

if (rax_1 s>= rcx)
    int64_t rdx_1 = 0
    
    do
        rax_1 -= rcx
        rdx_1 += 1
        rcx = r9[rdx_1]
        r8_1 += 1
    while (rax_1 s>= rcx)

uint64_t r8_4 = zx.q(zx.d(rax[2]) * *(arg1 + 0x80))
uint128_t zmm4 = zx.o(*(sx.q(rax_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3))))
*(arg1 + 0x10) = &rax[3]
uint64_t rcx_3 = zx.q(zx.d(rax[3]) * *(arg1 + 0x80))
int128_t* r8_5 = r8_4 + *(arg1 + 0x70)
*(arg1 + 0x10) = &rax[4]
uint64_t result = zx.q(*(arg1 + 0x44))
zmm4 = _mm_shuffle_epi32(zmm4, 0)
uint64_t result_1 = rcx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm3[0x4] = *r8_5
        r8_5 = &r8_5[1]
        int32_t zmm0[0x4] = *r11_2
        r11_2 = &r11_2[1]
        result = result_1
        result_1 += 0x10
        int32_t zmm2[0x4] = (_mm_cmpgt_epi32(zmm0, zmm4) & (zmm0 ^ zmm4)) ^ zmm4
        *result = ((zmm2 ^ zmm3) & _mm_cmpgt_epi32(zmm3, zmm2)) ^ zmm3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

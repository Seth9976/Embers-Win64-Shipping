// 函数: sub_14274e580
// 地址: 0x14274e580
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

int32_t r8_2 = *(arg1 + 0x80)
uint128_t zmm4 = zx.o(*(sx.q(rax_1) + *(*(arg1 + 0x18) + (sx.q(r8) << 3))))
uint32_t rax_3 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rbx_1 = zx.q(zx.d(rax[2]) * r8_2)
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
zmm4 = _mm_shuffle_epi32(zmm4, 0)
int32_t (* rbx_2)[0x4] = rbx_1 + *(arg1 + 0x70)
int128_t* r11_3 = zx.q(rax_3 * r8_2) + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rdi_1 = zx.q(result)
    uint64_t i
    
    do
        uint128_t zmm2 = *r11_3
        r11_3 = &r11_3[1]
        uint128_t temp0_1 = _mm_bsrli_si128(zmm2, 4)
        int32_t (* r10_1)[0x4] = rbx_2
        rbx_2 = &rbx_2[1]
        int32_t r8_3 = _mm_bsrli_si128(zmm4, 4).d
        uint128_t temp0_3 = _mm_bsrli_si128(zmm2, 8)
        uint128_t temp0_4 = _mm_bsrli_si128(zmm2, 0xc)
        int32_t rdx_4 = _mm_bsrli_si128(zmm4, 8).d
        result = _mm_bsrli_si128(zmm4, 0xc).d << temp0_4.b
        *r10_1 = _mm_unpacklo_epi32(
            _mm_unpacklo_epi32(zx.o(zmm4.d << zmm2.b), zx.q(rdx_4 << temp0_3.b)), 
            _mm_unpacklo_epi32(zx.o(r8_3 << temp0_1.b), zx.q(result)).q)
        i = rdi_1
        rdi_1 -= 1
    while (i != 1)

return result

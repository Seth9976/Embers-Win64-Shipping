// 函数: sub_14274e6d0
// 地址: 0x14274e6d0
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
uint32_t rcx_2 = zx.d(rax[1])
uint128_t zmm5 = zx.o(*(sx.q(rax_1) + *(rdi + (sx.q(r10) << 3))))
*(arg1 + 0x10) = &rax[2]
int32_t rax_3 = *r9
zmm5 = _mm_shuffle_epi32(zmm5, 0)

if (rcx_2 s>= rax_3)
    int64_t rdx_3 = 0
    
    do
        rcx_2 -= rax_3
        rdx_3 += 1
        rax_3 = r9[rdx_3]
        r8 += 1
    while (rcx_2 s>= rax_3)

uint128_t zmm4 = zx.o(*(sx.q(rcx_2) + *(rdi + (sx.q(r8) << 3))))
uint64_t rbx_3 = zx.q(*(arg1 + 0x80) * zx.d(rax[2]))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
zmm4 = _mm_shuffle_epi32(zmm4, 0)
int32_t (* rbx_4)[0x4] = rbx_3 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t r11_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t (* r10_1)[0x4] = rbx_4
        uint128_t temp0_2 = _mm_bsrli_si128(zmm4, 4)
        rbx_4 = &rbx_4[1]
        int32_t r8_1 = _mm_bsrli_si128(zmm5, 4).d
        uint128_t temp0_4 = _mm_bsrli_si128(zmm4, 8)
        int32_t rdx_4 = _mm_bsrli_si128(zmm5, 8).d
        uint128_t temp0_6 = _mm_bsrli_si128(zmm4, 0xc)
        result = _mm_bsrli_si128(zmm5, 0xc).d << temp0_6.b
        *r10_1 = _mm_unpacklo_epi32(
            _mm_unpacklo_epi32(zx.o(zmm5.d << zmm4.b), zx.q(rdx_4 << temp0_4.b)), 
            _mm_unpacklo_epi32(zx.o(r8_1 << temp0_2.b), zx.q(result))[0].q)
        i = r11_1
        r11_1 -= 1
    while (i != 1)

return result

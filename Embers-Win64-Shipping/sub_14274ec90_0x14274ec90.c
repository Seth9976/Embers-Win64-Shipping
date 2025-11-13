// 函数: sub_14274ec90
// 地址: 0x14274ec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdi = *(arg1 + 0x80)
int32_t* r10 = *(arg1 + 0x20)
uint32_t rbx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t (* rbx_2)[0x4] = zx.q(rbx * rdi) + *(arg1 + 0x70)
int32_t rcx = *r10

if (rax_1 s>= rcx)
    int64_t rdx_1 = 0
    
    do
        rax_1 -= rcx
        rdx_1 += 1
        rcx = r10[rdx_1]
        r8_1 += 1
    while (rax_1 s>= rcx)

uint32_t rcx_2 = zx.d(rax[2])
uint128_t zmm4 = zx.o(*(sx.q(rax_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3))))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
zmm4 = _mm_shuffle_epi32(zmm4, 0)
int32_t (* r11_3)[0x4] = zx.q(rcx_2 * rdi) + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rdi_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t zmm2[0x4] = *rbx_2
        rbx_2 = &rbx_2[1]
        int32_t r9_1 = zmm2[0]
        int32_t (* r10_1)[0x4] = r11_3
        int32_t r8_3 = _mm_bsrli_si128(zmm2, 4)[0]
        uint128_t temp0_2 = _mm_bsrli_si128(zmm4, 4)
        r11_3 = &r11_3[1]
        int32_t rdx_3 = _mm_bsrli_si128(zmm2, 8)[0]
        int32_t rax_4 = _mm_bsrli_si128(zmm2, 0xc)[0]
        int32_t zmm0[0x4] = _mm_bsrli_si128(zmm4, 0xc)
        int32_t rdx_4 = rdx_3 s>> _mm_bsrli_si128(zmm4, 8).b
        result = rax_4 s>> zmm0[0].b
        *r10_1 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(r9_1 s>> zmm4.b), zx.o(rdx_4)[0].q), 
            _mm_unpacklo_epi32(zx.o(r8_3 s>> temp0_2.b), zx.q(result))[0].q)
        i = rdi_1
        rdi_1 -= 1
    while (i != 1)

return result

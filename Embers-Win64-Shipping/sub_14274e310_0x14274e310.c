// 函数: sub_14274e310
// 地址: 0x14274e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
uint32_t rbx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rdi = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rsi_1 = zx.q(zx.d(rax[2]) * r9)
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
int32_t (* rsi_2)[0x4] = rsi_1 + r10
int128_t* rbx_2 = zx.q(rbx * r9) + r10
int128_t* rdi_2 = zx.q(rdi * r9) + r10

if (result s> 0)
    uint64_t r11_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t zmm2[0x4] = *rdi_2
        rdi_2 = &rdi_2[1]
        int32_t zmm3[0x4] = *rbx_2
        rbx_2 = &rbx_2[1]
        char rcx = zmm2[0].b
        int32_t r9_1 = zmm3[0]
        uint128_t temp0_1 = _mm_bsrli_si128(zmm2, 4)
        int32_t (* r10_1)[0x4] = rsi_2
        rsi_2 = &rsi_2[1]
        uint128_t zmm0 = zmm2
        int32_t r8_1 = _mm_bsrli_si128(zmm3, 4).d
        int32_t rax_2 = _mm_bsrli_si128(zmm3, 0xc)[0]
        zmm2 = _mm_bsrli_si128(zmm2, 0xc)
        char rcx_2 = _mm_bsrli_si128(zmm0, 8).b
        int32_t rdx_2 = _mm_bsrli_si128(zmm3, 8).d << rcx_2
        result = rax_2 << zmm2[0].b
        *r10_1 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(r9_1 << rcx), zx.q(rdx_2)), 
            _mm_unpacklo_epi32(zx.o(r8_1 << temp0_1.b), zx.q(result))[0].q)
        i = r11_1
        r11_1 -= 1
    while (i != 1)

return result

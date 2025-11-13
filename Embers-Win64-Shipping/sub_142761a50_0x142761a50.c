// 函数: sub_142761a50
// 地址: 0x142761a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_6 = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax_6)
*(arg1 + 0x10) = &rax_6[1]
int32_t rax = *r9

if (r8 s>= rax)
    int64_t rcx = 0
    
    do
        r8 -= rax
        rcx += 1
        rax = r9[rcx]
        rdx += 1
    while (r8 s>= rax)

uint128_t zmm0 = zx.o(*(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3))))
uint32_t rcx_2 = zx.d(rax_6[1])
*(arg1 + 0x10) = &rax_6[2]
uint64_t rax_5 = zx.q(rcx_2 * *(arg1 + 0x80))
int32_t i_2 = *(arg1 + 0x44)
zmm0 = _mm_shuffle_epi32(zmm0, 0)
uint128_t* result = rax_5 + *(arg1 + 0x70)

if (i_2 s> 0)
    zmm0 = _mm_cvtepi32_ps(zmm0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        uint128_t* result_1 = result
        result = &result[1]
        *result_1 = zmm0
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

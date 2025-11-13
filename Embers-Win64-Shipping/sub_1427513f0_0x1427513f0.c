// 函数: sub_1427513f0
// 地址: 0x1427513f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint64_t r9_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t (* r9_2)[0x4] = r9_1 + *(arg1 + 0x70)
uint32_t rcx = rax_1
int32_t rdx = *r10

if (rax_1 s>= rdx)
    int64_t rax_2 = 0
    
    do
        rcx -= rdx
        rax_2 += 1
        rdx = r10[rax_2]
        r8_1 += 1
    while (rcx s>= rdx)

uint128_t zmm4 = zx.o(*(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3))))
uint64_t rcx_3 = zx.q(zx.d(rax[2]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rax[3]
int32_t (* result)[0x4] = zx.q(*(arg1 + 0x44))
zmm4 = _mm_shuffle_epi32(zmm4, 0)
int32_t (* result_1)[0x4] = rcx_3 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint128_t temp0_1 = _mm_bsrli_si128(zmm4, 4)
    uint64_t i
    
    do
        int32_t zmm2[0x4] = *r9_2
        r9_2 = &r9_2[1]
        result = result_1
        int32_t temp0_2[0x4] = _mm_mul_epu32(zmm2, zmm4)
        result_1 = &result_1[1]
        int32_t temp0_4[0x4] = _mm_mul_epu32(_mm_bsrli_si128(zmm2, 4), temp0_1)
        *result =
            _mm_unpacklo_epi32(_mm_shuffle_epi32(temp0_2, 8), _mm_shuffle_epi32(temp0_4, 8)[0].q)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

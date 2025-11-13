// 函数: sub_142751340
// 地址: 0x142751340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
uint32_t rbx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rcx_1 = zx.q(zx.d(rax[2]) * r9)
*(arg1 + 0x10) = &rax[3]
uint64_t result = zx.q(*(arg1 + 0x44))
int128_t* r8_3 = zx.q(rax_1 * r9) + r10
uint64_t result_1 = rcx_1 + r10
int128_t* rbx_2 = zx.q(rbx * r9) + r10

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm3[0x4] = *rbx_2
        result = result_1
        int32_t zmm2[0x4] = *r8_3
        r8_3 = &r8_3[1]
        rbx_2 = &rbx_2[1]
        int32_t temp0_1[0x4] = _mm_mul_epu32(zmm3, zmm2)
        result_1 += 0x10
        zmm2 = _mm_bsrli_si128(zmm2, 4)
        int32_t temp0_4[0x4] = _mm_mul_epu32(_mm_bsrli_si128(zmm3, 4), zmm2)
        *result =
            _mm_unpacklo_epi32(_mm_shuffle_epi32(temp0_1, 8), _mm_shuffle_epi32(temp0_4, 8)[0].q)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

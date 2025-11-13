// 函数: sub_14274f530
// 地址: 0x14274f530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_4 = *(arg1 + 0x10)
int32_t r8 = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t rax = zx.d(*rax_4)
*(arg1 + 0x10) = &rax_4[1]
int32_t rdx_1 = *r9

if (rax s>= rdx_1)
    int64_t rcx = 0
    
    do
        rax -= rdx_1
        rcx += 1
        rdx_1 = r9[rcx]
        r8 += 1
    while (rax s>= rdx_1)

int32_t r8_2 = *(arg1 + 0x80)
uint128_t zmm2 = zx.o(*(sx.q(rax) + *(*(arg1 + 0x18) + (sx.q(r8) << 3))))
uint32_t rax_2 = zx.d(rax_4[1])
*(arg1 + 0x10) = &rax_4[2]
uint64_t rcx_3 = zx.q(zx.d(rax_4[2]) * r8_2)
*(arg1 + 0x10) = &rax_4[3]
uint128_t* result = zx.q(*(arg1 + 0x44))
zmm2 = _mm_shuffle_epi32(zmm2, 0)
uint128_t* result_1 = rcx_3 + *(arg1 + 0x70)
int128_t* r10_3 = zx.q(rax_2 * r8_2) + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm1[0x4] = *r10_3
        r10_3 = &r10_3[1]
        result = result_1
        result_1 = &result_1[1]
        *result = _mm_cmpeq_epi32(zmm2, zmm1)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

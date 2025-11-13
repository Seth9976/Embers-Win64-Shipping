// 函数: sub_14274f790
// 地址: 0x14274f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint64_t r9_1 = zx.q(zx.d(*rax) * *(arg1 + 0x80))
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int128_t* r9_2 = r9_1 + *(arg1 + 0x70)
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

uint128_t zmm3 = zx.o(*(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3))))
uint32_t rcx_2 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint64_t rax_7 = zx.q(rcx_2 * *(arg1 + 0x80))
int32_t i_2 = *(arg1 + 0x44)
zmm3 = _mm_shuffle_epi32(zmm3, 0)
uint128_t* result = rax_7 + *(arg1 + 0x70)

if (i_2 s> 0)
    int128_t zmm2 = data_143f87820
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int32_t zmm0[0x4] = *r9_2
        r9_2 = &r9_2[1]
        uint128_t* result_1 = result
        result = &result[1]
        *result_1 = _mm_cmpgt_epi32(zmm3, zmm0) ^ zmm2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

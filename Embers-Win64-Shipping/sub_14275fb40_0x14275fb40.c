// 函数: sub_14275fb40
// 地址: 0x14275fb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_3 = *(arg1 + 0x10)
int32_t r8 = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t rax = zx.d(*rax_3)
*(arg1 + 0x10) = &rax_3[1]
int32_t rdx_1 = *r9

if (rax s>= rdx_1)
    int64_t rcx = 0
    
    do
        rax -= rdx_1
        rcx += 1
        rdx_1 = r9[rcx]
        r8 += 1
    while (rax s>= rdx_1)

uint128_t zmm3 = zx.o(*(sx.q(rax) + *(*(arg1 + 0x18) + (sx.q(r8) << 3))))
uint64_t rdx_4 = zx.q(*(arg1 + 0x80) * zx.d(rax_3[1]))
*(arg1 + 0x10) = &rax_3[2]
uint64_t result = zx.q(*(arg1 + 0x44))
zmm3 = _mm_shuffle_epi32(zmm3, 0)
uint64_t result_1 = rdx_4 + *(arg1 + 0x70)

if (result.d s> 0)
    int128_t zmm4 = data_143f87820
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm2[0x4] = data_143f87810
        result = result_1
        result_1 += 0x10
        int32_t temp0_1[0x4] = _mm_cmpgt_epi32(zmm2, zmm3)
        int32_t temp0_2[0x4] = _mm_sub_epi32(zmm2, zmm3)
        *result = ((temp0_1 ^ zmm4) & (temp0_2 ^ zmm3)) ^ temp0_2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

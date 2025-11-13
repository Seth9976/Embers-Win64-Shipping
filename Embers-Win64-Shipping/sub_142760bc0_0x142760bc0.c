// 函数: sub_142760bc0
// 地址: 0x142760bc0
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

uint128_t zmm2 = zx.o(*(sx.q(rax) + *(*(arg1 + 0x18) + (sx.q(r8) << 3))))
uint64_t rdx_4 = zx.q(*(arg1 + 0x80) * zx.d(rax_3[1]))
*(arg1 + 0x10) = &rax_3[2]
uint64_t result = zx.q(*(arg1 + 0x44))
zmm2 = _mm_shuffle_epi32(zmm2, 0)
uint64_t result_1 = rdx_4 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = result_1
        result_1 += 0x10
        *result = ((data_143f87840 ^ data_143f87810) & zmm2) ^ data_143f87810
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

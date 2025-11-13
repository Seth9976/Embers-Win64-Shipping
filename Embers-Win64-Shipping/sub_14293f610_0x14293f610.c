// 函数: sub_14293f610
// 地址: 0x14293f610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4[0x4] = data_142e11d00
int32_t zmm5[0x4] = data_142fc95f0
int32_t rax = arg2 * 0xfffffff
uint128_t zmm2 = _mm_shuffle_epi32(zx.o(rax), 0)
int32_t i = 0
uint128_t zmm3 = _mm_shuffle_epi32(zx.o(rax - arg2), 0)
int32_t result

do
    result = i + 4
    arg1 += 0x20
    uint128_t zmm0 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zmm4)
    i += 8
    zmm0 = _mm_cmpeq_epi32(zmm0, zmm5)
    int32_t temp0_5[0x4] = _mm_add_epi32((zmm0 & not.o(zmm2)) | (zmm0 & zmm3), *(arg1 - 0x20))
    zmm0 = _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(result), 0), zmm4), zmm5)
    *(arg1 - 0x20) = temp0_5
    *(arg1 - 0x10) = _mm_add_epi32((zmm0 & not.o(zmm2)) | (zmm0 & zmm3), *(arg1 - 0x10))
while (i u< 0x10)

return result

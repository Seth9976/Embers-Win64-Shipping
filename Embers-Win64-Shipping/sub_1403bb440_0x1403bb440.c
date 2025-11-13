// 函数: sub_1403bb440
// 地址: 0x1403bb440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = -4
uint128_t result
int64_t i

do
    result = zx.o(*arg4)
    result = _mm_unpacklo_epi8(result, result.q)
    result = _mm_unpacklo_epi8(result, result.q)
    uint32_t temp0_3[0x4] = _mm_shuffle_epi32(result, 0)
    uint32_t temp0_4[0x4] = _mm_shuffle_epi32(result, 0x55)
    *arg1 = temp0_3
    *(arg1 + arg2) = temp0_4
    uint32_t temp0_5[0x4] = _mm_shuffle_epi32(result, 0xaa)
    uint32_t temp0_6[0x4] = _mm_shuffle_epi32(result, 0xff)
    *(arg1 + (arg2 << 1)) = temp0_5
    *(arg1 + arg2 * 3) = temp0_6
    i = i_1
    i_1 += 1
    arg4 = &arg4[1]
    arg1 = &(*arg1)[arg2]
while (i != -1)
return result

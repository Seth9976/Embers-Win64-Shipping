// 函数: sub_1403bb3b0
// 地址: 0x1403bb3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = zx.o(*arg4)
result = _mm_unpacklo_epi8(result, result.q)
result = _mm_unpacklo_epi8(result, result.q)
int32_t temp0_2 = _mm_shuffle_epi32(result, 1)
*arg1 = result.d
*(arg1 + arg2) = temp0_2
int32_t temp0_3 = _mm_shuffle_epi32(result, 2)
void* rcx = arg1 + (arg2 << 1)
int32_t temp0_4 = _mm_shuffle_epi32(result, 3)
*rcx = temp0_3
*(rcx + arg2) = temp0_4
return result

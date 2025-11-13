// 函数: sub_1403bb3f0
// 地址: 0x1403bb3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = -2
uint128_t result = zx.o(*arg4)
result = _mm_unpacklo_epi8(result, result.q)
int64_t i

do
    int64_t temp0_1 = _mm_shufflelo_epi16(result, 0)
    int64_t temp0_2 = _mm_shufflelo_epi16(result, 0x55)
    *arg1 = temp0_1
    *(arg1 + arg2) = temp0_2
    int64_t temp0_3 = _mm_shufflelo_epi16(result, 0xaa)
    int64_t temp0_4 = _mm_shufflelo_epi16(result, 0xff)
    *(arg1 + (arg2 << 1)) = temp0_3
    *(arg1 + arg2 * 3) = temp0_4
    result = _mm_shuffle_epi32(result, 0xe)
    i = i_1
    i_1 += 1
    arg1 += arg2 << 2
while (i != -1)
return result

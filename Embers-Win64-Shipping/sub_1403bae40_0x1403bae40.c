// 函数: sub_1403bae40
// 地址: 0x1403bae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg2 * 3
uint128_t result =
    _mm_srai_epi16(__paddw_xmmdq_memdq(_mm_sad_epu8(zx.o(*arg3), zx.o(0)), data_14427f010), 3)
result = _mm_shufflelo_epi16(_mm_unpacklo_epi8(result, result.q), 0)
*arg1 = result.q
*(arg1 + arg2) = result.q
*(arg1 + (arg2 << 1)) = result.q
*(arg1 + r8) = result.q
void* rcx = arg1 + (arg2 << 2)
*rcx = result.q
*(rcx + arg2) = result.q
*(rcx + (arg2 << 1)) = result.q
*(rcx + r8) = result.q
return result

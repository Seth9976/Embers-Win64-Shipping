// 函数: sub_1403bad00
// 地址: 0x1403bad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = _mm_shufflelo_epi16(
    _mm_srai_epi16(
        __paddw_xmmdq_memdq(_mm_sad_epu8(_mm_unpacklo_epi32(zx.o(*arg3), zx.q(*arg4)), zx.o(0)), 
            data_14427efb0), 
        3), 
    0)
result = _mm_packus_epi16(result, result)
*arg1 = result.d
*(arg1 + arg2) = result.d
void* rcx = arg1 + (arg2 << 1)
*rcx = result.d
*(rcx + arg2) = result.d
return result

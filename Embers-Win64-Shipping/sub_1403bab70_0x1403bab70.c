// 函数: sub_1403bab70
// 地址: 0x1403bab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = zx.o(*arg3)
uint128_t temp0 = _mm_bsrli_si128(result, 1)
uint128_t temp0_1 = _mm_bsrli_si128(result, 2)
uint8_t temp0_4[0x10] = _mm_avg_epu8(
    _mm_sub_epi8(_mm_avg_epu8(result, temp0_1), (temp0_1 ^ result) & data_14427efa0), temp0)
*arg1 = temp0_4[0].d
uint8_t zmm3[0x10] = _mm_srli_epi64(temp0_4, 8)
*(arg1 + arg2) = zmm3[0].d
void* rcx = arg1 + (arg2 << 1)
zmm3 = _mm_srli_epi64(zmm3, 8)
*rcx = zmm3[0].d
*(rcx + arg2) = _mm_srli_epi64(zmm3, 8)[0].d
result = _mm_srli_epi64(result, 0x38)
*(rcx + arg2 + 3) = result.b
return result

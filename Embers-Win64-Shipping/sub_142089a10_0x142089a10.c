// 函数: sub_142089a10
// 地址: 0x142089a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg1 + 0x10)
zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + *(arg1 + 8))
int64_t result
result.b = 1
return result

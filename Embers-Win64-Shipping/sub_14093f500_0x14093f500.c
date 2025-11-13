// 函数: sub_14093f500
// 地址: 0x14093f500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg1 + 0x10)
zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + *(arg1 + 8), arg1)
int64_t result
result.b = 1
return result

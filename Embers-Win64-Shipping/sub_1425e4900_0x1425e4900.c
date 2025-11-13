// 函数: sub_1425e4900
// 地址: 0x1425e4900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *(arg1 + 0x10)
_mm_bsrli_si128(zmm2, 8)
*(arg1 + 8)
jump(zmm2.q)

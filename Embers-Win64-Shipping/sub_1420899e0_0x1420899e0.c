// 函数: sub_1420899e0
// 地址: 0x1420899e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg1 + 0x10)
_mm_bsrli_si128(zmm1, 8)
*(arg1 + 8)
jump(zmm1.q)

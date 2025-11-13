// 函数: sub_141f87790
// 地址: 0x141f87790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3c6e0(arg1 + 8)
uint128_t zmm1 = *(arg1 + 0x10)
_mm_bsrli_si128(zmm1, 8)
*(arg1 + 0x20)
jump(zmm1.q)

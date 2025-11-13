// 函数: sub_142700f60
// 地址: 0x142700f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *arg3
*arg2 = zmm2.q
arg2[1].d = _mm_bsrli_si128(zmm2, 8).d
return arg2

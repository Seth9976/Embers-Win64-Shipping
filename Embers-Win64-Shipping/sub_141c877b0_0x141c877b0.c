// 函数: sub_141c877b0
// 地址: 0x141c877b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *(arg1 + 0x10)
int128_t zmm0 = *(arg1 + 0x20)
int32_t rax = _mm_bsrli_si128(zmm2, 8).d
int128_t var_18 = zmm0
return zmm2.q(sx.q(rax) + *(arg1 + 8), &var_18)

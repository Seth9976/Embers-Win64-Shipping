// 函数: sub_141ba6910
// 地址: 0x141ba6910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
uint128_t zmm1 = *(arg1 + 0x10)
void arg_8
*arg2 = *zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rax, &arg_8)
return arg2

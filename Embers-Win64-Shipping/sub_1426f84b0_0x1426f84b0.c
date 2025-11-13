// 函数: sub_1426f84b0
// 地址: 0x1426f84b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
uint128_t zmm1 = *(arg1 + 0x10)
int64_t var_14 = *(arg1 + 0x24)
char var_18 = *(arg1 + 0x20)
return zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rax, &var_18)

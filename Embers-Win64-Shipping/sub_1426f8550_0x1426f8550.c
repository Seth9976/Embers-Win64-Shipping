// 函数: sub_1426f8550
// 地址: 0x1426f8550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)

if (rax == 0)
    return rax

int64_t rax_1 = sub_140d3c6e0(arg1 + 8)
uint128_t zmm1 = *(arg1 + 0x10)
char var_18 = *(arg1 + 0x20)
int64_t var_14 = *(arg1 + 0x24)
zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rax_1, &var_18)
int64_t rax_3
rax_3.b = 1
return rax_3

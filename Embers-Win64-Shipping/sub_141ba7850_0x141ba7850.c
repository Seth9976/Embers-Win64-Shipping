// 函数: sub_141ba7850
// 地址: 0x141ba7850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)

if (rax == 0)
    return rax

int64_t rax_1 = sub_140d3c6e0(arg1 + 8)
uint128_t zmm2 = *(arg1 + 0x10)
zmm2.q(sx.q(_mm_bsrli_si128(zmm2, 8).d) + rax_1, arg2)
int64_t rax_3
rax_3.b = 1
return rax_3

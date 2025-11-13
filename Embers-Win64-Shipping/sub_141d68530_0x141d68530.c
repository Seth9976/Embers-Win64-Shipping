// 函数: sub_141d68530
// 地址: 0x141d68530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg1 + 8)

if (result != 0)
    int64_t rax = sub_140d3c6e0(arg1 + 8)
    uint128_t zmm1 = *(arg1 + 0x10)
    zmm1.q(sx.q(_mm_bsrli_si128(zmm1, 8).d) + rax, arg2, arg3, zx.q(arg4))
    result.b = 1

return result

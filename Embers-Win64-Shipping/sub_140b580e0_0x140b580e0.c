// 函数: sub_140b580e0
// 地址: 0x140b580e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
uint128_t zmm0 = *sub_140b60a50(&var_18, arg3, arg2)
uint128_t var_28 = zmm0
uint64_t rax_2 = zx.q(_mm_bsrli_si128(zmm0, 8).d)

if (rax_2.d == 0)
    *arg1 = rax_2
    return arg1

int32_t rax_4 = sub_140b57bd0(var_28.q, &var_28:8)
var_28 = var_28
sub_140b60b30(arg1, &var_28, arg4, rax_4)
return arg1

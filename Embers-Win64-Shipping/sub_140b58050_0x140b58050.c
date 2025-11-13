// 函数: sub_140b58050
// 地址: 0x140b58050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
uint128_t zmm0 = *sub_140b60a50(&var_18, *arg2, arg2[1].d)
uint128_t var_28 = zmm0
uint64_t rax_1 = zx.q(_mm_bsrli_si128(zmm0, 8).d)

if (rax_1.d == 0)
    *arg1 = rax_1
    return arg1

int32_t rax_3 = sub_140b57bd0(var_28.q, &var_28:8)
var_28 = var_28
sub_140b60b30(arg1, &var_28, arg3, rax_3)
return arg1

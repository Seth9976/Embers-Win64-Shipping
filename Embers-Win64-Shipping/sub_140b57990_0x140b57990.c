// 函数: sub_140b57990
// 地址: 0x140b57990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d == 0)
    *arg1 = 0
    return arg1

int32_t rax_1 = sub_140b57af0(*arg2, &arg2[1])
uint128_t zmm0 = *arg2
uint128_t var_18 = zmm0
int32_t rcx_1 = _mm_bsrli_si128(zmm0, 8).d

if (rcx_1 == 0)
    *arg1 = 0
    return arg1

var_18:8.d = rcx_1
var_18.q = var_18.q
var_18:0xc.b = 0
var_18 = var_18
sub_140b60890(arg1, &var_18, arg3, rax_1)
return arg1

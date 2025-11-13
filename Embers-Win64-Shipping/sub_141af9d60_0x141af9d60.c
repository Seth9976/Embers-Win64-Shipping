// 函数: sub_141af9d60
// 地址: 0x141af9d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_143052ee0
arg1[0x1d].d = 0x3f800000
arg1[0x1c] = 0
*(arg1 + 0xec) = 0
arg1[0x1e] = 0
arg1[0x1f].d = 0
arg1[0x20] = 0
arg1[0x21].d = 0x3f800000
*(arg1 + 0x10c) = 0
arg1[0x22] = data_143dbb208
arg1[0x23].d = data_143dbb210
uint128_t var_18 = data_1439a9488
bool cond:0 = sub_140cdd5d0(arg1, &var_18) s>= 6
arg1[0xa].b = 1
int32_t rax_1
rax_1.b = cond:0
rax_1.b += 1
*(arg1 + 0x51) = rax_1.b
return arg1

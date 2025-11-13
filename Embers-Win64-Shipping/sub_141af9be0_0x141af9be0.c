// 函数: sub_141af9be0
// 地址: 0x141af9be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_143052be8
arg1[0x1d].d = 0x3f800000
arg1[0x1c] = 0
*(arg1 + 0xf4) = 0
arg1[0x1f].w = 0
*(arg1 + 0xec) = 0x3f800000
arg1[0x20] = 0
arg1[0x21].d = 0x3f800000
*(arg1 + 0x10c) = 0x3f800000
*(arg1 + 0x114) = 0
arg1[0x23].b = 0
int128_t var_18 = data_1439a9488
bool cond:0 = sub_140cdd5d0(arg1, &var_18) s>= 6
arg1[0xa].b = 1
int32_t rax
rax.b = cond:0
rax.b += 1
*(arg1 + 0x51) = rax.b
return arg1

// 函数: sub_141af88c0
// 地址: 0x141af88c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_143050938
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e].d = data_143f2c430
*(arg1 + 0xf4) = 1
arg1[0x1f] = 0
arg1[0x20] = 0
*arg1 = &data_143050c40
arg1[0x19].b = 1
__builtin_memset(&arg1[0x21], 0, 0x16)
int64_t arg_8 = 0
arg_8 = 0
int128_t var_18 = data_1439a9488
bool cond:0 = sub_140cdd5d0(arg1, &var_18) s>= 6
arg1[0xa].b = 1
int32_t rax_2
rax_2.b = cond:0
rax_2.b += 1
*(arg1 + 0x51) = rax_2.b
return arg1

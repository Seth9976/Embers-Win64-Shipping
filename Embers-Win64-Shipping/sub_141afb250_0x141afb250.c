// 函数: sub_141afb250
// 地址: 0x141afb250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_143056478
__builtin_memset(&arg1[0x1c], 0, 0x60)
arg1[0x19].b = 1
int128_t var_18 = data_1439a9488

if (sub_140cdd5d0(arg1, &var_18) s< 4)
    arg1[0xa].b = 1
    *(arg1 + 0x51) = 0
    return arg1

var_18 = data_1439a9488
bool cond:0 = sub_140cdd5d0(arg1, &var_18) s>= 6
arg1[0xa].b = 1
int32_t rax_2
rax_2.b = cond:0
rax_2.b += 1
*(arg1 + 0x51) = rax_2.b
return arg1

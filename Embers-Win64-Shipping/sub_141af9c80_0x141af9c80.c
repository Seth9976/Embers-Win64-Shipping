// 函数: sub_141af9c80
// 地址: 0x141af9c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
*arg1 = &data_143053438
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e].d = data_143f2c430
*(arg1 + 0xf4) = 1
arg1[0x1f] = 0
arg1[0x20] = 0
int128_t var_18 = data_1439a9488
bool cond:0 = sub_140cdd5d0(arg1, &var_18) s>= 6
arg1[0xa].b = 1
int32_t rax_1
rax_1.b = cond:0
rax_1.b += 1
*(arg1 + 0x51) = rax_1.b
void arg_8

if (sub_141a415a0(sub_141a53050(arg1, &arg_8), 1) != 0)
    *(arg1 + 0xc9) = 0x101

return arg1

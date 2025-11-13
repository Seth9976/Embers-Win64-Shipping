// 函数: sub_14075de30
// 地址: 0x14075de30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = **arg3
sub_141a467f0(arg1 + 0x48, arg2, &var_18)
sub_141a467f0(arg1 + 0xe8, arg2, &var_18:4)
sub_141a467f0(arg1 + 0x188, arg2, &var_18:8)
sub_141a467f0(arg1 + 0x228, arg2, &var_18:0xc)
int32_t rax_1 = arg4[1].d + 0x10
arg4[1].d = rax_1

if (rax_1 s> *(arg4 + 0xc))
    sub_1405daba0(arg4)

int128_t* result = *arg4
*result = var_18
return result

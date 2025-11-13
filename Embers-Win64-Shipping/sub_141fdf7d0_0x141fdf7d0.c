// 函数: sub_141fdf7d0
// 地址: 0x141fdf7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38
__builtin_memset(&var_38, 0, 0x18)
int32_t var_20[0x3]
sub_141fdef20(arg1 + 0x10, &var_20, arg3, &var_38)
(*(*(arg1 - 0x28) + 0x2b0))(arg1 - 0x28, &var_20)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int64_t rcx_2 = sx.q((temp1 - temp0) s>> 1)
int512_t result

if ((arg2.b & 1) != 0)
    int32_t var_14[0x3]
    result.o = var_14[rcx_2]
    return result

result.o = var_20[rcx_2]
return result

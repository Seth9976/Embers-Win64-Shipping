// 函数: sub_141cf81b0
// 地址: 0x141cf81b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141cf82b0(arg1, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)
int64_t var_20
var_20.d = arg8
*arg1 = &data_14321d168
arg1[0xd] = &data_14321d190
int32_t var_28
var_28.q = arg1[0x12]
char rax_7 =
    sub_141d0bd60(data_143f36250, &arg1[0xd], arg2, arg3, arg4, arg1[0x11], var_28, var_20.d)

if (rax_7 == 0)
    *(arg1 + 0xb4) = rax_7
    sub_140a536a0(arg1)

return arg1

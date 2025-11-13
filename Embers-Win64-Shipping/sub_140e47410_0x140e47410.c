// 函数: sub_140e47410
// 地址: 0x140e47410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140e59330(arg1, &var_18)
int32_t* var_10
*var_10 = *arg2
*(var_10 + 8) = 0
*(var_10 + 8) = *arg3
__builtin_memset(arg3, 0, 0x20)
var_10[4] = arg3[1].d
var_10[5] = *(arg3 + 0xc)
*(var_10 + 0x18) = arg3[2]
*(var_10 + 0x20) = arg3[3]
int32_t rax_6 = var_18
var_10[0xa] = 0xffffffff
int32_t arg_8
sub_140e61080(arg1, &arg_8, *var_10, var_10, rax_6, nullptr)
return *arg1 + 8 + sx.q(arg_8) * 0x30

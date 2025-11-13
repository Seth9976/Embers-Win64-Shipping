// 函数: sub_141a28f50
// 地址: 0x141a28f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_14098dfb0(arg1, &var_28)
int32_t* var_20
*var_20 = *arg2
var_20[2] = *arg3
*(var_20 + 0x10) = 0
int64_t rbp = sx.q(arg3[4])
int64_t rdi_1 = *(arg3 + 8)
var_20[6] = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&var_20[4], rbp.d, 0)
    memcpy(*(var_20 + 0x10), rdi_1, (rbp << 2).d)
else
    var_20[7] = rbp.d

int32_t rax_2 = var_28
var_20[8] = 0xffffffff
int32_t arg_8
sub_141399450(arg1, &arg_8, *var_20, var_20, rax_2, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 8

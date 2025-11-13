// 函数: sub_1422d4b30
// 地址: 0x1422d4b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_14186d230(arg1, &var_18)
int32_t* var_10
*var_10 = *arg2
sub_1422d9ca0(&var_10[2], arg3)
var_10[0xa] = arg3[8]
void* rdx_2 = &var_10[0x10]
*(var_10 + 0x30) = 0
*(var_10 + 0x38) = 0
*(rdx_2 + 0x10) = 0
*(rdx_2 + 0x18) = 0
*(rdx_2 + 0x1c) = 0x80
void* rax_2 = *(rdx_2 + 0x10)

if (rax_2 != 0)
    rdx_2 = rax_2

*rdx_2 = 0
*(rdx_2 + 8) = 0
var_10[0x18] = 0xffffffff
var_10[0x19] = 0
*(var_10 + 0x70) = 0
var_10[0x1e] = 0
sub_14098dd50(&var_10[0xc], &arg3[0xa])
int32_t rax_3 = var_18
var_10[0x20] = 0xffffffff
int32_t arg_8
sub_1422e20e0(arg1, &arg_8, *var_10, var_10, rax_3, nullptr)
return *arg1 + sx.q(arg_8) * 0x88 + 8

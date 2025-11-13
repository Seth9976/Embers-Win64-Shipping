// 函数: sub_140ae4830
// 地址: 0x140ae4830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140783a30(arg1, &var_18)
int32_t* var_10
*var_10 = *arg2
*(var_10 + 8) = 0
*(var_10 + 8) = *arg3
*arg3 = 0
var_10[4] = arg3[1].d
var_10[5] = *(arg3 + 0xc)
arg3[1] = 0
var_10[6].b = arg3[2].b
*(var_10 + 0x20) = 0
*(var_10 + 0x20) = arg3[3]
arg3[3] = 0
var_10[0xa] = arg3[4].d
var_10[0xb] = *(arg3 + 0x24)
int32_t rax_8 = var_18
arg3[4] = 0
var_10[0xc] = 0xffffffff
int32_t arg_8
sub_140aedf60(arg1, &arg_8, *var_10, var_10, rax_8, nullptr)
return *arg1 + sx.q(arg_8) * 0x38 + 8

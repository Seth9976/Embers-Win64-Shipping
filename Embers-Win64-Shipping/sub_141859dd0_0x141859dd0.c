// 函数: sub_141859dd0
// 地址: 0x141859dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140a696e0(arg1, &var_18)
int64_t* var_10
sub_140596d10(var_10, arg2)
var_10[2] = *arg3
var_10[3].d = 0xffffffff
int32_t rax_1 = var_10[1].d
int16_t* rdx_2

if (rax_1 == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *var_10

int32_t rcx_1 = rax_1 - 1

if (rax_1 == 0)
    rcx_1 = 0

int32_t arg_8
sub_1409249d0(arg1, &arg_8, sub_1405969c0(rcx_1, rdx_2), var_10, var_18, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 0x10

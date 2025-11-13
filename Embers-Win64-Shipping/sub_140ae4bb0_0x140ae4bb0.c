// 函数: sub_140ae4bb0
// 地址: 0x140ae4bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140a3f040(arg1, &var_18)
int64_t* var_10
sub_140596d10(var_10, arg2)
sub_140a3b380(&var_10[2], arg3)
var_10[0x16].d = 0xffffffff
int32_t rax = var_10[1].d
int16_t* rdx_3

if (rax == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *var_10

int32_t rcx_2 = rax - 1

if (rax == 0)
    rcx_2 = 0

int32_t arg_8
sub_140a42a90(arg1, &arg_8, sub_1405969c0(rcx_2, rdx_3), var_10, var_18, nullptr)
return *arg1 + sx.q(arg_8) * 0xb8 + 0x10

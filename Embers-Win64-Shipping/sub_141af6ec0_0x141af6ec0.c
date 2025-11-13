// 函数: sub_141af6ec0
// 地址: 0x141af6ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a30780(arg1, *(arg3 + 0x60), arg3 + 0x68)
*arg1 = &data_143058898
sub_141af6d00(&arg1[9], arg2 + 0xe8)
int64_t arg_10 = arg1[4]
int16_t* var_18
sub_140b63b70(&arg_10, &var_18)
int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 2)
int32_t rax_2 = var_20 + 2
var_20 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_28)

sub_1405a7220(var_28, 2, U"b", 2, 0x3f)
sub_140a2fba0(&var_18, &var_28, 0)
int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int16_t* rdx_5 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx_5 = var_18

int64_t arg_8
sub_140b58260(&arg_8, rdx_5, 1)
int16_t* rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[4] = arg_8
return arg1

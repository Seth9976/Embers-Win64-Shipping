// 函数: sub_140edf370
// 地址: 0x140edf370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
void** const var_b8
memset(&var_b8, 0, 0x90)
sub_140b4c2a0(&var_b8)
int64_t var_28 = 0
var_b8 = &data_142d6ad48
int64_t var_18 = 0
int64_t* var_20 = &arg1[2]
sub_140b552b0(&var_b8, 1)
int64_t rdx_1
rdx_1.b = 1
var_b8[0x1b](&var_b8, rdx_1)
sub_140a1d9d0(&var_b8, arg2, arg3)
*arg1 = 0x18
sub_140b4cb40(&var_b8)
int64_t rcx_6 = *arg2

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg1

// 函数: sub_140d6efb0
// 地址: 0x140d6efb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t arg_8 = 0
void** var_b8
memset(&var_b8, 0, 0x90)
sub_140b4c2a0(&var_b8)
int64_t var_28 = 0
var_b8 = &data_142d6ad48
int64_t var_18 = arg_8
int64_t* var_20 = &arg1[2]
sub_140b552b0(&var_b8, 1)
int64_t rdx_1
rdx_1.b = 1
var_b8[0x1b](&var_b8, rdx_1)
int64_t* var_b0
int64_t rax_3 = *var_b0 + 4

if (rax_3 u> var_b0[1])
    arg_8.d = zx.d(arg2)
    var_b8[0x2a](&var_b8, &arg_8, 4)
else
    *var_b0 = rax_3

*arg1 = 2
sub_140b4cb40(&var_b8)
return arg1

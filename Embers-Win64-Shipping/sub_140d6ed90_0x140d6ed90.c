// 函数: sub_140d6ed90
// 地址: 0x140d6ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
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
int64_t* var_b0
int32_t* rdx_2 = *var_b0

if (&rdx_2[1] u> var_b0[1])
    int32_t* rdx_3 = &arg_10
    void** const* rcx_5 = &var_b8
    char var_8f
    
    if ((var_8f & 0x20) != 0)
        sub_140b54070(rcx_5, rdx_3, arg3)
    else
        var_b8[0x2a](rcx_5, rdx_3, 4)
else
    arg_10 = *rdx_2
    *var_b0 += 4

*arg1 = 0xe
sub_140b4cb40(&var_b8)
return arg1

// 函数: sub_140d6fdb0
// 地址: 0x140d6fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_b8
memset(&var_b8, 0, 0x90)
sub_140b4c2a0(&var_b8)
int64_t var_28 = 0
var_b8 = &data_142d6b230
int64_t var_20 = arg1 + 8
int64_t var_18 = 0x7fffffffffffffff
sub_140b55290(&var_b8, 1)
var_b8[0x1b](&var_b8, 1)
int64_t* var_b0
int32_t* rdx_1 = *var_b0
int32_t arg_8

if (&rdx_1[1] u> var_b0[1])
    int32_t* rdx_2 = &arg_8
    void** const* rcx_5 = &var_b8
    char var_8f
    
    if ((var_8f & 0x20) != 0)
        sub_140b54070(rcx_5, rdx_2, arg2)
    else
        var_b8[0x2a](rcx_5, rdx_2, 4)
else
    arg_8 = *rdx_1
    *var_b0 += 4

int32_t rbx_1 = arg_8
sub_140b4cb40(&var_b8)
return zx.q(rbx_1)

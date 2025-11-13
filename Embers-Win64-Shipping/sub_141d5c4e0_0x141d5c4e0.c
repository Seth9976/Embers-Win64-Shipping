// 函数: sub_141d5c4e0
// 地址: 0x141d5c4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t var_e0 = 0
int64_t var_d8 = 0
int64_t arg_20 = 0
void** const var_c8
memset(&var_c8, 0, 0x90)
sub_140b4c2a0(&var_c8)
int64_t var_38 = 0
var_c8 = &data_142d6ad48
int64_t* var_30 = &var_e0
int64_t var_28 = 0
sub_140b552b0(&var_c8, 1)
int64_t rdx_1
rdx_1.b = 1
var_c8[0x1b](&var_c8, rdx_1)
int64_t* var_c0
int64_t* rdx_2 = *var_c0

if (&rdx_2[1] u> var_c0[1])
    int64_t* rdx_3 = &arg_18
    void** const* rcx_5 = &var_c8
    char var_9f
    
    if ((var_9f & 0x20) != 0)
        sub_140b540d0(rcx_5, rdx_3, arg4)
    else
        var_c8[0x2a](rcx_5, rdx_3, 8)
else
    arg_18 = *rdx_2
    *var_c0 += 8

int32_t var_e8 = 0xf
sub_140b4cb40(&var_c8)
int32_t* result = sub_141d5c1f0(arg1, arg2, &var_e8)
int64_t rcx_8 = var_e0

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)

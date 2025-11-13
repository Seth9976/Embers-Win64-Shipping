// 函数: sub_141d58000
// 地址: 0x141d58000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141d58500(arg1 - 0x28, arg2)

if (rax == 0 || *rax != 0xf)
    return arg3

void** const var_b8
memset(&var_b8, 0, 0x90)
sub_140b4c2a0(&var_b8)
int64_t var_28 = 0
var_b8 = &data_142d6b230
void* var_20 = rax + 8
int64_t var_18 = 0x7fffffffffffffff
sub_140b55290(&var_b8, 1)
var_b8[0x1b](&var_b8, 1)
int64_t* var_b0
int64_t* rdx_1 = *var_b0
int64_t arg_8

if (&rdx_1[1] u> var_b0[1])
    int64_t* rdx_2 = &arg_8
    void** const* rcx_6 = &var_b8
    char var_8f
    
    if ((var_8f & 0x20) != 0)
        sub_140b540d0(rcx_6, rdx_2, arg4)
    else
        var_b8[0x2a](rcx_6, rdx_2, 8)
else
    arg_8 = *rdx_1
    *var_b0 += 8

int64_t rbx_1 = arg_8
sub_140b4cb40(&var_b8)
return rbx_1

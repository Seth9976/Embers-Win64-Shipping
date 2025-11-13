// 函数: sub_141d5c5f0
// 地址: 0x141d5c5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* rax = sub_140596d10(&var_18, arg3)
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
int64_t rdx_2
rdx_2.b = 1
var_c8[0x1b](&var_c8, rdx_2)
sub_140a1d9d0(&var_c8, rax, arg4)
int32_t var_e8 = 0x18
sub_140b4cb40(&var_c8)
int64_t rcx_7 = *rax

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t* result = sub_141d5c1f0(arg1, arg2, &var_e8)
int64_t rcx_9 = var_e0

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)

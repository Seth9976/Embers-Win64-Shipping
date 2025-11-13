// 函数: sub_141d58130
// 地址: 0x141d58130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141d58500(arg1 - 0x28, arg2)

if (rax == 0 || *rax != 2)
    return zx.q(arg3)

void** var_b8
memset(&var_b8, 0, 0x90)
sub_140b4c2a0(&var_b8)
var_b8 = &data_142d6b230
int64_t var_28 = 0
void* var_20 = rax + 8
int64_t var_18 = 0x7fffffffffffffff
sub_140b55290(&var_b8, 1)
var_b8[0x1b](&var_b8, 1)
int64_t* var_b0
int64_t rcx_5 = *var_b0
void* rbx

if (rcx_5 + 4 u<= var_b0[1])
    bool cond:2 = *rcx_5 != 0
    *var_b0 = rcx_5 + 4
    rbx.b = cond:2
    sub_140b4cb40(&var_b8)
    return zx.q(rbx.b)

char arg_8
int32_t rdi_1
rdi_1.b = arg_8 != 0
arg_8.d = rdi_1
var_b8[0x2a](&var_b8, &arg_8, 4)
rbx.b = arg_8.d != 0
sub_140b4cb40(&var_b8)
return zx.q(rbx.b)

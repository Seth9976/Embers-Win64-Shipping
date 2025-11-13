// 函数: sub_141da5170
// 地址: 0x141da5170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr
int32_t var_30 = 0

if (arg4 != &var_38 && arg4[1].d != 0)
    int64_t* rcx = *arg4
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_38)

void var_28
int64_t* rax_2 = sub_140596d10(&var_28, arg5)
arg1[2] = arg3
arg1[1] = arg2
*arg1 = &data_14323ac88
arg1[3] = 0
arg1[4].d = 0

if (&var_38 != &arg1[3] && var_30 != 0)
    int64_t* rcx_2 = var_38
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2, &arg1[3])

sub_140596d10(&arg1[5], rax_2)
arg1[7] = sub_140a387b0()
sub_140745b20(&var_38)
int64_t rcx_5 = *rax_2

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_14323ace0
sub_140745b20(arg4)
int64_t rcx_7 = *arg5

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg1

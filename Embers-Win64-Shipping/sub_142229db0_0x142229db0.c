// 函数: sub_142229db0
// 地址: 0x142229db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28 = nullptr
int32_t var_20 = 0

if (arg5 != &var_28 && arg5[1].d != 0)
    int64_t* rcx = *arg5
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_28)

*arg1 = &data_1433071c0
sub_140d3a3a0(&arg1[1], arg2)
arg1[2] = arg3
arg1[3] = arg4
arg1[4] = 0
arg1[5].d = 0

if (&var_28 != &arg1[4] && var_20 != 0)
    int64_t* rcx_2 = var_28
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2)

arg1[6] = sub_140a387b0()
sub_140745b20(&var_28)
*arg1 = &data_143307218
sub_140745b20(arg5)
return arg1

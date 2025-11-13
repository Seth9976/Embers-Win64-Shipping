// 函数: sub_1426c0630
// 地址: 0x1426c0630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = *arg3
int16_t* var_18
sub_140b63b70(&arg_18, &var_18)
int32_t rbx
int32_t var_10

if (arg4 == 0)
    int16_t* rcx_8 = &data_142d40450
    int16_t* rdx_4
    
    if (arg5[1].d == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *arg5
    
    if (var_10 != 0)
        rcx_8 = var_18
    
    rbx.b = sub_140a54510(rcx_8, rdx_4) == 0
else if (arg4 == 1)
    int16_t* const rcx_7 = &data_142d40450
    int16_t* rdx_3
    
    if (arg5[1].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = *arg5
    
    if (var_10 != 0)
        rcx_7 = var_18
    
    rbx.b = sub_140a54510(rcx_7, rdx_3) != 0
else if (arg4 == 2)
    int16_t* rcx_5
    
    if (arg5[1].d == 0)
        rcx_5 = &data_142d40450
    else
        rcx_5 = *arg5
    
    rbx.b = sub_140a23cf0(&var_18, rcx_5, 1, 0, 0xffffffff) != 0xffffffff
else if (arg4 == 3)
    int16_t* rcx_2
    
    if (arg5[1].d == 0)
        rcx_2 = &data_142d40450
    else
        rcx_2 = *arg5
    
    rbx.b = sub_140a23cf0(&var_18, rcx_2, 1, 0, 0xffffffff) == 0xffffffff
else
    rbx.b = 0
int16_t* rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return zx.q(rbx.b)

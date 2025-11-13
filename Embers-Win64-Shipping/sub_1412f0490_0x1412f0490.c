// 函数: sub_1412f0490
// 地址: 0x1412f0490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0xffff

if (*arg1 != 0xffff)
    int64_t* rbx_1
    
    if (arg4 s< 3)
        int64_t* var_10
        sub_14137b650(&var_10)
        result = sub_141083500(arg2, arg3, arg1, var_10)
        rbx_1 = var_10
    else
        int64_t* var_18
        sub_14137b9a0(&var_18, arg2, arg5, arg4)
        result = sub_141083500(arg2, arg3, arg1, var_18)
        rbx_1 = var_18
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        rbx_1[1].d -= 1
        
        if (result == 1)
            if (rbx_1[2].b != 0)
                return (**rbx_1)(rbx_1, 1)
            
            if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
                return (**rbx_1)(rbx_1, 1)
            
            result = 0
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                result = *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                return sub_1405dcc10(&data_143f02390, rbx_1)

return result

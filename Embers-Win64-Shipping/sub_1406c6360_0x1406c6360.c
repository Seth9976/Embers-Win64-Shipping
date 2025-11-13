// 函数: sub_1406c6360
// 地址: 0x1406c6360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1)
    int64_t* var_30_1
    
    if (arg2[1].d == 0)
        var_30_1 = nullptr
    else
        var_30_1 = *arg2
    
    if (var_30_1 == 0)
        int64_t* var_28_1
        
        if (arg1[1].d == 0)
            var_28_1 = nullptr
        else
            var_28_1 = *arg1
        
        if (var_28_1 != 0)
            (*(*var_28_1 + 0x38))(var_28_1, 0)
            
            if (*arg1 != 0)
                *arg1 = sub_140a84c80(*arg1, 0, 0)
            
            arg1[1].d = 0
    else
        (*(*var_30_1 + 0x40))(var_30_1, arg1)

return arg1

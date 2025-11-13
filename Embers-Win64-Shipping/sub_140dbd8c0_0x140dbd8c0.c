// 函数: sub_140dbd8c0
// 地址: 0x140dbd8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1[4]

if (result != 0)
    if (arg2 == 0)
        return sub_140e19c60(result) __tailcall
    
    return sub_140e25670(result, arg3) __tailcall

if (arg1[3].b == 0)
    int64_t* var_38
    result = (*(*arg1 + 0x28))(arg3, &var_38)
    int64_t* rcx_3 = var_38
    
    if (rcx_3 != 0)
        char rax_3 = data_1439ae51f
        char var_27_1 = 1
        
        if (arg2 == 0)
            rax_3 = data_1439ae51e
        
        char var_28 = rax_3
        int64_t var_20_1 = 0
        int32_t var_18_1 = 0
        result = (*(*rcx_3 + 0x1d8))(rcx_3, &var_28)
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            result = (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*var_30 + 8))(var_30, 1)

return result

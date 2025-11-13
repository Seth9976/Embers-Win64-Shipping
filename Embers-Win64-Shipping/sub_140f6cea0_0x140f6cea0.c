// 函数: sub_140f6cea0
// 地址: 0x140f6cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((**(arg1 + 0x2a8))(arg1 + 0x2a8) s<= 0)
    *arg2 = data_143dbb1f0
else
    void* var_18
    sub_140f48c10(arg1 + 0x2a8, &var_18)
    void* rbx_1 = var_18
    
    if (rbx_1 != data_143e244b0 && *(rbx_1 + 0x1b8) != 0)
        int64_t* rcx_2 = *(rbx_1 + 0x1b0)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(rbx_1 + 0x1b8) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(rbx_1 + 0x1b0)
            
            char arg_8
            (*(*rcx_3 + 0x48))(rcx_3, &arg_8)
            *(rbx_1 + 0x1a8) = arg_8
    
    int64_t* var_10
    
    if (rbx_1 != data_143e244b0 && *(rbx_1 + 0x1a8) != data_1439ae51d)
        sub_140e13cf0(rbx_1, arg2)
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
    else if (var_10 == 0)
        *arg2 = data_143dbb1f0
    else
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
        
        *arg2 = data_143dbb1f0

return arg2

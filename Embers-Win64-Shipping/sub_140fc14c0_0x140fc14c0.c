// 函数: sub_140fc14c0
// 地址: 0x140fc14c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x60d) == 0)
    if (*(arg1 + 0x608) != 0)
        *(arg1 + 0x608) = 0
    
    return sub_1405a46b0(data_143e29f28 + 0x4c8, arg1) __tailcall

char result = sub_140e19840(arg1, arg2)

if (result != 0 && *(arg1 + 0x60e) != 0 && *(arg1 + 0x60f) == 0)
    int64_t* rcx = data_143e29f28
    float var_38
    (*(*rcx + 0x58))(rcx, &var_38)
    
    if (*(arg1 + 0x608) != 1)
    label_140fc154b:
        int32_t var_30_1 = 0x400ccccd
        
        if (*(arg1 + 0x5ec) != 0)
            if (*(arg1 + 0x5f8) != 0)
                int64_t* rcx_1 = *(arg1 + 0x5f0)
                
                if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                    int64_t* rcx_2
                    
                    if (*(arg1 + 0x5f8) == 0)
                        rcx_2 = nullptr
                    else
                        rcx_2 = *(arg1 + 0x5f0)
                    
                    (*(*rcx_2 + 0x48))(rcx_2)
                    *(arg1 + 0x5e8) = arg3.d
            
            *(arg1 + 0x5e8)
        
        int128_t var_28
        sub_140d7c8c0(&var_28, &var_38)
        int128_t var_18 = var_28
        sub_140fab2e0(arg1 + 0x5b8, &var_18)
    else
        arg3 = var_38
        
        if (arg3.d f!= *(arg1 + 0x600))
            goto label_140fc154b
        
        int32_t var_34
        arg3 = var_34
        
        if (not(arg3.d f== *(arg1 + 0x604)))
            goto label_140fc154b
    
    result = &var_38
    
    if (&var_38 != arg1 + 0x600)
        *(arg1 + 0x600) = var_38.q
        *(arg1 + 0x608) = 1

return result

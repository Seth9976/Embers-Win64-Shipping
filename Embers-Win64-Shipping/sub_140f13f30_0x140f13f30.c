// 函数: sub_140f13f30
// 地址: 0x140f13f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result

if (*(arg1 + 0x5b0) == 0)
label_140f13f73:
    
    if (*(arg1 + 0x5b0) != 0)
        int64_t* rcx_1 = *(arg1 + 0x5a8)
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
            int64_t* rcx_2
            
            if (*(arg1 + 0x5b0) == 0)
                rcx_2 = nullptr
            else
                rcx_2 = *(arg1 + 0x5a8)
            
            *(arg1 + 0x598) = (*(*rcx_2 + 0x48))(rcx_2)
    
    int64_t* rax_6
    
    if (*(arg1 + 0x598) != 0)
        rax_6 = sub_140eff630(arg1 + 0x598)
        result = sub_140e15430()
    
    if (*(arg1 + 0x598) == 0 || *rax_6 == &data_143e24500)
        int64_t var_28_1 = arg2
        char var_20_1 = 1
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        *(arg1 + 0x598) = arg2
        *(arg1 + 0x5a0) = 1
        sub_1407473e0(arg1 + 0x5a8, &var_18)
        return sub_140745b20(&var_18)
else
    int64_t* rcx = *(arg1 + 0x5a8)
    
    if (rcx == 0)
        goto label_140f13f73
    
    result = (*(*rcx + 0x28))(rcx)
    
    if (result == 0)
        goto label_140f13f73

return result

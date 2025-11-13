// 函数: sub_140f6d290
// 地址: 0x140f6d290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1406611a0(arg1) == 0)
    if (*(arg1 + 0x2d0) == 0)
    label_140f6d2c9:
        
        if (*(arg1 + 0x570) == 0)
        label_140f6d2ec:
            
            if (*(arg1 + 0x588) == 0)
            label_140f6d312:
                
                if (sub_140f07360(arg1 + 0x590) == 0 && sub_140f07360(arg1 + 0x5a8) == 0
                        && sub_140f7b290(arg1 + 0x5c0) == 0 && sub_140f07360(arg1 + 0x5e8) == 0
                        && sub_140f07360(arg1 + 0x600) == 0)
                    char result = sub_140f07360(arg1 + 0x618)
                    
                    if (result == 0)
                        return result
            else
                int64_t* rcx_2 = *(arg1 + 0x580)
                
                if (rcx_2 == 0)
                    goto label_140f6d312
                
                if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                    goto label_140f6d312
        else
            int64_t* rcx_1 = *(arg1 + 0x568)
            
            if (rcx_1 == 0)
                goto label_140f6d2ec
            
            if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
                goto label_140f6d2ec
    else
        int64_t* rcx = *(arg1 + 0x2c8)
        
        if (rcx == 0)
            goto label_140f6d2c9
        
        if ((*(*rcx + 0x28))(rcx) == 0)
            goto label_140f6d2c9

return 1

// 函数: sub_140f6cfd0
// 地址: 0x140f6cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x558) == 0)
label_140f6cffc:
    
    if (*(arg1 + 0x5a8) == 0)
    label_140f6d01f:
        
        if (*(arg1 + 0x5d8) == 0)
        label_140f6d03e:
            
            if (*(arg1 + 0x628) == 0)
            label_140f6d064:
                
                if (sub_140f07360(arg1 + 0x630) == 0 && sub_140f07360(arg1 + 0x648) == 0
                        && sub_140f7b290(arg1 + 0x660) == 0 && sub_140f07360(arg1 + 0x688) == 0)
                    char result = sub_140f07360(arg1 + 0x6a0)
                    
                    if (result == 0)
                        return result
            else
                int64_t* rcx_3 = *(arg1 + 0x620)
                
                if (rcx_3 == 0)
                    goto label_140f6d064
                
                if ((*(*rcx_3 + 0x28))(rcx_3) == 0)
                    goto label_140f6d064
        else
            int64_t* rcx_2 = *(arg1 + 0x5d0)
            
            if (rcx_2 == 0)
                goto label_140f6d03e
            
            if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                goto label_140f6d03e
    else
        int64_t* rcx_1 = *(arg1 + 0x5a0)
        
        if (rcx_1 == 0)
            goto label_140f6d01f
        
        if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            goto label_140f6d01f
else
    int64_t* rcx = *(arg1 + 0x550)
    
    if (rcx == 0)
        goto label_140f6cffc
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140f6cffc

return 1

// 函数: sub_140f6d0c0
// 地址: 0x140f6d0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1406611a0(arg1) == 0 && (*(*arg1 + 0x1a0))(arg1) == 0)
    void* rbx_1 = arg1[0x56]
    
    if (*(rbx_1 + 0x558) == 0)
    label_140f6d118:
        
        if (*(rbx_1 + 0x5a8) == 0)
        label_140f6d13b:
            
            if (*(rbx_1 + 0x5d8) == 0)
            label_140f6d15e:
                
                if (*(rbx_1 + 0x628) == 0)
                label_140f6d184:
                    
                    if (sub_140f07360(rbx_1 + 0x630) == 0 && sub_140f07360(rbx_1 + 0x648) == 0
                            && sub_140f7b290(rbx_1 + 0x660) == 0
                            && sub_140f07360(rbx_1 + 0x688) == 0
                            && sub_140f07360(rbx_1 + 0x6a0) == 0)
                        if (arg1[0x6b].d == 0)
                            return 0
                        
                        int64_t* rcx_10 = arg1[0x6a]
                        
                        if (rcx_10 == 0)
                            return 0
                        
                        if ((*(*rcx_10 + 0x28))(rcx_10) == 0)
                            return 0
                else
                    int64_t* rcx_4 = *(rbx_1 + 0x620)
                    
                    if (rcx_4 == 0)
                        goto label_140f6d184
                    
                    if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
                        goto label_140f6d184
            else
                int64_t* rcx_3 = *(rbx_1 + 0x5d0)
                
                if (rcx_3 == 0)
                    goto label_140f6d15e
                
                if ((*(*rcx_3 + 0x28))(rcx_3) == 0)
                    goto label_140f6d15e
        else
            int64_t* rcx_2 = *(rbx_1 + 0x5a0)
            
            if (rcx_2 == 0)
                goto label_140f6d13b
            
            if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                goto label_140f6d13b
    else
        int64_t* rcx_1 = *(rbx_1 + 0x550)
        
        if (rcx_1 == 0)
            goto label_140f6d118
        
        if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            goto label_140f6d118

return 1

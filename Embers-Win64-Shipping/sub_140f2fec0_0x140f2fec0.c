// 函数: sub_140f2fec0
// 地址: 0x140f2fec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3a8) == 0)
label_140f2fee8:
    
    if (*(arg1 + 0x470) == 0)
    label_140f2ff07:
        
        if (*(arg1 + 0x490) == 0)
        label_140f2ff26:
            
            if (*(arg1 + 0x4a8) == 0)
                return 0
            
            int64_t* rcx_3 = *(arg1 + 0x4a0)
            
            if (rcx_3 == 0)
                return 0
            
            if ((*(*rcx_3 + 0x28))(rcx_3) == 0)
                return 0
        else
            int64_t* rcx_2 = *(arg1 + 0x488)
            
            if (rcx_2 == 0)
                goto label_140f2ff26
            
            if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                goto label_140f2ff26
    else
        int64_t* rcx_1 = *(arg1 + 0x468)
        
        if (rcx_1 == 0)
            goto label_140f2ff07
        
        if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            goto label_140f2ff07
else
    int64_t* rcx = *(arg1 + 0x3a0)
    
    if (rcx == 0)
        goto label_140f2fee8
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140f2fee8

return 1

// 函数: sub_140eed120
// 地址: 0x140eed120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x320) == 0)
label_140eed148:
    
    if (*(arg1 + 0x490) == 0)
    label_140eed167:
        
        if (*(arg1 + 0x470) == 0)
        label_140eed186:
            
            if (*(arg1 + 0x4d8) == 0)
            label_140eed1ac:
                char result = sub_140f07330(arg1 + 0x350)
                
                if (result == 0)
                    return result
            else
                int64_t* rcx_3 = *(arg1 + 0x4d0)
                
                if (rcx_3 == 0)
                    goto label_140eed1ac
                
                if ((*(*rcx_3 + 0x28))(rcx_3) == 0)
                    goto label_140eed1ac
        else
            int64_t* rcx_2 = *(arg1 + 0x468)
            
            if (rcx_2 == 0)
                goto label_140eed186
            
            if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                goto label_140eed186
    else
        int64_t* rcx_1 = *(arg1 + 0x488)
        
        if (rcx_1 == 0)
            goto label_140eed167
        
        if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            goto label_140eed167
else
    int64_t* rcx = *(arg1 + 0x318)
    
    if (rcx == 0)
        goto label_140eed148
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140eed148

return 1

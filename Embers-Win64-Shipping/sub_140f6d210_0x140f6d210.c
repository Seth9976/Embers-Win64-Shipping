// 函数: sub_140f6d210
// 地址: 0x140f6d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1406611a0(arg1) == 0)
    if (*(arg1 + 0x2c8) == 0)
    label_140f6d241:
        
        if (*(arg1 + 0x328) == 0)
        label_140f6d260:
            
            if (*(arg1 + 0x348) == 0)
                return 0
            
            int64_t* rcx_2 = *(arg1 + 0x340)
            
            if (rcx_2 == 0)
                return 0
            
            if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                return 0
        else
            int64_t* rcx_1 = *(arg1 + 0x320)
            
            if (rcx_1 == 0)
                goto label_140f6d260
            
            if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
                goto label_140f6d260
    else
        int64_t* rcx = *(arg1 + 0x2c0)
        
        if (rcx == 0)
            goto label_140f6d241
        
        if ((*(*rcx + 0x28))(rcx) == 0)
            goto label_140f6d241

return 1

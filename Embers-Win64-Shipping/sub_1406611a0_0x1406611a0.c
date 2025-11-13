// 函数: sub_1406611a0
// 地址: 0x1406611a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1b8) == 0)
label_1406611c8:
    
    if (*(arg1 + 0x1a0) == 0)
    label_1406611e7:
        
        if (*(arg1 + 0x1f0) == 0)
            return 0
        
        int64_t* rcx_2 = *(arg1 + 0x1e8)
        
        if (rcx_2 == 0)
            return 0
        
        if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
            return 0
    else
        int64_t* rcx_1 = *(arg1 + 0x198)
        
        if (rcx_1 == 0)
            goto label_1406611e7
        
        if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            goto label_1406611e7
else
    int64_t* rcx = *(arg1 + 0x1b0)
    
    if (rcx == 0)
        goto label_1406611c8
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_1406611c8

return 1

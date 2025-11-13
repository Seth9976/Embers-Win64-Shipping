// 函数: sub_140f2ff60
// 地址: 0x140f2ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 0x1b8) == 0)
label_140f2ff88:
    
    if (*(arg1 + 0x1a0) == 0)
    label_140f2ffa7:
        
        if (*(arg1 + 0x1f0) == 0)
        label_140f2ffd7:
            
            if (*(arg1 + 0x340) != 0 && *(arg1 + 0x2c0) != 0)
                result = *(arg1 + 0x2c8)
            
            if (*(arg1 + 0x340) == 0 || *(arg1 + 0x2c0) == 0 || result == 0 || *(result + 8) s<= 0)
                result.b = 0
                return result
        else
            int64_t* rcx_2 = *(arg1 + 0x1e8)
            
            if (rcx_2 == 0)
                goto label_140f2ffd7
            
            result = (*(*rcx_2 + 0x28))(rcx_2)
            
            if (result.b == 0)
                goto label_140f2ffd7
    else
        int64_t* rcx_1 = *(arg1 + 0x198)
        
        if (rcx_1 == 0)
            goto label_140f2ffa7
        
        result = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (result.b == 0)
            goto label_140f2ffa7
else
    int64_t* rcx = *(arg1 + 0x1b0)
    
    if (rcx == 0)
        goto label_140f2ff88
    
    result = (*(*rcx + 0x28))(rcx)
    
    if (result.b == 0)
        goto label_140f2ff88

result.b = 1
return result

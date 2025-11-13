// 函数: png_get_tRNS
// 地址: 0x1403cf1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (arg1 != 0 && arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
    if (*(arg2 + 0x25) != 3)
        if (arg5 == 0)
            result = 0
            
            if (arg3 != 0)
                *arg3 = 0
        else
            *arg5 = arg2 + 0x70
            result = 0x10
            
            if (arg3 != 0)
                *arg3 = 0
        
        goto label_1403cf250
    
    if (arg3 != 0)
        *arg3 = *(arg2 + 0x68)
        result = 0x10
        
        if (arg5 != 0)
            goto label_1403cf238
        
        goto label_1403cf250
    
    result = 0
    
    if (arg5 == 0)
    label_1403cf250:
        
        if (arg4 != 0)
            *arg4 = zx.d(*(arg2 + 0x22))
            return 0x10
    else
    label_1403cf238:
        *arg5 = arg2 + 0x70
        
        if (arg4 != 0)
            *arg4 = zx.d(*(arg2 + 0x22))
            return 0x10

return result

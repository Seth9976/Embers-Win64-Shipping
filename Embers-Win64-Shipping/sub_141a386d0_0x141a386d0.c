// 函数: sub_141a386d0
// 地址: 0x141a386d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = *arg1
uint32_t result

if (r9 == 2)
label_141a386fc:
    char rcx_1 = *arg2
    
    if (rcx_1 == 2)
    label_141a38720:
        char r10_3 = arg1[8]
        bool cond:2_1
        
        if (r10_3 == 2 || rcx_1 == 2 || *(arg1 + 0xc) != *(arg2 + 4))
            char rcx_2 = arg2[8]
            
            if (rcx_2 != 2 && r9 != 2 && *(arg2 + 0xc) == *(arg1 + 4))
                if (rcx_2 == 1)
                    cond:2_1 = r9 == 0
                    goto label_141a38741
                
                if (rcx_2 == 0 && r9 == 1)
                    result.b = 1
                    return result
        else if (r10_3 == 1)
            cond:2_1 = rcx_1 == 0
        label_141a38741:
            
            if (cond:2_1)
                result.b = 1
                return result
        else if (r10_3 == 0 && rcx_1 == 1)
            return zx.q(rcx_1)
    else
        result = zx.d(arg2[8])
        
        if (result.b == 2)
            goto label_141a38720
        
        int32_t r10_2 = *(arg2 + 4)
        int32_t temp0_1 = *(arg2 + 0xc)
        
        if (r10_2 s<= temp0_1)
            if (r10_2 != temp0_1)
                goto label_141a38720
            
            if (rcx_1 != 0 && result.b != 0)
                goto label_141a38720
else
    result = zx.d(arg1[8])
    
    if (result.b == 2)
        goto label_141a386fc
    
    int32_t rcx = *(arg1 + 4)
    int32_t r10_1 = *(arg1 + 0xc)
    
    if (rcx s<= r10_1)
        if (rcx != r10_1)
            goto label_141a386fc
        
        if (r9 != 0 && result.b != 0)
            goto label_141a386fc

result.b = 0
return result

// 函数: sub_141a34c10
// 地址: 0x141a34c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*arg1)

if (result.b == 2)
label_141a34c62:
    
    if (result.b != *arg2 || (result.b != 2 && *(arg1 + 4) != *(arg2 + 4)))
        result.b = 0
        return result
    
    result = zx.d(arg1[8])
    
    if (result.b != arg2[8])
        result.b = 0
        return result
    
    if (result.b != 2 && *(arg1 + 0xc) != *(arg2 + 0xc))
        result.b = 0
        return result
else
    char r8_1 = arg1[8]
    
    if (r8_1 == 2)
        goto label_141a34c62
    
    int32_t r9_1 = *(arg1 + 4)
    int32_t temp0_1 = *(arg1 + 0xc)
    
    if (r9_1 s<= temp0_1 && (r9_1 != temp0_1 || (result.b != 0 && r8_1 != 0)))
        goto label_141a34c62
    
    char r8_2 = *arg2
    
    if (r8_2 == 2)
        goto label_141a34c62
    
    char r9_2 = arg2[8]
    
    if (r9_2 == 2)
        goto label_141a34c62
    
    int32_t r10_1 = *(arg2 + 4)
    int32_t temp1_1 = *(arg2 + 0xc)
    
    if (r10_1 s<= temp1_1)
        if (r10_1 != temp1_1)
            goto label_141a34c62
        
        if (r8_2 != 0 && r9_2 != 0)
            goto label_141a34c62

result.b = 1
return result

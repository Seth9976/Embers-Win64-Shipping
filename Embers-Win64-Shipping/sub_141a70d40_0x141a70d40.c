// 函数: sub_141a70d40
// 地址: 0x141a70d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*arg1)

if (result.b != 2)
    char r8_1 = arg1[8]
    
    if (r8_1 == 2)
        goto label_141a70d92
    
    int32_t r9_1 = *(arg1 + 4)
    int32_t temp0_1 = *(arg1 + 0xc)
    
    if (r9_1 s> temp0_1 || (r9_1 == temp0_1 && (result.b == 0 || r8_1 == 0)))
        char r8_2 = *arg2
        
        if (r8_2 != 2)
            char r9_2 = arg2[8]
            
            if (r9_2 != 2)
                int32_t r10_1 = *(arg2 + 4)
                int32_t temp1_1 = *(arg2 + 0xc)
                
                if (r10_1 s> temp1_1 || (r10_1 == temp1_1 && (r8_2 == 0 || r9_2 == 0)))
                    goto label_141a70dba

label_141a70d92:

if (result.b == *arg2 && (result.b == 2 || *(arg1 + 4) == *(arg2 + 4)))
    result = zx.d(arg1[8])
    
    if (result.b == arg2[8] && (result.b == 2 || *(arg1 + 0xc) == *(arg2 + 0xc)))
    label_141a70dba:
        
        if (*(arg1 + 0x10) == *(arg2 + 0x10) && *(arg1 + 0x14) == *(arg2 + 0x14)
                && *(arg1 + 0x18) == *(arg2 + 0x18) && *(arg1 + 0x1c) == *(arg2 + 0x1c))
            result.b = 1
            return result

result.b = 0
return result

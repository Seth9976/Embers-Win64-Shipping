// 函数: sub_141965330
// 地址: 0x141965330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t r9 = 0
int32_t* rbx_1 = arg2 - arg1
int32_t* result = arg1

while (true)
    int32_t r10_1 = *result
    int32_t temp0_1 = *(rbx_1 + result)
    
    if (r10_1 u> temp0_1)
        break
    
    if (r10_1 u>= temp0_1)
        r9 += 1
        result = &result[1]
        
        if (r9 u< 6)
            continue
    
    while (true)
        result = zx.q(*(arg1 + rbx_1))
        int32_t temp1_1 = *arg1
        
        if (result.d u> temp1_1)
            break
        
        if (result.d u>= temp1_1)
            r8 += 1
            arg1 += 4
            
            if (r8 u< 6)
                continue
        
        result.b = 1
        return result
    
    break

result.b = 0
return result

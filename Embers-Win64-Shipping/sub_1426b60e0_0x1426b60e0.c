// 函数: sub_1426b60e0
// 地址: 0x1426b60e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0xc0)
int64_t* result

while (true)
    if (r10 == 0)
        result.b = 0
        return result
    
    if (r10 == arg2)
        break
    
    int32_t r8_1 = *(r10 + 0x40)
    
    if (r8_1 == *(arg2 + 0x40))
        result = *(arg2 + 0x38)
        
        if (r8_1 == 0)
            break
        
        int64_t* r9_2 = *(r10 + 0x38) - result
        
        while (*(r9_2 + result) == *result)
            int64_t rdx = *(r9_2 + result + 8)
            void* rcx_1 = result[1]
            bool cond:0_1
            
            if (rdx == 0)
                cond:0_1 = rcx_1 != 0
            else
                if (rcx_1 == 0)
                    break
                
                cond:0_1 = *(rdx + 0x10) != *(rcx_1 + 0x10)
            
            if (cond:0_1)
                break
            
            result = &result[3]
            int32_t temp0_1 = r8_1
            r8_1 -= 1
            
            if (temp0_1 == 1)
                goto label_1426b6145
    
    r10 = *(r10 + 0x30)

label_1426b6145:
result.b = 1
return result

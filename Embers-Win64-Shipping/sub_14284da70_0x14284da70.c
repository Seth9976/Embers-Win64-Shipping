// 函数: sub_14284da70
// 地址: 0x14284da70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg3
int64_t r8 = 1
uint64_t result

if (r10 u<= 1)
    if (r10 == 0)
        while (arg2 u> 1 || arg1 u> 1)
            r8 += 1
            uint64_t rax_4 = arg2 u>> 1
            
            if (arg2 u<= 1)
                rax_4 = arg2
            
            arg2 = rax_4
            result = arg1 u>> 1
            
            if (arg1 u<= 1)
                result = arg1
            
            arg1 = result
    
    *arg3 = r8
else
    while (arg2 u> 1 || arg1 u> 1)
        r8 += 1
        uint64_t rax_1 = arg2 u>> 1
        
        if (arg2 u<= 1)
            rax_1 = arg2
        
        arg2 = rax_1
        result = arg1 u>> 1
        
        if (arg1 u<= 1)
            result = arg1
        
        arg1 = result
    
    if (r10 u> r8)
        result.b = 0
        return result

result.b = 1
return result

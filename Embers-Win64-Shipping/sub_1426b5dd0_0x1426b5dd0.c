// 函数: sub_1426b5dd0
// 地址: 0x1426b5dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

do
    result = sx.q(*(arg1 + 0x40))
    int32_t r10_1 = 0
    
    if (result.d s> 0)
        int64_t result_1 = result
        result = *(arg1 + 0x38)
        int64_t r9_1 = 0
        
        do
            if (*result == *arg2)
                return *(arg1 + 0x4c) + r10_1.b
            
            r10_1 += 1
            r9_1 += 1
            result += 0x18
        while (r9_1 s< result_1)
    
    arg1 = *(arg1 + 0x30)
    
    if (arg1 == 0)
        break
while (arg3 == 0)

result.b = 0xff
return result

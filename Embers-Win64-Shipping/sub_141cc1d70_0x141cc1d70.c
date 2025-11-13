// 函数: sub_141cc1d70
// 地址: 0x141cc1d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
int64_t r9 = sx.q(arg2[1].d)

if (result.d == r9.d)
    int64_t* r8_1 = *arg1
    void* r10_1 = &r8_1[result]
    
    while (true)
        if (r8_1 == r10_1)
            result.b = 1
            return result
        
        if (r9.d == 0)
            break
        
        result = *arg2
        int64_t rdx = result + (r9 << 3)
        
        if (result == rdx)
            break
        
        while (*result != *r8_1)
            result += 8
            
            if (result == rdx)
                goto label_141cc1d80
        
        r8_1 = &r8_1[1]

label_141cc1d80:
result.b = 0
return result

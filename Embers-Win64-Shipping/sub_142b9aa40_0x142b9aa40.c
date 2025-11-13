// 函数: sub_142b9aa40
// 地址: 0x142b9aa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = *arg1
char* r8 = *arg2

if (*result == *r8)
    void* r8_1 = r8 - result
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*result)
        i = zx.d(*(result + r8_1))
        
        if (rdx != i)
            break
        
        result = &result[1]
    while (i != 0)
    
    if (rdx - i == 0)
        result.b = 1
        return result

result.b = 0
return result

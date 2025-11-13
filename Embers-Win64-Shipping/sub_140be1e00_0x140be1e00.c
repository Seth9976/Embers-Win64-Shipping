// 函数: sub_140be1e00
// 地址: 0x140be1e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x48))

if (result.d s> 0)
    int64_t result_1 = result
    int64_t r8_1 = 0
    result = *(arg1 + 0x40) + 8
    
    do
        if (*result == arg2)
            result.b = 1
            return result
        
        r8_1 += 1
        result += 0x10
    while (r8_1 s< result_1)

result.b = 0
return result

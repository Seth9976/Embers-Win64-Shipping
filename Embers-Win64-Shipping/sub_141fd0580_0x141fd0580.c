// 函数: sub_141fd0580
// 地址: 0x141fd0580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x20)
uint64_t result

if (r10 != 0 && *(arg1 + 0x30) != 0)
    result = *(arg1 + 0x10)
    
    if (result != 0 && result != -8)
        int32_t var_18_1 = 0
        
        if (sub_1422b19f0(r10, 0, *(result + 0x820), arg2).b == 0)
            result.b = 1
            return result

result.b = 0
return result

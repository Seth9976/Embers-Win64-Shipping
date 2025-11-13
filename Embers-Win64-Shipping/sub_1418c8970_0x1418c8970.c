// 函数: sub_1418c8970
// 地址: 0x1418c8970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *arg1
int32_t r8 = 0
void* result

if (r9 != 0)
    result = &arg1[1]
    
    do
        if (*result == arg2)
            result.b = 1
            return result
        
        r8 += 1
        result += 8
    while (r8 u< r9)

result.b = 0
return result

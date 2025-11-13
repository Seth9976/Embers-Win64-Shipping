// 函数: sub_140f07390
// 地址: 0x140f07390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x20)

if (result != 0)
    if (result != 1)
        result.b = 0
        return result
    
    result = *(**(arg1 + 0x18) + 8)
    int32_t rcx_1 = result - 1
    
    if (result == 0)
        rcx_1 = 0
    
    if (rcx_1 != 0)
        result.b = 0
        return result

result.b = 1
return result

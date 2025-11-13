// 函数: sub_141fba7f0
// 地址: 0x141fba7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1

if (result != 0 && (*(result + 0x6c) & 0x200200) == 0)
    result = arg1[1]
    
    if (result == 0)
        result.b = 1
        return result
    
    if (*(result + 4) == 3 && *(result + 0xc) == 1)
        result.b = 1
        return result

result.b = 0
return result

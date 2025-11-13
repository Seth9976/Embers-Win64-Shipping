// 函数: sub_1426ce480
// 地址: 0x1426ce480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg2 + 0xc0)

if (result != 0)
    result = *(result + 0x2d8)
    
    if (result != 0 && (*(result + 0x1b9) & 0x20) != 0 && *(result + 0x1b8) == 0)
        result.b = 1
        return result

result.b = 0
return result

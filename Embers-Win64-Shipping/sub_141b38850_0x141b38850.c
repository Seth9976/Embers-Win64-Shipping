// 函数: sub_141b38850
// 地址: 0x141b38850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 4
    char* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result + 4) = *(r8 + result + 4)
        *(result - 4) = *(r8 + result - 4)
        *result = *(r8 + result)
        *(result + 0x14) = *(r8 + result + 0x14)
        *(result + 0x1c) = *(r8 + result + 0x1c)
        result += 0x28
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

// 函数: sub_141a85b40
// 地址: 0x141a85b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 0x10
    char* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result - 8) = *(r8 + result - 8)
        *(result - 6) = *(r8 + result - 6)
        *result = *(r8 + result)
        result += 0x18
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

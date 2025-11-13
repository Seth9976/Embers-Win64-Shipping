// 函数: sub_140e29d80
// 地址: 0x140e29d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 0xa
    char* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result - 2) = *(r8 + result - 2)
        *result = *(r8 + result)
        *(result + 2) = *(r8 + result + 2)
        *(result + 6) = *(r8 + result + 6)
        *(result + 0xe) = *(r8 + result + 0xe)
        result += 0x20
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

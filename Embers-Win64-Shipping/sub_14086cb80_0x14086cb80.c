// 函数: sub_14086cb80
// 地址: 0x14086cb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 0x10
    char* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result - 8) = *(r8 + result - 8)
        *result = *(r8 + result)
        *(result + 4) = *(r8 + result + 4)
        result += 0x20
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

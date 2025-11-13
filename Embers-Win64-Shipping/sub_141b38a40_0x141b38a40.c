// 函数: sub_141b38a40
// 地址: 0x141b38a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 0x24
    char* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result - 0x1c) = *(r8 + result - 0x1c)
        *(result - 0x14) = *(r8 + result - 0x14)
        *(result - 0x10) = *(r8 + result - 0x10)
        *(result + 4) = *(r8 + result + 4)
        *(result - 4) = *(r8 + result - 4)
        *result = *(r8 + result)
        *(result + 0x1c) = *(r8 + result + 0x1c)
        *(result + 0x2c) = *(r8 + result + 0x2c)
        *(result + 0x3c) = *(r8 + result + 0x3c)
        *(result + 0x4c) = *(r8 + result + 0x4c)
        *(result + 0x4d) = *(r8 + result + 0x4d)
        result -= -0x80
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

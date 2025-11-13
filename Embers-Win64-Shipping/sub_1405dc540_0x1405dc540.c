// 函数: sub_1405dc540
// 地址: 0x1405dc540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 0x2c
    int32_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result - 0x2c) = *(r8 + result - 0x2c)
        *(result - 0x28) = *(r8 + result - 0x28)
        *(result - 0x18) = *(r8 + result - 0x18)
        *(result - 8) = *(r8 + result - 8)
        *result = *(r8 + result)
        *(result + 4) = *(r8 + result + 4)
        *(result + 8) = *(r8 + result + 8)
        *(result + 0xc) = *(r8 + result + 0xc)
        result += 0x3c
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

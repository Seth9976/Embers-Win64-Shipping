// 函数: sub_141a76ca0
// 地址: 0x141a76ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 0x28
    int64_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result - 0x28) = *(r8 + result - 0x28)
        *(result - 0x24) = *(r8 + result - 0x24)
        *(result - 0x20) = *(r8 + result - 0x20)
        *(result - 0x18) = *(r8 + result - 0x18)
        *(result - 0x10) = *(r8 + result - 0x10)
        *(result - 0xc) = *(r8 + result - 0xc)
        *(result - 8) = *(r8 + result - 8)
        *result = *(r8 + result)
        *(result + 8) = *(r8 + result + 8)
        *(result + 0xc) = *(r8 + result + 0xc)
        result += 0x38
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

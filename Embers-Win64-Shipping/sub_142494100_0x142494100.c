// 函数: sub_142494100
// 地址: 0x142494100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 0x30
    int128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result - 0x30) = *(r8 + result - 0x30)
        *(result - 0x28) = *(r8 + result - 0x28)
        *(result - 0x20) = *(r8 + result - 0x20)
        *(result - 0x10) = *(r8 + result - 0x10)
        *result = *(r8 + result)
        result += 0x40
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

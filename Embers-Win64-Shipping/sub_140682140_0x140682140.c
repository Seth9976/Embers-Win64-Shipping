// 函数: sub_140682140
// 地址: 0x140682140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    result = arg2 + 8
    int64_t* r8 = arg3 - arg2
    int32_t i
    
    do
        *(result - 8) = *(r8 + result - 8)
        *result = *(r8 + result)
        *(result + 8) = *(r8 + result + 8)
        *(result + 0x10) = *(r8 + result + 0x10)
        *(result + 0x18) = *(r8 + result + 0x18)
        result += 0x28
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

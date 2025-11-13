// 函数: sub_141a858a0
// 地址: 0x141a858a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t* result

if (arg4 != 0)
    result = arg2 + 0x50
    uint128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        result[-5].q = *(r8 + result - 0x50)
        *(result - 0x48) = *(r8 + result - 0x48)
        result[-4] = *(r8 + result - 0x40)
        result[-3].q = *(r8 + result - 0x30)
        *(result - 0x28) = *(r8 + result - 0x28)
        result[-2] = *(r8 + result - 0x20)
        result[-1] = *(r8 + result - 0x10)
        *result = *(r8 + result)
        result = &result[6]
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result

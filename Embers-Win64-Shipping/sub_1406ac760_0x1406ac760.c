// 函数: sub_1406ac760
// 地址: 0x1406ac760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 == 0x66)
    *(arg1 + 0x74) = 0xc
    result.b = 1
    return result

if (arg2 == 0x6e)
    *(arg1 + 0x74) = 0xa
    result.b = 1
    return result

if (arg2 == 0x72)
    *(arg1 + 0x74) = 0xd
    result.b = 1
    return result

if (arg2 == 0x74)
    *(arg1 + 0x74) = 9
    result.b = 1
    return result

if (arg2 != 0x76)
    result.b = 0
    return result

*(arg1 + 0x74) = 0xb
result.b = 1
return result

// 函数: sub_142b96700
// 地址: 0x142b96700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = *(arg1 + 0x38)

if (result u>= *(arg1 + 0x40))
    result.b = 0
    return result

char rdx = *result
*(arg1 + 0x38) = &result[1]
return zx.q(rdx)

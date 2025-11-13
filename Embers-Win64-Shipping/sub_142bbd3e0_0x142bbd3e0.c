// 函数: sub_142bbd3e0
// 地址: 0x142bbd3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*arg1 != 0 && *(arg1 + 0x10) == arg2 && *(arg1 + 0x14) == arg3)
    if (arg3 != 0)
        result = memcmp(arg4, *(arg1 + 0x18), zx.q(arg3) << 2)
    
    if (arg3 == 0 || result == 0)
        result.b = 0
        return result

result.b = 1
return result

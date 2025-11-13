// 函数: sub_142ae8cc0
// 地址: 0x142ae8cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x2c))

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> result)
    arg2 = result

*(arg1 + 0x28) = arg2.d

if (arg3 == 0)
    if (arg2 s> 0)
        result.b = 1
        return result
else if (arg2 s< result)
    result.b = 1
    return result

result.b = 0
return result

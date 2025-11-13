// 函数: sub_142c7aee0
// 地址: 0x142c7aee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u>= 4 && 0x5252452d == *arg2)
    *arg4 = 0x2d
    return 0x52524501

if (*(arg1 + 0x708) != 2)
    if (arg3 u>= 3 && 0x4f2b == *arg2 && 0x4b == *(arg2 + 2))
        *arg4 = 0x2b
        return 1
    
    if (arg3 u< 1 || 0x2b != *arg2)
        return 0
else if (arg3 u>= 1 && *arg2 == 0x2e)
    *arg4 = 0x2b
    return 1

*arg4 = 0x2a
return 1

// 函数: sub_141ac62d0
// 地址: 0x141ac62d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141ea6180(arg1 + 0xd8, arg3)

if (result.b != 0)
    if (*(arg1 + 0xd8) != *(arg1 + 0xc8))
        result = sub_141ea6180(arg1 + 0xc8, arg3)
    
    if (*(arg1 + 0xd8) == *(arg1 + 0xc8) || result.b != 0)
        result.b = 1
        return result

result.b = 0
return result

// 函数: sub_142a58110
// 地址: 0x142a58110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 != arg2)
    if (sub_142a57090(arg1, arg2).b == 0 || *(arg1 + 0x14c) != *(arg2 + 0x14c)
            || *(arg1 + 0x150) != *(arg2 + 0x150) || *(arg1 + 0x154) != *(arg2 + 0x154)
            || *(arg1 + 0x158) != *(arg2 + 0x158) || *(arg1 + 0x148) != *(arg2 + 0x148)
            || *(arg1 + 0x15c) != *(arg2 + 0x15c))
        result.b = 0
        return result
    
    if (sub_142a8c280(arg1 + 0x15e, arg2 + 0x15e) != 0 || *(arg1 + 0x15d) != *(arg2 + 0x15d)
            || *(arg1 + 0x168) != *(arg2 + 0x168))
        result.b = 0
        return result

result.b = 1
return result

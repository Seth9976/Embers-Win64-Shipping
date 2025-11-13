// 函数: sub_142a55ca0
// 地址: 0x142a55ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    arg2 += *(arg1 + 0xc)
else if (arg3 == 1)
    arg2 += *(arg1 + 0x10)
else if (arg3 == 2)
    arg2 += *(arg1 + 0x14)
else if (arg3 != 3)
    if (arg3 != 4)
        return 0xffffffff
    
    arg2 += *(arg1 + 8)

int32_t result = *(arg1 + 0xc)

if (arg2 s>= result)
    result = arg2
    
    if (arg2 s> *(arg1 + 0x14))
        result = *(arg1 + 0x14)

*(arg1 + 0x10) = result
return result

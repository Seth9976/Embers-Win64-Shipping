// 函数: sub_142be4460
// 地址: 0x142be4460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 6)
    return 0

switch (arg2)
    case 0
        return arg1 + 0x100
    case 1
        return arg1 + 0x170
    case 2
        if (*(arg1 + 0x208) != 0xffff)
            return arg1 + 0x208
        
        return nullptr
    case 3
        return arg1 + 0x138
    case 4
        if (*(arg1 + 0x190) == 0)
            return nullptr
        
        return arg1 + 0x198
    case 5
        return arg1 + 0x270
    case 6
        int32_t* result = arg1 + 0x308
        
        if (*result == 0)
            return nullptr
        
        return result

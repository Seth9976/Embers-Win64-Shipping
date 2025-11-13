// 函数: sub_1406c79f0
// 地址: 0x1406c79f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg3 u> 0x10)
    if (*(arg1 + 0x200) == 0)
        if (*(arg1 + 0x200) != 0 || arg3 != 0)
            *(arg1 + 0x200) = sub_140a84c80(*(arg1 + 0x200), sx.q(arg3) * arg4, 0)
        
        return memmove(*(arg1 + 0x200), arg1, arg2 * 0x20)
    
    result = arg1 + 0x200
    
    if (*result != 0 || arg3 != 0)
        result = sub_140a84c80(*(arg1 + 0x200), sx.q(arg3) * arg4, 0)
        *(arg1 + 0x200) = result
else
    result = *(arg1 + 0x200)
    
    if (result != 0)
        memmove(arg1, *(arg1 + 0x200), arg2 * 0x20)
        
        if (*(arg1 + 0x200) == 0)
            return nullptr
        
        result = sub_140a84c80(*(arg1 + 0x200), 0, 0)
        *(arg1 + 0x200) = result

return result

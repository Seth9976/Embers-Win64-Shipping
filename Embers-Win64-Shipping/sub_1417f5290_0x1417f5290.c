// 函数: sub_1417f5290
// 地址: 0x1417f5290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1417f0f30(arg2, arg1 + 0x410)

if (result.b != 0)
    result = *(arg1 + 0xa8)
    
    if (result != 0)
    label_1417f52cf:
        result = sub_14243ade0(result)
        
        if (result.b != 0 && *(arg1 + 0x8a) s< 0)
            return sub_1417f37b0(arg1, *(arg1 + 0x408), *(arg1 + 0x410))
    else
        result = sub_141ee69e0(arg1)
        
        if (result != 0)
            goto label_1417f52cf

return result

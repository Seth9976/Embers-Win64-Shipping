// 函数: sub_1413d7190
// 地址: 0x1413d7190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0xf78) == 0)
    result = *(arg1 + 0xf70)

if (*(arg1 + 0xf78) != 0 || *(arg1 + 0xf74) != result)
    int32_t i = 0
    
    if (*(arg1 + 0xdc0) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            sub_141393890(*(rsi_1 + *(arg1 + 0xdb8)))
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0xdc0))
    
    result = *(arg1 + 0xf70)
    *(arg1 + 0xf74) = result
    *(arg1 + 0xf78) = 0

return result

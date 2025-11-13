// 函数: sub_1406c4a90
// 地址: 0x1406c4a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x708)

if (result != 1)
    if (result != 0)
        return 2
    
    if (*(arg1 + 0x220) == 0)
        if (*(arg1 + 0x228) != 0)
            return 1
        
        return 2
else if (*(arg1 + 0x228) != 0)
    return result

return 0

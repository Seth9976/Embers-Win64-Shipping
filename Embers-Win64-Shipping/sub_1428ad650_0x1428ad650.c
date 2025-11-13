// 函数: sub_1428ad650
// 地址: 0x1428ad650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x5c) = arg2
*(arg1 + 0x60) = 0

if (arg2 == 1)
    *(arg1 + 0x58) = 0
else
    if (arg2 == 2)
        *(arg1 + 0x58) = 1
        return 1
    
    if (arg2 == 3)
        *(arg1 + 0x58) = 0

return 1

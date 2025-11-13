// 函数: sub_1428a7b80
// 地址: 0x1428a7b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return 0

if (*(arg1 + 0x24) != 0)
    if (*(arg1 + 0x20) != 0)
        sub_1428f4c10(*(arg1 + 0x30))
    
    *(arg1 + 0x20) = 0
    *(arg1 + 0x28) = 0

return 1

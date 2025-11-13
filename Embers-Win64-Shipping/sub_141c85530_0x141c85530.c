// 函数: sub_141c85530
// 地址: 0x141c85530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1b9) == 0)
    *(arg1 + 0x1b9) = 1
    return 

if (*(arg1 + 0x58) == 0)
    return 

*(arg1 + 0x58) = 0
jump(*(**(arg1 + 0x70) + 0x10))

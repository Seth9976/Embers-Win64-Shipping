// 函数: sub_142878430
// 地址: 0x142878430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

switch (*(arg1 + 0x5c) - 2)
    case 0
        return 0x102
    case 1, 0x24
        return 0x4e20
    case 2, 5
        return *(arg1 + 0x5d8)
    case 3, 7, 0x25
        return 0x4000
    case 4
        return 0x19000
    case 8
        if (*arg1 == 0x100)
            return 3
        
        return 1
    case 9
        return 0x40
    case 0x2b
        return 1

return 0

// 函数: sub_142c63aa0
// 地址: 0x142c63aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 0x600007 u<= 9)
    switch (arg2)
        case 0x600007
            *arg3 = *(arg1 + 0x8d8)
            return 0
        case 0x600008
            *arg3 = *(arg1 + 0x8d0)
            return 0
        case 0x600009
            *arg3 = *(arg1 + 0x900)
            return 0
        case 0x60000a
            *arg3 = *(arg1 + 0x908)
            return 0
        case 0x60000f
            if ((*(arg1 + 0x8f0) & 0x40) != 0)
                *arg3 = *(arg1 + 0x8c0)
                return 0
            
            *arg3 = -1
            return 0
        case 0x600010
            if ((*(arg1 + 0x8f0) & 0x20) != 0)
                *arg3 = *(arg1 + 0x8c8)
                return 0
            
            *arg3 = -1
            return 0

return 0x30

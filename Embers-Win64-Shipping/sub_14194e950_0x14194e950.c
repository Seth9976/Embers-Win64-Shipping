// 函数: sub_14194e950
// 地址: 0x14194e950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u<= 0x300)
    if (arg1 == 0x300)
        return 2
    
    if (arg1 == 1)
        return zx.q(arg1)
else if (arg1 u<= 0x8001)
    if (arg1 == 0x8001)
        return 0xa
    
    uint64_t rcx = zx.q(arg1 - 0x301)
    
    if (rcx.d u<= 6)
        switch (rcx)
            case 0
                return 3
            case 1
                return 4
            case 2
                return 5
            case 3
                return 6
            case 4
                return 7
            case 5
                return 8
            case 6
                return 9
else if (arg1 == 0x8002)
    return 0xb

return 0

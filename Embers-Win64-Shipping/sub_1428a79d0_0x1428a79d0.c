// 函数: sub_1428a79d0
// 地址: 0x1428a79d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 - 8 u<= 0x61)
    switch (arg2)
        case 8
            return zx.q(*(arg1 + 0x24))
        case 9
            *(arg1 + 0x24) = arg3
            return 1
        case 0xb, 0xc
            return 1
        case 0x68
            if (arg1 != 0 && *(arg1 + 0x24) != 0)
                if (*(arg1 + 0x20) != 0)
                    sub_1428f4c10(*(arg1 + 0x30))
                
                *(arg1 + 0x20) = 0
                *(arg1 + 0x28) = 0
            
            *(arg1 + 0x30) = *arg4
            *(arg1 + 0x24) = arg3
            *(arg1 + 0x20) = 1
            return 1
        case 0x69
            if (*(arg1 + 0x20) == 0)
                return 0xffffffff
            
            if (arg4 != 0)
                *arg4 = *(arg1 + 0x30)
            
            return zx.q(*(arg1 + 0x30))

return 0

// 函数: sub_142886140
// 地址: 0x142886140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 != 0x2000)
    if (*(arg1 + 0x6e8) == 2)
        if (sub_142873b60(arg2, 0x2a, 2) != 0 && sub_142873e80(arg2, 2) != 0
                && sub_1428736e0(arg2) != 0)
            return 1
        
        sub_142856580(arg1, 0x50, 0x213, 0x44, "ssl\statem\extensions_srvr.c", 0x790)
        return 0
else if (*(arg1 + 0x16e0) != 0)
    if (sub_142873b60(arg2, 0x2a, 2) != 0 && sub_142873e80(arg2, 2) != 0
            && sub_142873b60(arg2, *(arg1 + 0x16e0), 4) != 0 && sub_1428736e0(arg2) != 0)
        return 1
    
    sub_142856580(arg1, 0x50, 0x213, 0x44, "ssl\statem\extensions_srvr.c", 0x782)
    return 0

return 2

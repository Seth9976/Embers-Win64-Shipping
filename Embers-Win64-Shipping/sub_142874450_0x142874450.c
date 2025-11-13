// 函数: sub_142874450
// 地址: 0x142874450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (*(arg1 + 0x38) != 0)
    if (*(arg1 + 0x750) != 0 && (*(arg1 + 0x5c4) & 0x40000) == 0 && arg3 == 0)
        sub_142856580(arg1, 0x28, 0x1e3, 0x152, "ssl\statem\extensions.c", 0x381)
        return 0
else if ((*(arg1 + 0x5c4) & 0x40004) == 0 && arg3 == 0)
    sub_142856580(arg1, 0x28, 0x1e3, 0x152, "ssl\statem\extensions.c", 0x375)
    return 0

return 1

// 函数: sub_142889a80
// 地址: 0x142889a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*(*(arg1 + 0xa8) + 0x400) = 0

if (*(arg1 + 0x6c0) != 0)
    void* rax_1 = *(arg1 + 0xa8)
    
    if (*(rax_1 + 0x198) == 0 || *(rax_1 + 0x220) == 0)
        if (sub_142873b60(arg2, 0x10, 2) != 0 && sub_142873e80(arg2, 2) != 0
                && sub_142874080(arg2, *(arg1 + 0x6c0), *(arg1 + 0x6c8), 2) != 0
                && sub_1428736e0(arg2) != 0)
            *(*(arg1 + 0xa8) + 0x400) = 1
            return 1
        
        sub_142856580(arg1, 0x50, 0x1d2, 0x44, "ssl\statem\extensions_clnt.c", 0x18f)
        return 0

return 2

// 函数: sub_142889ba0
// 地址: 0x142889ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = 0

if (*(arg1 + 0x6f8) == 0)
    return 2

if (sub_142873b60(arg2, 0x2c, 2) == 0)
    sub_142856580(arg1, 0x50, 0x217, 0x44, "ssl\statem\extensions_clnt.c", 0x2cd)
else if (sub_142873e80(arg2, 2) == 0)
    sub_142856580(arg1, 0x50, 0x217, 0x44, "ssl\statem\extensions_clnt.c", 0x2cd)
else if (sub_142874080(arg2, *(arg1 + 0x6f0), *(arg1 + 0x6f8), 2) == 0)
    sub_142856580(arg1, 0x50, 0x217, 0x44, "ssl\statem\extensions_clnt.c", 0x2cd)
else if (sub_1428736e0(arg2) == 0)
    sub_142856580(arg1, 0x50, 0x217, 0x44, "ssl\statem\extensions_clnt.c", 0x2cd)
else
    rsi = 1

sub_1428a6780(*(arg1 + 0x6f0))
*(arg1 + 0x6f0) = 0
*(arg1 + 0x6f8) = 0
return zx.q(rsi)

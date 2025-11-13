// 函数: sub_14288d030
// 地址: 0x14288d030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rcx = *(arg1 + 0x630)
int32_t var_10
int32_t rdx
int32_t r9

if (rcx == 0)
    var_10 = 0x52f
    rdx = 0x50
    r9 = 0x44
else if (*(arg2 + 8) u<= 0)
    if (*(arg1 + 0xc8) != 0)
        return 1
    
    if (*(*(arg1 + 0x508) + 0x158) == 0)
        *(*(arg1 + 0x508) + 0x158) = sub_1428a6ba0(rcx)
        
        if (*(*(arg1 + 0x508) + 0x158) != 0)
            return 1
        
        var_10 = 0x542
    else
        var_10 = 0x53c
    
    rdx = 0x50
    r9 = 0x44
else
    rdx = 0x32
    var_10 = 0x535
    r9 = 0x6e

sub_142856580(arg1, rdx, 0x247, r9, "ssl\statem\extensions_clnt.c", var_10)
return 0

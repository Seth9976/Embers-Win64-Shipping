// 函数: sub_14288c870
// 地址: 0x14288c870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t var_10
int32_t rdx
int32_t r9

if (arg2[1] != 1)
    rdx = 0x32
    var_10 = 0x508
    r9 = 0x6e
else
    char* rax_1 = *arg2
    char r8_1 = *rax_1
    *arg2 = &rax_1[1]
    arg2[1] = 0
    
    if (r8_1 - 1 u> 3)
        var_10 = 0x510
        rdx = 0x2f
        r9 = 0xe8
    else
        if (r8_1 == *(arg1 + 0x704))
            *(*(arg1 + 0x508) + 0x1b0) = r8_1
            return 1
        
        var_10 = 0x51d
        rdx = 0x2f
        r9 = 0xe8

sub_142856580(arg1, rdx, 0x245, r9, "ssl\statem\extensions_clnt.c", var_10)
return 0

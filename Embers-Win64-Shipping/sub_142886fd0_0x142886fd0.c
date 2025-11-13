// 函数: sub_142886fd0
// 地址: 0x142886fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)
int32_t rax_1

if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
    rax_1 = *rcx

int32_t var_10

if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0 || rax_1 s< 0x304 || rax_1 == 0x10000)
    var_10 = 0x671
else
    if (sub_142873b60(arg2, 0x2b, 2) != 0 && sub_142873e80(arg2, 2) != 0
            && sub_142873b60(arg2, *arg1, 2) != 0 && sub_1428736e0(arg2) != 0)
        return 1
    
    var_10 = 0x67b

sub_142856580(arg1, 0x50, 0x263, 0x44, "ssl\statem\extensions_srvr.c", var_10)
return 0

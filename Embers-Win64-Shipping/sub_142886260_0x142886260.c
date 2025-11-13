// 函数: sub_142886260
// 地址: 0x142886260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rcx = *(*(arg1 + 0xa8) + 0x238)

if (((*(rcx + 0x1c) & 4) == 0 && (*(rcx + 0x20) & 8) == 0) || *(*(arg1 + 0x508) + 0x168) == 0)
    return 2

int64_t var_18
int64_t arg_8
sub_1428651e0(arg1, &var_18, &arg_8)

if (sub_142873b60(arg2, 0xb, 2) != 0 && sub_142873e80(arg2, 2) != 0
        && sub_142874080(arg2, var_18, arg_8, 1) != 0 && sub_1428736e0(arg2) != 0)
    return 1

sub_142856580(arg1, 0x50, 0x1c5, 0x44, "ssl\statem\extensions_srvr.c", 0x570)
return 0

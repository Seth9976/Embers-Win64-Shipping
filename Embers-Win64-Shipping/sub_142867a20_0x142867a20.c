// 函数: sub_142867a20
// 地址: 0x142867a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax_2
int32_t* rcx

if (*(arg1 + 0xc8) != 0)
    rcx = *(arg1 + 8)
    
    if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
        rax_2 = *rcx

int32_t rdx

if (*(arg1 + 0xc8) != 0
        && ((*(*(rcx + 0xc0) + 0x60) & 8) != 0 || rax_2 s< 0x304 || rax_2 == 0x10000))
    rdx = 0
else
    rdx = *(*(arg1 + 0x508) + 0x118)

int32_t var_10_1

if (sub_142873b60(arg2, rdx, 4) != 0)
    int32_t* rcx_3 = *(arg1 + 8)
    
    if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) != 0)
    label_142867b25:
        
        if (sub_142873e80(arg2, 2) != 0)
            return 1
        
        var_10_1 = 0xedc
    else
        int32_t rax_7 = *rcx_3
        
        if (rax_7 s< 0x304 || rax_7 == 0x10000)
            goto label_142867b25
        
        int32_t rax_8 = sub_142873b60(arg2, arg3, 4)
        int32_t rax_9
        
        if (rax_8 != 0)
            rax_9 = sub_142874080(arg2, arg4, 8, 1)
        
        if (rax_8 != 0 && rax_9 != 0)
            goto label_142867b25
        
        var_10_1 = 0xed4
else
    var_10_1 = 0xecc

sub_142856580(arg1, 0x50, 0x27e, 0x44, "ssl\statem\statem_srvr.c", var_10_1)
return 0

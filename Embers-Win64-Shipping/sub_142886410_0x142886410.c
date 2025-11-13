// 函数: sub_142886410
// 地址: 0x142886410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg1 + 0x6e4) != 0)
    void* rcx = *(*(arg1 + 0xa8) + 0x238)
    
    if (*(rcx + 0x28) != 0x40)
        int32_t rax_2 = *(rcx + 0x24)
        
        if (rax_2 != 4 && rax_2 != 0x400 && rax_2 != 0x40000)
            if (sub_142873b60(arg2, 0x16, 2) != 0 && sub_142873b60(arg2, 0, 2) != 0)
                return 1
            
            sub_142856580(arg1, 0x50, 0x1c7, 0x44, "ssl\statem\extensions_srvr.c", 0x653)
            return 0
    
    *(arg1 + 0x6e4) = 0

return 2

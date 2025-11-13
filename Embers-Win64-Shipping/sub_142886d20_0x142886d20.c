// 函数: sub_142886d20
// 地址: 0x142886d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg1 + 0x64c) != 0)
    int32_t* rcx = *(arg1 + 8)
    int32_t rax_2
    
    if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
        rax_2 = *rcx
    
    if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0 || rax_2 s< 0x304 || rax_2 == 0x10000 || arg3 == 0)
        int32_t rax_3 = sub_142873b60(arg2, 5, 2)
        int32_t rax_4
        
        if (rax_3 != 0)
            rax_4 = sub_142873e80(arg2, 2)
        
        if (rax_3 == 0 || rax_4 == 0)
            sub_142856580(arg1, 0x50, 0x1cd, 0x44, "ssl\statem\extensions_srvr.c", 0x5db)
        else
            int32_t* rcx_3 = *(arg1 + 8)
            
            if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) != 0)
            label_142886dd4:
                
                if (sub_1428736e0(arg2) != 0)
                    return 1
                
                sub_142856580(arg1, 0x50, 0x1cd, 0x44, "ssl\statem\extensions_srvr.c", 0x5ea)
            else
                int32_t rax_6 = *rcx_3
                
                if (rax_6 s< 0x304 || rax_6 == 0x10000)
                    goto label_142886dd4
                
                if (sub_142869460(arg1, arg2) != 0)
                    goto label_142886dd4
        
        return 0

return 2

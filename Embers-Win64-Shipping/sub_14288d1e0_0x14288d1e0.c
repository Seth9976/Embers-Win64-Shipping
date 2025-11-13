// 函数: sub_14288d1e0
// 地址: 0x14288d1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg3 != 0x4000)
    if (*(arg1 + 0x638) != 1)
        sub_142856580(arg1, 0x6e, 0x249, 0x6e, "ssl\statem\extensions_clnt.c", 0x5a2)
        return 0
    
    int32_t* rdx = *(arg1 + 8)
    int32_t r8_1 = *(*(rdx + 0xc0) + 0x60) & 8
    int32_t rax_3
    
    if (r8_1 == 0)
        rax_3 = *rdx
    
    if (r8_1 != 0 || rax_3 s< 0x304 || rax_3 == 0x10000)
        if (arg2[1] u> 0)
            sub_142856580(arg1, 0x32, 0x249, 0x6e, "ssl\statem\extensions_clnt.c", 0x5a7)
            return 0
        
        if (r8_1 == 0)
            goto label_14288d294
        
        *(arg1 + 0x64c) = 1
    else
    label_14288d294:
        int32_t rax_5 = *rdx
        
        if (rax_5 s< 0x304 || rax_5 == 0x10000)
            *(arg1 + 0x64c) = 1
        else if (arg4 == 0)
            return sub_14287b820(arg1, arg2) __tailcall

return 1

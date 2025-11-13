// 函数: sub_14288b340
// 地址: 0x14288b340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_142867290(arg1) != 0)
    int32_t* rax_1
    
    if (*(arg1 + 0x3c) == 0)
        rax_1 = *(arg1 + 0x508)
    
    uint64_t rdi_1
    
    if (*(arg1 + 0x3c) == 0 && rax_1 != 0 && *(rax_1 + 0x180) != 0 && *rax_1 != 0x304)
        rdi_1 = *(rax_1 + 0x188)
    label_14288b450:
        
        if (rdi_1 != 0)
            goto label_14288b478
        
        goto label_14288b459
    
    int16_t* rax_2
    
    if (*(arg1 + 0x508) != 0)
        rax_2 = *(arg1 + 0x698)
    
    if (*(arg1 + 0x508) != 0 && rax_2 != 0 && *(rax_2 + 8) != 0)
        rdi_1 = zx.q(*rax_2)
        *(*(arg1 + 0x508) + 0x180) = sub_1428a6730(zx.q(rdi_1.d))
        int64_t rcx_2 = *(*(arg1 + 0x508) + 0x180)
        
        if (rcx_2 != 0)
            memcpy(rcx_2, *(*(arg1 + 0x698) + 8), rdi_1.d)
            *(*(arg1 + 0x508) + 0x188) = rdi_1
            goto label_14288b450
        
        sub_142856580(arg1, 0x50, 0x1dc, 0x44, "ssl\statem\extensions_clnt.c", 0xed)
        return 0
    
    rdi_1 = 0
label_14288b459:
    void* rax_7 = *(arg1 + 0x698)
    
    if (rax_7 == 0 || *(rax_7 + 8) != 0)
    label_14288b478:
        
        if (sub_142873b60(arg2, 0x23, 2) != 0
                && sub_142874080(arg2, *(*(arg1 + 0x508) + 0x180), rdi_1, 2) != 0)
            return 1
        
        sub_142856580(arg1, 0x50, 0x1dc, 0x44, "ssl\statem\extensions_clnt.c", 0xfe)
        return 0

return 2

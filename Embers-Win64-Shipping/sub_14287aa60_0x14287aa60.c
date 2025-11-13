// 函数: sub_14287aa60
// 地址: 0x14287aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)

if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0)
label_14287ab22:
    int64_t* r8_2
    
    if (*(*(arg1 + 0xa8) + 0x248) != 2)
        r8_2 = **(arg1 + 0x488)
    else
        r8_2 = nullptr
    
    if (sub_14285e6d0(arg1, arg2, r8_2) != 0)
        int32_t* rax_8 = *(arg1 + 8)
        void* r8_3 = *(rax_8 + 0xc0)
        
        if ((*(r8_3 + 0x60) & 8) != 0)
            return 1
        
        int32_t rax_9 = *rax_8
        
        if (rax_9 s< 0x304 || rax_9 == 0x10000)
            return 1
        
        void* rax_10 = *(arg1 + 0xa8)
        
        if (*(rax_10 + 0x198) != 0 && *(rax_10 + 0x220) != 0)
            return 1
        
        int32_t rax_11 = (*(r8_3 + 0x20))(arg1, 0x92)
        
        if (rax_11 != 0)
            return 1
        
        sub_142856580(arg1, rax_11 - 1, 0x1e4, rax_11 + 0x6d, "ssl\statem\statem_clnt.c", 0xde6)
else
    int32_t rax_1 = *rcx
    
    if (rax_1 s< 0x304 || rax_1 == 0x10000)
        goto label_14287ab22
    
    int64_t rdx = *(arg1 + 0x760)
    int32_t var_10_1
    
    if (rdx != 0)
        if (sub_142874080(arg2, rdx, *(arg1 + 0x768), 1) != 0)
            goto label_14287ab22
        
        var_10_1 = 0xdd2
    else
        if (sub_142873b60(arg2, rdx.d, 1) != 0)
            goto label_14287ab22
        
        var_10_1 = 0xdcd
    
    sub_142856580(arg1, 0x50, 0x1e4, 0x44, "ssl\statem\statem_clnt.c", var_10_1)

return 0

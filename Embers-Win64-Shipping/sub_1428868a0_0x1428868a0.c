// 函数: sub_1428868a0
// 地址: 0x1428868a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* r8 = *(arg1 + 0xa8)
int32_t rax = *(r8 + 0x3dc)
*(r8 + 0x3dc) = 0

if (rax != 0)
    void* r9_1 = *(arg1 + 0x598)
    int64_t rax_1 = *(r9_1 + 0x278)
    
    if (rax_1 != 0)
        int64_t var_18
        int32_t arg_8
        int32_t rax_2 = rax_1(arg3, &var_18, &arg_8, *(r9_1 + 0x280))
        
        if (rax_2 == 0)
            int32_t rax_3 = sub_142873b60(arg2, 0x3374, zx.q(rax_2 + 2))
            int32_t rax_4
            
            if (rax_3 != 0)
                rax_4 = sub_142874080(arg2, var_18, zx.q(arg_8), 2)
            
            if (rax_3 == 0 || rax_4 == 0)
                sub_142856580(arg1, 0x50, 0x1c9, 0x44, "ssl\statem\extensions_srvr.c", 0x607)
                return 0
            
            *(*(arg1 + 0xa8) + 0x3dc) = 1
        
        return 1

return 2

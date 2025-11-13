// 函数: sub_1428864f0
// 地址: 0x1428864f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rbp = *(*(arg1 + 0xa8) + 0x408)
int32_t var_10

if (*(arg1 + 0x4d8) == 1)
    if (rbp != 0)
        return 2
    
    if (sub_142873b60(arg2, (rbp + 0x33).d, zx.q((rbp + 2).d)) != 0
            && sub_142873e80(arg2, zx.q((rbp + 2).d)) != 0
            && sub_142873b60(arg2, zx.d(*(*(arg1 + 0xa8) + 0x406)), zx.q((rbp + 2).d)) != 0
            && sub_1428736e0(arg2) != 0)
        return zx.q((rbp + 1).d)
    
    var_10 = 0x696
else if (rbp != 0)
    if (sub_142873b60(arg2, 0x33, 2) != 0 && sub_142873e80(arg2, 2) != 0
            && sub_142873b60(arg2, zx.d(*(*(arg1 + 0xa8) + 0x406)), 2) != 0)
        int32_t* rax_14
        int512_t zmm0
        rax_14, zmm0 = sub_142872de0(rbp)
        
        if (rax_14 != 0)
            int64_t arg_8
            int64_t rax_16 = sub_142896830(rax_14, &arg_8, zmm0)
            
            if (rax_16 != 0)
                if (sub_142874080(arg2, arg_8, rax_16, 2) != 0 && sub_1428736e0(arg2) != 0)
                    sub_1428a6780(arg_8)
                    *(*(arg1 + 0xa8) + 0x240) = rax_14
                    int32_t rcx_17
                    rcx_17.b = sub_142872740(arg1, rax_14, rbp, 1) != 0
                    return zx.q(rcx_17)
                
                sub_142856580(arg1, 0x50, 0x1c8, 0x44, "ssl\statem\extensions_srvr.c", 0x6c2)
                sub_1428965a0(rax_14)
                sub_1428a6780(arg_8)
            else
                sub_142856580(arg1, (rax_16 + 0x50).d, 0x1c8, (rax_16 + 0x10).d, 
                    "ssl\statem\extensions_srvr.c", 0x6ba)
                sub_1428965a0(rax_14)
        else
            sub_142856580(arg1, (&rax_14[0x14]).d, 0x1c8, (rax_14 + 0x41).d, 
                "ssl\statem\extensions_srvr.c", 0x6b2)
        
        return 0
    
    var_10 = 0x6ab
else
    int32_t rax_8
    
    if (*(arg1 + 0xc8) != rbp.d)
        rax_8 = sub_1428624b0(arg1, nullptr, 0)
    
    if (*(arg1 + 0xc8) != rbp.d && rax_8 != 0)
        return 2
    
    var_10 = 0x6a1

sub_142856580(arg1, 0x50, 0x1c8, 0x44, "ssl\statem\extensions_srvr.c", var_10)
return 0

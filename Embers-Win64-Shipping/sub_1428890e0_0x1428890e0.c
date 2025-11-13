// 函数: sub_1428890e0
// 地址: 0x1428890e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t zmm0 = *arg2
uint128_t var_18 = zmm0
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q
int32_t var_20

if (rcx u< 2)
    var_20 = 0x139
else
    char* rax_1 = var_18.q
    var_18.q = &rax_1[2]
    var_18:8.q = rcx - 2
    uint64_t r8_3 = zx.q(*rax_1) << 8 | zx.q(rax_1[1])
    
    if (rcx - 2 u< r8_3)
        var_20 = 0x139
    else
        var_18.q = &rax_1[2 + r8_3]
        var_18:8.q = rcx - 2 - r8_3
        
        if (rcx - 2 != r8_3)
            var_20 = 0x139
        else
            var_18.q = &rax_1[2]
            var_18:8.q = r8_3
            *arg2 = var_18
            
            if (r8_3 == 0)
                var_20 = 0x139
            else
                int32_t rax_4
                
                if (*(arg1 + 0xc8) == 0)
                    rax_4 = sub_142865660(arg1, &var_18, 0)
                
                if (*(arg1 + 0xc8) != 0 || rax_4 != 0)
                    return 1
                
                var_20 = 0x13f

sub_142856580(arg1, 0x32, 0x23f, 0x6e, "ssl\statem\extensions_srvr.c", var_20)
return 0

// 函数: sub_142888b90
// 地址: 0x142888b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
uint128_t zmm0 = *arg2
int64_t r9 = _mm_bsrli_si128(zmm0, 8).q

if (r9 != 0)
    char* rax_1 = zmm0.q
    uint128_t var_18
    var_18:8.q = r9 - 1
    uint64_t i = zx.q(*rax_1)
    void* rdx = &rax_1[1]
    var_18.q = rdx
    
    if (r9 - 1 u>= i)
        var_18.q = rdx + i
        var_18:8.q = r9 - 1 - i
        
        if (r9 - 1 == i)
            *arg2 = var_18
            
            if (i != 0)
                while (i != 0)
                    char rax_3 = *rdx
                    i -= 1
                    rdx += 1
                    
                    if (rax_3 == 1)
                        *(arg1 + 0x6e0) |= 2
                    else if (rax_3 == 0 && (*(arg1 + 0x5c4) & 0x400) != 0)
                        *(arg1 + 0x6e0) |= 1
                
                return 1

sub_142856580(arg1, 0x32, 0x23c, 0x6e, "ssl\statem\extensions_srvr.c", 0x24e)
return 0

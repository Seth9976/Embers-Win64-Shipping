// 函数: sub_142887c90
// 地址: 0x142887c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t zmm0 = *arg2
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q

if (rcx != 0)
    char* rax_1 = zmm0.q
    uint128_t var_18
    var_18:8.q = rcx - 1
    uint64_t rbx_1 = zx.q(*rax_1)
    var_18.q = &rax_1[1]
    
    if (rcx - 1 u>= rbx_1)
        var_18.q = &rax_1[1 + rbx_1]
        var_18:8.q = rcx - 1 - rbx_1
        
        if (rcx - 1 == rbx_1)
            *arg2 = var_18
            
            if (rbx_1 != 0)
                if (*(arg1 + 0xc8) == 0)
                    void* rsi_1 = *(arg1 + 0x508)
                    sub_1428a6780(*(rsi_1 + 0x168))
                    *(rsi_1 + 0x168) = 0
                    *(rsi_1 + 0x160) = 0
                    int64_t rax_3 = sub_1428a6af0(&rax_1[1], zx.q(rbx_1.d), 
                        "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1ad)
                    *(rsi_1 + 0x168) = rax_3
                    
                    if (rax_3 == 0)
                        sub_142856580(arg1, 0x50, 0x239, 0x44, "ssl\statem\extensions_srvr.c", 
                            0x104)
                        return 0
                    
                    *(rsi_1 + 0x160) = rbx_1
                
                return 1

sub_142856580(arg1, 0x32, 0x239, 0x6e, "ssl\statem\extensions_srvr.c", 0xfb)
return 0

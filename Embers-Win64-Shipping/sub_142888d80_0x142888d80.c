// 函数: sub_142888d80
// 地址: 0x142888d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t zmm0 = *arg2
int64_t r8 = _mm_bsrli_si128(zmm0, 8).q

if (r8 u>= 2)
    char* rax_1 = zmm0.q
    uint128_t var_18
    var_18:8.q = r8 - 2
    uint64_t rcx_2 = zx.q(*rax_1) << 8 | zx.q(rax_1[1])
    var_18.q = &rax_1[2]
    
    if (r8 - 2 u>= rcx_2)
        var_18.q = &rax_1[2 + rcx_2]
        var_18:8.q = r8 - 2 - rcx_2
        
        if (r8 - 2 == rcx_2)
            zmm0 = var_18
            var_18.q = &rax_1[2]
            var_18:8.q = rcx_2
            *arg2 = zmm0
            
            if (rcx_2 != 0)
                var_18.q = &rax_1[3]
                var_18:8.q = rcx_2 - 1
                uint64_t rsi_2
                
                if (rax_1[2] == 0 && rcx_2 - 1 u>= 2)
                    rsi_2 = zx.q(rax_1[4]) | zx.q(rax_1[3]) << 8
                
                int32_t var_20_1
                int32_t rdx_2
                int32_t r9_1
                
                if (rax_1[2] != 0 || rcx_2 - 1 u< 2 || var_18:8.q - 2 != rsi_2)
                    var_20_1 = 0x7e
                    rdx_2 = 0x32
                    r9_1 = 0x6e
                else
                    int32_t rdx_1 = *(arg1 + 0xc8)
                    int32_t rcx_6
                    
                    if (rdx_1 != 0)
                        int32_t* r8_4 = *(arg1 + 8)
                        rcx_6 = rdx_1
                        
                        if ((*(*(r8_4 + 0xc0) + 0x60) & 8) != 0)
                            goto label_142888f73
                        
                        int32_t rax_7 = *r8_4
                        
                        if (rax_7 s< 0x304 || rax_7 == 0x10000)
                            goto label_142888f73
                    
                    if (rsi_2 u<= 0xff)
                        if (memchr(&rax_1[5], 0, rsi_2) == 0)
                            sub_1428a6780(*(arg1 + 0x630))
                            *(arg1 + 0x630) = 0
                            sub_1428a6780(0)
                            char* rax_9 = sub_1428a6c10(&rax_1[5], rsi_2, 
                                "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1c4)
                            *(arg1 + 0x630) = rax_9
                            
                            if (rax_9 != 0)
                                rcx_6 = *(arg1 + 0xc8)
                                *(arg1 + 0x710) = 1
                            label_142888f73:
                                
                                if (rcx_6 != 0)
                                    char* rdx_6 = *(*(arg1 + 0x508) + 0x158)
                                    int32_t rax_12
                                    
                                    if (rdx_6 == 0)
                                        rax_12 = 0
                                    else
                                        int32_t i = 0
                                        char* r8_8 = rdx_6
                                        
                                        if (*rdx_6 != 0)
                                            while (i u< 0x80000000)
                                                r8_8 = &r8_8[1]
                                                i += 1
                                                
                                                if (*r8_8 == 0)
                                                    break
                                        
                                        uint64_t r8_10 = zx.q(i) & 0x7fffffff
                                        
                                        if (rsi_2 != r8_10)
                                            rax_12 = 0
                                        else if (sub_1428bc500(&rax_1[5], rdx_6, r8_10) != 0)
                                            rax_12 = 0
                                        else
                                            rax_12 = 1
                                    
                                    *(arg1 + 0x710) = rax_12
                                    
                                    if (rax_12 == 0 && *(*(arg1 + 0x508) + 0x158) != 0)
                                        *(arg1 + 0x6ec) = rax_12
                                
                                return 1
                            
                            var_20_1 = 0x99
                            rdx_2 = (&rax_9[0x50]).d
                            r9_1 = (&rax_9[0x44]).d
                        else
                            var_20_1 = 0x8d
                            rdx_2 = 0x70
                            r9_1 = 0x6e
                    else
                        var_20_1 = 0x86
                        rdx_2 = 0x70
                        r9_1 = 0x6e
                
                sub_142856580(arg1, rdx_2, 0x23d, r9_1, "ssl\statem\extensions_srvr.c", var_20_1)
                return 0

sub_142856580(arg1, 0x32, 0x23d, 0x6e, "ssl\statem\extensions_srvr.c", 0x6b)
return 0

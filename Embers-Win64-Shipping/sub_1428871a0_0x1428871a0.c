// 函数: sub_1428871a0
// 地址: 0x1428871a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void* rax = *(arg1 + 0xa8)

if (*(rax + 0x198) != 0 && *(rax + 0x220) != 0)
    return 1

uint128_t zmm0 = *arg2
int64_t r8 = _mm_bsrli_si128(zmm0, 8).q
int32_t var_30

if (r8 u< 2)
    var_30 = 0x1d6
else
    char* rax_2 = zmm0.q
    uint128_t var_28
    var_28:8.q = r8 - 2
    void* rdx = &rax_2[2]
    uint64_t rcx_2 = zx.q(*rax_2) << 8 | zx.q(rax_2[1])
    var_28.q = rdx
    
    if (r8 - 2 u< rcx_2)
        var_30 = 0x1d6
    else
        var_28.q = rcx_2 + rdx
        var_28:8.q = r8 - 2 - rcx_2
        
        if (r8 - 2 != rcx_2)
            var_30 = 0x1d6
        else
            zmm0 = var_28
            var_28.q = rdx
            var_28:8.q = rcx_2
            *arg2 = zmm0
            
            if (rcx_2 u< 2)
                var_30 = 0x1d6
            else
                zmm0 = var_28
                uint128_t var_18_1 = zmm0
                
                while (true)
                    if (rcx_2 != 0)
                        uint64_t rdx_1 = zx.q(*rdx)
                        uint128_t var_28_1
                        var_28_1.q = rdx + 1
                        var_28_1:8.q = zmm0:8.q - 1
                        
                        if (zmm0:8.q - 1 u>= rdx_1)
                            int64_t rcx_5 = zmm0:8.q - 1 - rdx_1
                            var_28_1.q = rdx_1 + rdx + 1
                            var_28_1:8.q = rcx_5
                            zmm0 = var_28_1
                            
                            if (rdx_1 != 0)
                                if (rcx_5 != 0)
                                    rcx_2 = zmm0:8.q
                                    rdx = zmm0.q
                                    continue
                                
                                sub_1428a6780(*(*(arg1 + 0xa8) + 0x3f0))
                                *(*(arg1 + 0xa8) + 0x3f0) = 0
                                *(*(arg1 + 0xa8) + 0x3f8) = 0
                                void* rsi = *(arg1 + 0xa8)
                                sub_1428a6780(*(rsi + 0x3f0))
                                *(rsi + 0x3f0) = 0
                                *(rsi + 0x3f8) = 0
                                uint64_t rbp = var_18_1:8.q
                                
                                if (rbp != 0)
                                    int64_t rax_8 = sub_1428a6af0(var_18_1.q, rbp, 
                                        "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 
                                        0x1ad)
                                    *(rsi + 0x3f0) = rax_8
                                    
                                    if (rax_8 == 0)
                                        sub_142856580(arg1, 0x50, 0x237, 0x44, 
                                            "ssl\statem\extensions_srvr.c", 0x1eb)
                                        return 0
                                    
                                    *(rsi + 0x3f8) = rbp
                                
                                return 1
                    
                    var_30 = 0x1e0
                    break

sub_142856580(arg1, 0x32, 0x237, 0x6e, "ssl\statem\extensions_srvr.c", var_30)
return 0

// 函数: sub_14288c0c0
// 地址: 0x14288c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t zmm0 = *arg2
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q

if (rcx u>= 2)
    char* rax_1 = zmm0.q
    uint128_t var_18
    var_18:8.q = rcx - 2
    uint64_t rbx_3 = zx.q(*rax_1) << 8 | zx.q(rax_1[1])
    var_18.q = &rax_1[2]
    
    if (rcx - 2 u>= rbx_3)
        var_18.q = &rax_1[2 + rbx_3]
        var_18:8.q = rcx - 2 - rbx_3
        
        if (rcx - 2 == rbx_3)
            *arg2 = var_18
            sub_1428a6780(*(arg1 + 0x6f0))
            *(arg1 + 0x6f0) = 0
            *(arg1 + 0x6f8) = 0
            
            if (rbx_3 == 0)
                return 1
            
            int64_t rax_4 = sub_1428a6af0(&rax_1[2], rbx_3, 
                "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1ad)
            *(arg1 + 0x6f0) = rax_4
            
            if (rax_4 != 0)
                *(arg1 + 0x6f8) = rbx_3
                return 1

sub_142856580(arg1, 0x32, 0x216, 0x9f, "ssl\statem\extensions_clnt.c", 0x767)
return 0

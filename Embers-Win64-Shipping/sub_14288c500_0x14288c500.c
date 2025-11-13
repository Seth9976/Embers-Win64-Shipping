// 函数: sub_14288c500
// 地址: 0x14288c500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
void* rax = *(arg1 + 0xa8)
int32_t* rbp = *(rax + 0x240)

if (rbp == 0 || *(rax + 0x408) != 0)
    sub_142856580(arg1, 0x50, 0x1bd, 0x44, "ssl\statem\extensions_clnt.c", 0x703)
    return 0

int64_t r9 = *(arg2 + 8)

if (r9 u< 2)
    sub_142856580(arg1, 0x32, 0x1bd, 0x9f, "ssl\statem\extensions_clnt.c", 0x709)
    return 0

char* rcx = *arg2
uint32_t rdi_1 = zx.d(rcx[1]) | zx.d(*rcx) << 8
*(arg2 + 8) = r9 - 2
*arg2 = &rcx[2]
int32_t var_30_1
uint128_t var_28

if (test_bit(arg3, 0xb))
    void* arg_8 = nullptr
    void* rcx_2
    int32_t rdx
    int32_t r9_2
    
    if (r9 == 2)
        rcx_2 = arg1
        
        if (rdi_1 != zx.d(*(*(arg1 + 0xa8) + 0x406)))
            sub_142865410(rcx_2, &arg_8, &var_28)
            int64_t rdx_2 = var_28.q
            int64_t rcx_3 = 0
            
            if (rdx_2 != 0)
                do
                    if (rdi_1 == zx.d(*(arg_8 + (rcx_3 << 1))))
                        if (rcx_3 u< rdx_2 && sub_142866c60(arg1, rdi_1.w, 0x20004) != 0)
                            *(*(arg1 + 0xa8) + 0x406) = rdi_1.w
                            sub_1428965a0(*(*(arg1 + 0xa8) + 0x240))
                            *(*(arg1 + 0xa8) + 0x240) = 0
                            return 1
                        
                        break
                    
                    rcx_3 += 1
                while (rcx_3 u< rdx_2)
            
            var_30_1 = 0x72a
        label_14288c679:
            rdx = 0x2f
            r9_2 = 0x6c
            rcx_2 = arg1
        else
            rdx = 0x2f
            var_30_1 = 0x71d
            r9_2 = 0x6c
    else
        rdx = 0x32
        var_30_1 = 0x713
        r9_2 = 0x9f
        rcx_2 = arg1
    
    sub_142856580(rcx_2, rdx, 0x1bd, r9_2, "ssl\statem\extensions_clnt.c", var_30_1)
    return 0

if (rdi_1 != zx.d(*(*(arg1 + 0xa8) + 0x406)))
    var_30_1 = 0x73a
    goto label_14288c679

uint128_t zmm0 = *arg2
var_28 = zmm0
int64_t rcx_8 = _mm_bsrli_si128(zmm0, 8).q

if (rcx_8 u< 2)
label_14288c7d3:
    sub_142856580(arg1, 0x32, 0x1bd, 0x9f, "ssl\statem\extensions_clnt.c", 0x741)
else
    char* rax_12 = var_28.q
    var_28:8.q = rcx_8 - 2
    uint64_t rsi_3 = zx.q(*rax_12) << 8 | zx.q(rax_12[1])
    var_28.q = &rax_12[2]
    
    if (rcx_8 - 2 u< rsi_3)
        goto label_14288c7d3
    
    var_28.q = &rax_12[2 + rsi_3]
    var_28:8.q = rcx_8 - 2 - rsi_3
    
    if (rcx_8 - 2 != rsi_3)
        goto label_14288c7d3
    
    *arg2 = var_28
    
    if (rsi_3 == 0)
        goto label_14288c7d3
    
    int32_t* rax_15 = sub_142872de0(rbp)
    
    if (rax_15 != 0)
        if (sub_142896c60(rax_15, &rax_12[2], rsi_3) != 0)
            if (sub_142872740(arg1, rbp, rax_15, 1) != 0)
                *(*(arg1 + 0xa8) + 0x408) = rax_15
                return 1
        else
            sub_142856580(arg1, 0x2f, 0x1bd, 0x132, "ssl\statem\extensions_clnt.c", 0x74e)
        
        sub_1428965a0(rax_15)
    else
        sub_142856580(arg1, (&rax_15[0x14]).d, 0x1bd, (rax_15 + 0x41).d, 
            "ssl\statem\extensions_clnt.c", 0x748)

return 0

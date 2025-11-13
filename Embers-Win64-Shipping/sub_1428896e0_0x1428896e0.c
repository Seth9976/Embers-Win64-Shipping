// 函数: sub_1428896e0
// 地址: 0x1428896e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t zmm0 = *arg2
uint128_t var_18 = zmm0
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q
int32_t var_20
int32_t rdx_4
int32_t r9_1

if (rcx u< 2)
label_142889834:
    rdx_4 = 0x32
    var_20 = 0x3c0
    r9_1 = 0x6e
else
    char* rax_1 = var_18.q
    var_18.q = &rax_1[2]
    var_18:8.q = rcx - 2
    uint64_t r8_3 = zx.q(*rax_1) << 8 | zx.q(rax_1[1])
    
    if (rcx - 2 u< r8_3)
        goto label_142889834
    
    var_18.q = &rax_1[2 + r8_3]
    var_18:8.q = rcx - 2 - r8_3
    
    if (rcx - 2 != r8_3)
        goto label_142889834
    
    var_18.q = &rax_1[2]
    var_18:8.q = r8_3
    *arg2 = var_18
    
    if (r8_3 == 0 || (r8_3.b & 1) != 0)
        goto label_142889834
    
    if (*(arg1 + 0xc8) != 0)
        int32_t* rcx_3 = *(arg1 + 8)
        
        if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) != 0)
            return 1
        
        int32_t rax_5 = *rcx_3
        
        if (rax_5 s< 0x304 || rax_5 == 0x10000)
            return 1
    
    sub_1428a6780(*(*(arg1 + 0x508) + 0x178))
    *(*(arg1 + 0x508) + 0x178) = 0
    *(*(arg1 + 0x508) + 0x170) = 0
    void* rdx_2 = *(arg1 + 0x508)
    int32_t rax_8 = sub_1428656e0(&var_18, rdx_2 + 0x178, rdx_2 + 0x170)
    
    if (rax_8 != 0)
        return 1
    
    var_20 = 0x3cd
    rdx_4 = rax_8 + 0x50
    r9_1 = rax_8 + 0x44

sub_142856580(arg1, rdx_4, 0x242, r9_1, "ssl\statem\extensions_srvr.c", var_20)
return 0

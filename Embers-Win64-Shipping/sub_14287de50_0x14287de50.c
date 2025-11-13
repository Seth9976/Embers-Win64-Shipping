// 函数: sub_14287de50
// 地址: 0x14287de50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint128_t zmm0 = *arg2
int64_t rdx = _mm_bsrli_si128(zmm0, 8).q

if (rdx u< 2)
label_14287e078:
    sub_142856580(arg1, 0x32, 0x1a6, 0x9f, "ssl\statem\statem_clnt.c", 0x803)
else
    char* rax_1 = zmm0.q
    uint128_t var_38
    var_38:8.q = rdx - 2
    uint64_t r9_3 = zx.q(*rax_1) << 8 | zx.q(rax_1[1])
    
    if (rdx - 2 u< r9_3)
        goto label_14287e078
    
    int64_t rdx_2 = rdx - 2 - r9_3
    void* rcx_1 = &rax_1[2 + r9_3]
    var_38:8.q = rdx_2
    var_38.q = rcx_1
    *arg2 = var_38
    
    if (rdx_2 u< 2)
        goto label_14287e078
    
    uint64_t rdi_2 = zx.q(*(rcx_1 + 1)) | zx.q(*rcx_1) << 8
    uint128_t var_38_1
    var_38_1:8.q = var_38:8.q - 2
    
    if (var_38:8.q - 2 u< rdi_2)
        goto label_14287e078
    
    void* rdx_4 = rcx_1 + 2 + rdi_2
    var_38_1.q = rdx_4
    var_38_1:8.q = var_38:8.q - 2 - rdi_2
    *arg2 = var_38_1
    
    if (var_38:8.q - 2 == rdi_2)
        goto label_14287e078
    
    uint64_t r14_1 = zx.q(*rdx_4)
    uint128_t var_38_2
    var_38_2:8.q = var_38_1:8.q - 1
    
    if (var_38_1:8.q - 1 u< r14_1)
        goto label_14287e078
    
    int64_t rax_7 = var_38_1:8.q - 1 - r14_1
    void* rcx_2 = rdx_4 + 1 + r14_1
    var_38_2.q = rcx_2
    var_38_2:8.q = rax_7
    *arg2 = var_38_2
    
    if (rax_7 u< 2)
        goto label_14287e078
    
    uint64_t rsi_2 = zx.q(*(rcx_2 + 1)) | zx.q(*rcx_2) << 8
    uint128_t var_38_3
    var_38_3.q = rcx_2 + 2
    var_38_3:8.q = var_38_2:8.q - 2
    
    if (var_38_2:8.q - 2 u< rsi_2)
        goto label_14287e078
    
    var_38_3:8.q = var_38_2:8.q - 2 - rsi_2
    var_38_3.q = rsi_2 + rcx_2 + 2
    *arg2 = var_38_3
    int64_t* rax_11 = sub_14288fa60(&rax_1[2], r9_3.d, nullptr)
    *(arg1 + 0x7a8) = rax_11
    
    if (rax_11 == 0)
    label_14287e065:
        sub_142856580(arg1, 0x50, 0x1a6, 3, "ssl\statem\statem_clnt.c", 0x815)
    else
        int64_t* rax_12 = sub_14288fa60(rcx_1 + 2, rdi_2.d, nullptr)
        *(arg1 + 0x7b0) = rax_12
        
        if (rax_12 == 0)
            goto label_14287e065
        
        int64_t* rax_13 = sub_14288fa60(rdx_4 + 1, r14_1.d, nullptr)
        *(arg1 + 0x7b8) = rax_13
        
        if (rax_13 == 0)
            goto label_14287e065
        
        int64_t* rax_14 = sub_14288fa60(rcx_2 + 2, rsi_2.d, nullptr)
        *(arg1 + 0x7c0) = rax_14
        
        if (rax_14 == 0)
            goto label_14287e065
        
        if (sub_142855720(arg1) != 0)
            if ((*(*(*(arg1 + 0xa8) + 0x238) + 0x20) & 3) != 0)
                *arg3 = sub_1428a38c0(*(*(arg1 + 0x508) + 0xf8))
            
            return 1

return 0

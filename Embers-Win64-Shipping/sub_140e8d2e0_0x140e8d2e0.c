// 函数: sub_140e8d2e0
// 地址: 0x140e8d2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t rbx = sx.q(arg2)
void* rax_2

if (*(arg1 + 0x98) == *(arg1 + 0xc4))
label_140e8d367:
    rax_2 = sub_140e47f80(arg1 + 0x90, rbx.d, &arg_10)
    rbx = zx.q(arg_10)
else
    void* r9_1 = *(arg1 + 0xd0)
    void* r11_1 = arg1 + 0xc8
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & rbx) << 2))
    
    if (rax_1 == 0xffffffff)
        goto label_140e8d367
    
    int64_t r8 = *(arg1 + 0x90)
    void* rcx_1
    
    while (true)
        int64_t rdx = sx.q(rax_1) * 5
        rcx_1 = r8 + (rdx << 2)
        
        if (*(r8 + (rdx << 2)) == rbx.d)
            break
        
        rax_1 = *(rcx_1 + 0xc)
        
        if (rax_1 == 0xffffffff)
            goto label_140e8d367
    
    if (rax_1 == 0xffffffff || rcx_1 == 0)
        goto label_140e8d367
    
    rax_2 = rcx_1 + 4

*rax_2 = *arg3
uint64_t result

if (*(arg1 + 0xe8) == *(arg1 + 0x114))
label_140e8d3e3:
    result = sub_140e47f80(arg1 + 0xe0, rbx.d, &arg_10)
    *result = *arg3
else
    void* rcx_3 = *(arg1 + 0x120)
    void* r8_2 = arg1 + 0x118
    
    if (rcx_3 != 0)
        r8_2 = rcx_3
    
    result = zx.q(*(r8_2 + (((sx.q(*(arg1 + 0x128)) - 1) & sx.q(rbx.d)) << 2)))
    
    if (result.d == 0xffffffff)
        goto label_140e8d3e3
    
    int64_t r8_3 = *(arg1 + 0xe0)
    void* rcx_5
    
    while (true)
        int64_t rdx_5 = sx.q(result.d) * 5
        rcx_5 = r8_3 + (rdx_5 << 2)
        
        if (*(r8_3 + (rdx_5 << 2)) == rbx.d)
            break
        
        result = zx.q(*(rcx_5 + 0xc))
        
        if (result.d == 0xffffffff)
            goto label_140e8d3e3
    
    if (result.d == 0xffffffff || rcx_5 == 0)
        goto label_140e8d3e3
    
    *(rcx_5 + 4) = *arg3

return result

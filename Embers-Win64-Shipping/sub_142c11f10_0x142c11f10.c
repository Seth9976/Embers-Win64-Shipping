// 函数: sub_142c11f10
// 地址: 0x142c11f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3
int32_t rcx_3

if (arg1 == 0x1c)
    uint64_t rcx_9 = zx.q(*(arg2 + 0x18))
    int128_t* const r8_5 = &data_14369a5d0
    int32_t rdx_4 = *(arg2 + 0x10)
    int128_t* const rax_10
    
    if (rcx_9.d u< rdx_4)
        rax_10 = rcx_9 + *(arg2 + 8)
    else
        *(arg2 + 0x1c) = 1
        rax_10 = &data_14369a5d0
    
    if (rcx_9.d + 1 u< rdx_4)
        r8_5 = zx.q(rcx_9.d + 1) + *(arg2 + 8)
    else
        *(arg2 + 0x1c) = 1
    
    sub_142c12210(arg2 + 0x20, sx.d(zx.w(*rax_10) << 8) | zx.d(*r8_5))
    
    if (*(arg2 + 0x1c) != 0)
    label_142c12076:
        *(arg2 + 0x1c) = 1
        rax_3 = *(arg2 + 0x10)
        *(arg2 + 0x18) = rax_3
        return rax_3
    
    int32_t rax_14 = *(arg2 + 0x18)
    rcx_3 = *(arg2 + 0x10)
    
    if (rax_14 u> rcx_3)
        goto label_142c12076
    
    rax_3 = rax_14 + 2
label_142c12072:
    
    if (rax_3 u> rcx_3)
        goto label_142c12076
    
    *(arg2 + 0x18) = rax_3
    return rax_3

if (arg1 u> 0xf6)
    int32_t rdx_1
    
    if (arg1 u<= 0xfa)
        uint64_t rax_4 = zx.q(*(arg2 + 0x18))
        int128_t* const r8_2
        
        if (rax_4.d u< *(arg2 + 0x10))
            r8_2 = rax_4 + *(arg2 + 8)
        else
            *(arg2 + 0x1c) = 1
            r8_2 = &data_14369a5d0
        
        rdx_1 = sx.d(arg1.w * 0x100 + zx.w(*r8_2) + 0x96c)
    label_142c11f80:
        sub_142c12210(arg2 + 0x20, rdx_1)
        
        if (*(arg2 + 0x1c) != 0)
            goto label_142c12076
        
        int32_t rax_2 = *(arg2 + 0x18)
        rcx_3 = *(arg2 + 0x10)
        
        if (rax_2 u> rcx_3)
            goto label_142c12076
        
        rax_3 = rax_2 + 1
        goto label_142c12072
    
    if (arg1 u<= 0xfe)
        uint64_t rax = zx.q(*(arg2 + 0x18))
        int128_t* const r8
        
        if (rax.d u< *(arg2 + 0x10))
            r8 = rax + *(arg2 + 8)
        else
            *(arg2 + 0x1c) = 1
            r8 = &data_14369a5d0
        
        rdx_1 = sx.d(0xfa94 - arg1.w * 0x100 - zx.w(*r8))
        goto label_142c11f80

if (arg1 - 0x20 u<= 0xd6)
    return sub_142c12210(arg2 + 0x20, arg1 - 0x8b) __tailcall

*(arg2 + 0x24)
int32_t rax_9 = 0
*(arg2 + 0x24) = rax_9
*(arg2 + 0x38) = 1
return rax_9

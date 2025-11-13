// 函数: sub_142b6b650
// 地址: 0x142b6b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = *arg3
uint64_t rax

if (r10 u< arg4)
    if (arg2 s<= 0xffff)
    label_142b6b6a2:
        *r10 = arg2.w
        r10 = &r10[1]
        arg2 = -1
    else
        rax = zx.q(arg2 s>> 0xa)
        arg2 = (arg2 & 0x3ff) | 0xdc00
        rax.w -= 0x2840
        *r10 = rax.w
        r10 = &r10[1]
        
        if (r10 u< arg4)
            goto label_142b6b6a2
    
    if (arg5 != 0)
        int32_t* rcx = *arg5
        
        if (rcx != 0)
            *rcx = arg6
            void* rcx_1 = &rcx[1]
            
            if (*arg3 + 2 u< r10)
                *rcx_1 = arg6
                rcx_1 += 4
            
            *arg5 = rcx_1

*arg3 = r10

if (arg2 s< 0)
    return 

if (arg1 != 0)
    if (arg2 u> 0xffff)
        int32_t rax_3 = arg2
        arg2.w &= 0x3ff
        rax.w = (rax_3 s>> 0xa).w - 0x2840
        *(arg1 + 0x90) = rax.w
        arg2.w |= 0xdc00
        *(arg1 + 0x92) = arg2.w
        rax.b = 2
    else
        *(arg1 + 0x90) = arg2.w
        rax.b = 1
    
    *(arg1 + 0x5d) = rax.b

*arg7 = 0xf

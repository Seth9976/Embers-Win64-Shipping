// 函数: sub_142b0f7d0
// 地址: 0x142b0f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    int64_t rax
    rax.b = 0
    return rax

if (arg2 s< *(arg1 + (sx.q(*(arg1 + 0x10)) << 2) + 0x20) - 0xf
        || arg2 s> *(arg1 + (sx.q(*(arg1 + 0x14)) << 2) + 0x20) + 0xf)
    int64_t rbp_1 = 0
    int16_t r15_1 = 0
    
    if (arg2 s> 0x14)
        int32_t rax_3
        rax_3, arg4 = sub_142a96f60(*(arg1 + 8), arg2)
        int64_t r14_1 = sx.q(rax_3)
        
        if (rax_3 s> 0)
            *(*(arg1 + 8) + 0x1e0) = r14_1.d
            int32_t rax_5
            rax_5, arg4 = sub_142a96ab0(*(arg1 + 8), 0, arg4)
            rbp_1 = sx.q(rax_5)
            
            if (rbp_1.d s<= (r14_1 + 4).d)
                sub_142aeacd0(*(arg1 + 8) + 0x148, rbp_1)
                
                if (r14_1 == sub_142aea6c0(*(arg1 + 8) + 0x148, arg4))
                    int32_t rax_7
                    rax_7, arg4 = sub_142a96ab0(*(arg1 + 8), 0, arg4)
                    rbp_1 = zx.q(rax_7)
            
            r15_1 = (*(*(arg1 + 8) + 0x1e4)).w
    
    *(arg1 + 0x18) = rbp_1.d
    *(arg1 + 0x10) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = rbp_1.d
    *(arg1 + 0x220) = r15_1

int64_t rax_12

if (*(arg1 + (sx.q(*(arg1 + 0x14)) << 2) + 0x20) s< arg2)
    do
        char rax_10
        rax_10, arg4 = sub_142b0f610(arg1, arg4)
        
        if (rax_10 == 0)
            abort()
            noreturn
    while (*(arg1 + (sx.q(*(arg1 + 0x14)) << 2) + 0x20) s< arg2)
    
    rax_12 = sx.q(*(arg1 + 0x14))
    *(arg1 + 0x1c) = rax_12.d
    int32_t rcx_13 = *(arg1 + (rax_12 << 2) + 0x20)
    *(arg1 + 0x18) = rcx_13
    
    if (rcx_13 s> arg2)
        int64_t rax_13
        
        do
            rax_13, arg4 = sub_142b10060(arg1, arg3, arg4)
        while (*(arg1 + 0x18) s> arg2)
        
        rax_13.b = 1
        return rax_13
else if (*(arg1 + (sx.q(*(arg1 + 0x10)) << 2) + 0x20) s> arg2)
    do
        arg4 = sub_142b0f980(arg1, arg3, arg4)
    while (*(arg1 + (sx.q(*(arg1 + 0x10)) << 2) + 0x20) s> arg2)
    
    rax_12 = sx.q(*(arg1 + 0x10))
    *(arg1 + 0x1c) = rax_12.d
    int32_t rcx_16 = *(arg1 + (rax_12 << 2) + 0x20)
    *(arg1 + 0x18) = rcx_16
    
    if (rcx_16 s< arg2)
        do
            rax_12, arg4 = sub_142b0f0c0(arg1, arg4)
        while (*(arg1 + 0x18) s< arg2)
    
    if (*(arg1 + 0x18) s> arg2)
        sub_142b10060(arg1, arg3, arg4)

rax_12.b = 1
return rax_12

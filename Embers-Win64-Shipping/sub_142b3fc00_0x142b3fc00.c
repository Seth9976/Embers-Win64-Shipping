// 函数: sub_142b3fc00
// 地址: 0x142b3fc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg4)
int32_t rsi_1 = arg5 - r15.d
int32_t r10_1
int32_t r10_2

if (arg2 == 0)
    r10_1 = *(arg1 + 0x80)
    r10_2 = r10_1 - rsi_1

if (arg2 != 0 || r10_1 - rsi_1 s< 0)
    int32_t rcx = *(arg1 + 0x84)
    int32_t r8
    int32_t r9
    
    if (arg2 == rcx)
        if (*arg1 == 0)
            r8 = 0x28
        else
            r8 = *(arg1 + 0x10)
        
        r9 = *(arg1 + 0x80)
    
    if (arg2 != rcx || rcx + r9 + rsi_1 s>= r8)
        r10_2 = sub_142b404c0(arg1, arg2, rsi_1, arg7)
    else
        int32_t r10_3 = rcx + rsi_1
        *(arg1 + 0x84) = r10_3
        r10_2 = r10_3 - rsi_1 + r9
else
    *(arg1 + 0x84) += rsi_1
    *(arg1 + 0x80) = r10_2

if (*arg7 s<= 0 && rsi_1 s> 0)
    int64_t rcx_2 = sx.q(r10_2)
    int64_t i = 0
    int64_t r14_1 = rcx_2 * 2
    int64_t rdx = (r15 - rcx_2) * 2
    int64_t var_38_1 = rdx
    
    do
        int16_t rcx_3 = *(arg3 + 8)
        int32_t rax_7
        
        if (rcx_3 s< 0)
            rax_7 = *(arg3 + 0xc)
        else
            rax_7 = sx.d(rcx_3) s>> 5
        
        int16_t rbp_1
        
        if (r15.d u>= rax_7)
            rbp_1 = -1
        else
            void* rcx_4 = arg3 + 0xa
            
            if ((rcx_3.b & 2) == 0)
                rcx_4 = *(arg3 + 0x18)
            
            rbp_1 = *(rdx + r14_1 + rcx_4)
        
        *(sub_142b3f8b0(arg1) + r14_1) = rbp_1
        rdx = var_38_1
        r15 = zx.q(r15.d + 1)
        r14_1 += 2
        *(sub_142b3f8c0(arg1) + rcx_2 + i) = arg6
        i += 1
    while (i s< sx.q(rsi_1))

return zx.q(rsi_1)

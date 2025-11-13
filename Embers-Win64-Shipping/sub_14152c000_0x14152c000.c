// 函数: sub_14152c000
// 地址: 0x14152c000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
void* r8 = *(arg1 + 0x88) + ((sx.q((arg4 * *(arg1 + 0x3c) + arg3) * *(arg1 + 0x38)) + rdi) << 2)

if (arg4 s> 0)
    int32_t rsi_1 = *(arg1 + 0x70)
    int64_t r10_2 = sx.q(*(arg1 + 0x44))
    
    if (*(r8 - (r10_2 << 2)) != rsi_1)
        if (*arg5 == *(arg1 + 0x98))
            *arg5 = *(arg1 + 0x90)
            r10_2 = zx.q(*(arg1 + 0x44))
            rsi_1 = *(arg1 + 0x70)
        
        *(r8 - (sx.q(r10_2.d) << 2)) = rsi_1
        **arg5 = rdi.d
        *arg5 += 4
        **arg5 = arg3
        *arg5 += 4
        **arg5 = arg4 - 1
        *arg5 += 4

if (arg3 s> 0)
    int64_t r10_3 = sx.q(*(arg1 + 0x38))
    int32_t rsi_2 = *(arg1 + 0x70)
    
    if (*(r8 - (r10_3 << 2)) != rsi_2)
        if (*arg5 == *(arg1 + 0x98))
            *arg5 = *(arg1 + 0x90)
            r10_3 = zx.q(*(arg1 + 0x38))
            rsi_2 = *(arg1 + 0x70)
        
        *(r8 - (sx.q(r10_3.d) << 2)) = rsi_2
        **arg5 = rdi.d
        *arg5 += 4
        **arg5 = arg3 - 1
        *arg5 += 4
        **arg5 = arg4
        *arg5 += 4

if (rdi.d s> 0)
    int32_t rcx_10 = *(arg1 + 0x70)
    
    if (*(r8 - 4) != rcx_10)
        if (*arg5 == *(arg1 + 0x98))
            *arg5 = *(arg1 + 0x90)
            rcx_10 = *(arg1 + 0x70)
        
        *(r8 - 4) = rcx_10
        **arg5 = (rdi - 1).d
        *arg5 += 4
        **arg5 = arg3
        *arg5 += 4
        **arg5 = arg4
        *arg5 += 4

if (rdi.d s< *(arg1 + 0x38) - 1)
    int32_t rcx_12 = *(arg1 + 0x70)
    
    if (*(r8 + 4) != rcx_12)
        if (*arg5 == *(arg1 + 0x98))
            *arg5 = *(arg1 + 0x90)
            rcx_12 = *(arg1 + 0x70)
        
        *(r8 + 4) = rcx_12
        **arg5 = (rdi + 1).d
        *arg5 += 4
        **arg5 = arg3
        *arg5 += 4
        **arg5 = arg4
        *arg5 += 4

if (arg3 s< *(arg1 + 0x3c) - 1)
    int64_t rcx_14 = sx.q(*(arg1 + 0x38))
    int32_t r10_4 = *(arg1 + 0x70)
    
    if (*(r8 + (rcx_14 << 2)) != r10_4)
        if (*arg5 == *(arg1 + 0x98))
            *arg5 = *(arg1 + 0x90)
            rcx_14 = zx.q(*(arg1 + 0x38))
            r10_4 = *(arg1 + 0x70)
        
        *(r8 + (sx.q(rcx_14.d) << 2)) = r10_4
        **arg5 = rdi.d
        *arg5 += 4
        **arg5 = arg3 + 1
        *arg5 += 4
        **arg5 = arg4
        *arg5 += 4

int32_t result = *(arg1 + 0x40) - 1

if (arg4 s< result)
    uint64_t rcx_16 = sx.q(*(arg1 + 0x44))
    int32_t r10_5 = *(arg1 + 0x70)
    
    if (*(r8 + (rcx_16 << 2)) != r10_5)
        if (*arg5 == *(arg1 + 0x98))
            *arg5 = *(arg1 + 0x90)
            rcx_16 = zx.q(*(arg1 + 0x44))
            r10_5 = *(arg1 + 0x70)
        
        *(r8 + (sx.q(rcx_16.d) << 2)) = r10_5
        **arg5 = rdi.d
        *arg5 += 4
        **arg5 = arg3
        result = arg4 + 1
        *arg5 += 4
        **arg5 = result
        *arg5 += 4

return result

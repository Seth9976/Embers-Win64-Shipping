// 函数: sub_142c35220
// 地址: 0x142c35220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 8)
uint32_t result = *(rdi + 0x60)

if (*(rdi + 0x5c) != result || arg1[0x10] != 0)
    int64_t r9_1 = *(arg1 + 0x20)
    int128_t* const r14_1 = &data_14369a5d0
    int128_t* const rsi_1 = &data_14369a5d0
    int128_t* rcx_2 = r9_1 + (zx.q(((zx.q((*(*(rdi + 0x70) + zx.q(*(arg1 + 0x14)) * 0x14)
        + (zx.d(*(arg3 + 4)) << 8) + zx.d(*(arg3 + 5))) * 2) - r9_1 + *(arg1 + 0x18)) u>> 1).d) << 1)
    
    if (rcx_2 u>= r9_1)
        rsi_1 = rcx_2
    
    if (sub_142bf7510(*(arg1 + 8) + 0x20, rsi_1, 2) != 0
            && zx.w(*rsi_1) * 0x100 != neg.w(zx.w(*(rsi_1 + 1))))
        int32_t r8_3 = *(rdi + 0x60)
        int32_t rdx_4 = *(arg1 + 0x14)
        int32_t rax_11 = *(rdi + 0x5c) + 1
        
        if (rax_11 u< r8_3)
            r8_3 = rax_11
        
        if (r8_3 - rdx_4 u>= 2)
            sub_142bf5c70(rdi, rdx_4, r8_3)
        
        *(*(rdi + 0x70) + zx.q(*(arg1 + 0x14)) * 0x14) = (zx.d(*rsi_1) << 8) + zx.d(*(rsi_1 + 1))
        *arg1 = 1
    
    int64_t rdx_8 = *(arg1 + 0x20)
    uint64_t rcx_8 = zx.q(*(rdi + 0x60) - 1)
    
    if (*(rdi + 0x5c) u< rcx_8.d)
        rcx_8 = zx.q(*(rdi + 0x5c))
    
    uint64_t rsi_2 = rcx_8 * 0x14
    int128_t* rcx_14 = rdx_8 + (zx.q(((
        zx.q(((zx.d(*(arg3 + 6)) << 8) + *(rsi_2 + *(rdi + 0x70)) + zx.d(*(arg3 + 7))) * 2) - rdx_8
        + *(arg1 + 0x18)) u>> 1).d) << 1)
    
    if (rcx_14 u>= rdx_8)
        r14_1 = rcx_14
    
    if (sub_142bf7510(*(arg1 + 8) + 0x20, r14_1, 2) != 0)
        uint16_t rdx_10 = zx.w(*r14_1)
        uint32_t r8_4 = zx.d(*(r14_1 + 1))
        
        if (rdx_10 * 0x100 != neg.w(r8_4.w))
            *(rsi_2 + *(rdi + 0x70)) = (zx.d(rdx_10.b) << 8) + r8_4
            *arg1 = 1
    
    result = zx.d(*(arg3 + 3))
    
    if (zx.w(*(arg3 + 2)) * 0x100 + result.w s< 0)
        arg1[0x10] = 1
        result = *(rdi + 0x5c)
        *(arg1 + 0x14) = result

return result

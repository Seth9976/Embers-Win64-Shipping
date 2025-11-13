// 函数: sub_142bf54e0
// 地址: 0x142bf54e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (*(arg1 + 0x59) == 0)
    *(arg1 + 0x5c) = arg2
    rax.b = 1
    return rax

if (*(arg1 + 0x58) == 0)
    rax.b = 0
    return rax

int32_t rsi = *(arg1 + 0x64)

if (rsi u>= arg2)
    if (rsi u<= arg2)
        rax.b = 1
        return rax
    
    uint64_t rsi_1 = zx.q(rsi - arg2)
    char rax_1
    
    if (*(arg1 + 0x5c) u< rsi_1.d)
        rax_1 = sub_142bf5920(arg1, rsi_1.d)
    
    if (*(arg1 + 0x5c) u>= rsi_1.d || rax_1 != 0)
        int64_t rax_7 = *(arg1 + 0x78)
        *(arg1 + 0x64) -= rsi_1.d
        uint64_t rcx_3 = zx.q(*(arg1 + 0x64))
        *(arg1 + 0x5c) -= rsi_1.d
        memmove(*(arg1 + 0x70) + zx.q(*(arg1 + 0x5c)) * 0x14, rax_7 + rcx_3 * 0x14, 
            (rsi_1 * 0x14).d)
        rax.b = 1
        return rax
else
    uint64_t rdi_1 = zx.q(arg2 - rsi)
    
    if (sub_142bf50b0(arg1, rdi_1.d, rdi_1.d) != 0)
        memmove(*(arg1 + 0x78) + zx.q(*(arg1 + 0x64)) * 0x14, 
            *(arg1 + 0x70) + zx.q(*(arg1 + 0x5c)) * 0x14, (rdi_1 * 0x14).d)
        *(arg1 + 0x5c) += rdi_1.d
        int64_t rax_6
        rax_6.b = 1
        *(arg1 + 0x64) += rdi_1.d
        return rax_6

return 0

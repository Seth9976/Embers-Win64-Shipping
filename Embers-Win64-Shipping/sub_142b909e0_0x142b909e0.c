// 函数: sub_142b909e0
// 地址: 0x142b909e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142b8f740(arg1, arg2)
uint32_t i_1 = 0
uint64_t result = zx.q(*(arg2 + 0x214) - *(arg1 + 0x214))
int32_t i = 0
int64_t rsi = sx.q(result.d)

if (*(arg2 + 0x210) s> 0)
    int64_t r10_1 = rsi << 2
    
    do
        int64_t rcx = (neg.q(rsi) << 2) + r10_1
        int64_t r8_1 = *(arg1 + 0x200)
        r10_1 += 4
        i += 1
        int32_t rdx_2 = *(r8_1 + r10_1 - 4) - *(rcx + *(arg2 + 0x200)) - i_1
        result = zx.q(rdx_2) & 0xfffffff
        i_1 = rdx_2 u>> 0x1f
        *(r8_1 + r10_1 - 4) = result.d
    while (i s< *(arg2 + 0x210))
    
    if (i_1 != 0)
        int64_t rdx_5 = (sx.q(i) + rsi) << 2
        
        do
            int64_t rcx_1 = *(arg1 + 0x200)
            rdx_5 += 4
            int32_t rax_6 = *(rcx_1 + rdx_5 - 4) - i_1
            result = zx.q(rax_6) & 0xfffffff
            i_1 = rax_6 u>> 0x1f
            *(rcx_1 + rdx_5 - 4) = result.d
        while (i_1 != 0)

int32_t temp0 = *(arg1 + 0x210)
bool cond:1 = temp0 != 0

if (temp0 s> 0)
    int64_t rcx_2 = *(arg1 + 0x200)
    
    do
        result = sx.q(*(arg1 + 0x210) - 1)
        
        if (*(rcx_2 + (result << 2)) != 0)
            break
        
        *(arg1 + 0x210) -= 1
    while (*(arg1 + 0x210) s> 0)
    
    cond:1 = *(arg1 + 0x210) != 0

if (not(cond:1))
    *(arg1 + 0x214) = 0

return result

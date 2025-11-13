// 函数: sub_140b560b0
// 地址: 0x140b560b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx_1 = *(arg1 + 0xa0) + 1
uint64_t result = *(arg1 + 0xa8)

if (rcx_1 s> result)
    if (*(arg1 + 0xb0) == 0)
        *(arg1 + 0x29) |= 1
        return result
    
    uint64_t rax = result * 2
    
    if (rax s>= rcx_1)
        rcx_1 = rax
    
    *(arg1 + 0xa8) = rcx_1
    int64_t r14_1 = sx.q(*(arg1 + 0x98))
    int32_t rsi_3 = ((rcx_1 + 7) s>> 3).d - *(arg1 + 0x98)
    int32_t rax_1 = r14_1.d + rsi_3
    *(arg1 + 0x98) = rax_1
    
    if (rax_1 s> *(arg1 + 0x9c))
        sub_1405daba0(arg1 + 0x90)
    
    result = memset(r14_1 + *(arg1 + 0x90), 0, sx.q(rsi_3))

if (arg2 != 0)
    int64_t r8_2 = *(arg1 + 0xa0)
    char* rdx_2 = sx.q((r8_2 s>> 3).d) + *(arg1 + 0x90)
    result = zx.q(*((zx.q(r8_2.d) & 7) + &data_142e78978))
    *rdx_2 |= result.b

*(arg1 + 0xa0) += 1
return result

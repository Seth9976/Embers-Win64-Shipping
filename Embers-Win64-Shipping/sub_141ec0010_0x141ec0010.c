// 函数: sub_141ec0010
// 地址: 0x141ec0010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x38)
int32_t rdx_4 = ((not.d(rax) ^ rax) & 1) ^ rax
*(arg1 + 0x38) = rdx_4

if ((rdx_4.b & 1) != 0)
    *(arg1 + 0x70) = *(arg1 + 0x58)
    int32_t result = *(arg1 + 0x58) + 1
    *(arg1 + 0x58) = result
    
    if (result s<= *(arg1 + 0x5c))
        return result
    
    return sub_141eca1b0(arg1 + 0x50) __tailcall

int64_t r10_1 = sx.q(*(arg1 + 0x70))
int32_t rcx_2 = *(arg1 + 0x58)
int32_t rax_4 = rcx_2 - r10_1.d

if (rax_4 != 1)
    memmove(r10_1 * 0x54 + *(arg1 + 0x50), sx.q((r10_1 + 1).d) * 0x54 + *(arg1 + 0x50), 
        (rax_4 - 1) * 0x54)
    rcx_2 = *(arg1 + 0x58)

*(arg1 + 0x58) = rcx_2 - 1
return sub_141eca2f0(arg1 + 0x50) __tailcall

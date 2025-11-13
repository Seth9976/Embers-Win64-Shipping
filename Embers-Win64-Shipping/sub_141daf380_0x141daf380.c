// 函数: sub_141daf380
// 地址: 0x141daf380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x98))
int64_t rax = sx.q(*(arg1 + 0xa0))

if ((*(arg1 + 0x28) & 1) != 0)
    if (rax + arg3 s<= r8)
        int64_t rax_1 = memcpy(arg2, *(arg1 + 0x90) + rax, arg3.d)
        *(arg1 + 0xa0) += arg3.d
        return rax_1
    
    *(arg1 + 0x29) |= 1
    return rax

int32_t rsi_2 = arg3.d - r8.d + rax.d

if (rsi_2 s> 0)
    int64_t r14_1 = sx.q(*(arg1 + 0x98))
    int32_t rax_2 = r14_1.d + rsi_2
    *(arg1 + 0x98) = rax_2
    
    if (rax_2 s> *(arg1 + 0x9c))
        sub_1405daba0(arg1 + 0x90)
    
    memset(r14_1 + *(arg1 + 0x90), 0, sx.q(rsi_2))
    rax = zx.q(*(arg1 + 0xa0))

int64_t rax_3 = memcpy(sx.q(rax.d) + *(arg1 + 0x90), arg2, arg3.d)
*(arg1 + 0xa0) += arg3.d
return rax_3

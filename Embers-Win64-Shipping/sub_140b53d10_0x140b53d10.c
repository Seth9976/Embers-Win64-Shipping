// 函数: sub_140b53d10
// 地址: 0x140b53d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx_1 = *(arg1 + 0xa0) + arg3
uint64_t rax = *(arg1 + 0xa8)

if (rcx_1 s> rax)
    if (*(arg1 + 0xb0) == 0)
        *(arg1 + 0x29) |= 1
        return rax
    
    uint64_t rax_1 = rax * 2
    
    if (rax_1 s>= rcx_1)
        rcx_1 = rax_1
    
    *(arg1 + 0xa8) = rcx_1
    int64_t r14_1 = sx.q(*(arg1 + 0x98))
    int32_t r15_3 = ((rcx_1 + 7) s>> 3).d - *(arg1 + 0x98)
    int32_t rax_2 = r14_1.d + r15_3
    *(arg1 + 0x98) = rax_2
    
    if (rax_2 s> *(arg1 + 0x9c))
        sub_1405daba0(arg1 + 0x90)
    
    rax = memset(r14_1 + *(arg1 + 0x90), 0, sx.q(r15_3))

if (arg3 != 1)
    int64_t rax_5 = sub_140b569b0(*(arg1 + 0x90), *(arg1 + 0xa0), arg2, 0, arg3.d)
    *(arg1 + 0xa0) += arg3
    return rax_5

if ((*arg2 & arg3.b) != 0)
    int64_t r8_1 = *(arg1 + 0xa0)
    char* rdx_2 = sx.q((r8_1 s>> 3).d) + *(arg1 + 0x90)
    rax = zx.q(*((zx.q(r8_1.d) & 7) + &data_142e78978))
    *rdx_2 |= rax.b

*(arg1 + 0xa0) += 1
return rax

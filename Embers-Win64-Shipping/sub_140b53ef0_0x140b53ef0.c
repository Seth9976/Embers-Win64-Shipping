// 函数: sub_140b53ef0
// 地址: 0x140b53ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *(arg1 + 0xa0)
int64_t rcx = rax + arg4
int64_t r9 = *(arg1 + 0xa8)

if (rcx s> r9)
    if (*(arg1 + 0xb0) == 0)
        *(arg1 + 0x29) |= 1
        return rax
    
    int64_t rax_1 = r9 * 2
    
    if (rax_1 s>= rcx)
        rcx = rax_1
    
    *(arg1 + 0xa8) = rcx
    int64_t r14_1 = sx.q(*(arg1 + 0x98))
    int32_t rbp_3 = ((rcx + 7) s>> 3).d - *(arg1 + 0x98)
    int32_t rax_2 = r14_1.d + rbp_3
    *(arg1 + 0x98) = rax_2
    
    if (rax_2 s> *(arg1 + 0x9c))
        sub_1405daba0(arg1 + 0x90)
    
    memset(r14_1 + *(arg1 + 0x90), 0, sx.q(rbp_3))
    rax = zx.q(*(arg1 + 0xa0))

int64_t rax_3 = sub_140b569b0(*(arg1 + 0x90), rax.d, arg2, arg3, arg4.d)
*(arg1 + 0xa0) += arg4
return rax_3

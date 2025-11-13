// 函数: sub_141897420
// 地址: 0x141897420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

char rcx = *(arg1 + 0x29)

if ((rcx & 1) != 0)
    return 

int64_t rax_1 = sx.q(*(arg1 + 0xa0))
int64_t r8_2 = *(arg1 + 0x90) - rax_1 + arg3

if (r8_2 s> 0)
    if (rax_1 + r8_2 s>= 0x7fffffff)
        *(arg1 + 0x29) = rcx | 1
        return 
    
    int32_t rax_3 = *(arg1 + 0xa0) + r8_2.d
    *(arg1 + 0xa0) = rax_3
    
    if (rax_3 s> *(arg1 + 0xa4))
        sub_1405daba0(arg1 + 0x98)

memcpy(sx.q(*(arg1 + 0x90)) + *(arg1 + 0x98), arg2, arg3.d)
*(arg1 + 0x90) += arg3

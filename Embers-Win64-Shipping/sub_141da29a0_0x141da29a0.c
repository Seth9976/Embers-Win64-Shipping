// 函数: sub_141da29a0
// 地址: 0x141da29a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0xa0))
int64_t r8 = sx.q(*(arg1 + 0x98))
int64_t rcx_1
int64_t rdx_1

if ((*(arg1 + 0x28) & 1) == 0)
    int32_t rax_3 = arg3.d - r8.d + rcx.d
    
    if (rax_3 s> 0)
        int32_t rax_4 = rax_3 + *(arg1 + 0x98)
        *(arg1 + 0x98) = rax_4
        
        if (rax_4 s> *(arg1 + 0x9c))
            sub_1405daba0(arg1 + 0x90)
    
    rdx_1 = arg2
    rcx_1 = sx.q(*(arg1 + 0xa0)) + *(arg1 + 0x90)
else
    if (rcx + arg3 s> r8)
        *(arg1 + 0x29) |= 1
        return 
    
    rdx_1 = *(arg1 + 0x90) + rcx
    rcx_1 = arg2

memcpy(rcx_1, rdx_1, arg3.d)
*(arg1 + 0xa0) += arg3.d

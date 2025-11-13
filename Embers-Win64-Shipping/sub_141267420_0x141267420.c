// 函数: sub_141267420
// 地址: 0x141267420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = EnterCriticalSection(arg1 + 0x28)
*(arg1 + 0x10) += 1
int32_t i = 0

if (*(arg1 + 0x20) s> 0)
    int64_t r14_1 = 0
    
    do
        void* rcx_1 = *(arg1 + 0x18)
        result = *(arg1 + 0x10) - *(r14_1 + rcx_1 + 4)
        
        if (result u<= 0x3e8)
            i += 1
            r14_1 += 0x10
        else
            int64_t r15_2 = sx.q(i) << 4
            sub_1405d1550(rcx_1 + 8 + r15_2)
            int32_t rdx_1 = *(arg1 + 0x20)
            int32_t rcx_6 = rdx_1 - i - 1
            
            if (rcx_6 s>= 1)
                rcx_6 = 1
            
            if (rcx_6 != 0)
                int64_t rax_1 = *(arg1 + 0x18)
                memcpy(rax_1 + r15_2, (sx.q(rdx_1 - rcx_6) << 4) + rax_1, rcx_6 << 4)
                rdx_1 = *(arg1 + 0x20)
            
            *(arg1 + 0x20) = rdx_1 - 1
            result = sub_1405a5010(arg1 + 0x18)
    while (i s< *(arg1 + 0x20))

if (arg1 == -0x28)
    return result

return LeaveCriticalSection(arg1 + 0x28) __tailcall

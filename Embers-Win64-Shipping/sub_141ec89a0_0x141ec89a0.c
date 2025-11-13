// 函数: sub_141ec89a0
// 地址: 0x141ec89a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1

if (*arg2 == *(arg1 + 0x2e0) - 1)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2[1])
    int32_t rdx_1 = temp0_1 & 0x3f
    int32_t rax_4 = temp1_1 + rdx_1
    int32_t r8_1 = rax_4 s>> 6
    int64_t rdx_2 = sx.q((rax_4 & 0x3f) - rdx_1)
    int32_t rcx_2 = (*(arg1 + 0x2e0) + 1) & 0x80000001
    
    if (rcx_2 s< 0)
        rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
    
    rax_1 = sx.q(rcx_2) * 0x60 + arg1 + 0x220
    
    if (r8_1 s>= 0 && r8_1 s< *(rax_1 + 8) && rdx_2.d u<= 0x3f)
        rax_1 = *rax_1
        int64_t rcx_5 = sx.q(r8_1)
        int64_t rdx_3 = rdx_2 << 8
        
        if (rdx_3 != neg.q(*(rax_1 + (rcx_5 << 3))))
            sub_141eb6c80(arg3, rdx_3 + *(rax_1 + (rcx_5 << 3)))
            int64_t* rax_10
            rax_10.b = 1
            return rax_10

rax_1.b = 0
return rax_1

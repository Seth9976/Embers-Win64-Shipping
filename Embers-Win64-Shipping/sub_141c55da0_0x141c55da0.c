// 函数: sub_141c55da0
// 地址: 0x141c55da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140758d90(arg1 + 0x338, arg2)

if (result.d == 0xffffffff)
    int64_t rbx_1 = sx.q(*(arg1 + 0x340))
    int32_t rax = (rbx_1 + 1).d
    *(arg1 + 0x340) = rax
    
    if (rax s> *(arg1 + 0x344))
        sub_1405a4f90(arg1 + 0x338)
    
    result = *(arg1 + 0x338)
    *(result + rbx_1 * 0x10) = *arg2

int32_t i = 0

if (*(arg1 + 0x340) s> 0)
    int64_t r14_1 = 0
    
    do
        int32_t* rbp_2 = *(arg1 + 0x338) + r14_1
        int32_t rbx_2 = rbp_2[3]
        char rax_1 = sub_140b5b8a0(rbp_2[2], 0)
        
        if ((rbx_2 == 0 & rax_1) == 0)
            result = sub_140d3c740(rbp_2, 1)
        
        if ((rbx_2 == 0 & rax_1) != 0 || result == 0)
            int32_t rcx_10 = *(arg1 + 0x340)
            int32_t rax_4 = rcx_10 - i - 1
            
            if (rax_4 s>= 1)
                rax_4 = 1
            
            if (rax_4 != 0)
                memcpy((sx.q(i) << 4) + *(arg1 + 0x338), 
                    (sx.q(rcx_10 - rax_4) << 4) + *(arg1 + 0x338), rax_4 << 4)
                rcx_10 = *(arg1 + 0x340)
            
            *(arg1 + 0x340) = rcx_10 - 1
            result = sub_1405a5010(arg1 + 0x338)
        else
            i += 1
            r14_1 += 0x10
    while (i s< *(arg1 + 0x340))

return result

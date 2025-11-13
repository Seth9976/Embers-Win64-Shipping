// 函数: sub_142b90b30
// 地址: 0x142b90b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 3)
    uint32_t r9_1 = 0
    int32_t r10_2 = *(arg2 + 0x214) - *(arg1 + 0x214)
    int32_t i = 0
    
    if (*(arg2 + 0x210) s> 0)
        int64_t rax_2 = sx.q(r10_2)
        int64_t r11_1 = rax_2 << 2
        
        do
            int64_t rcx_1 = (neg.q(rax_2) << 2) + r11_1
            i += 1
            r11_1 += 4
            int64_t rcx_2 = *(arg1 + 0x200)
            int64_t r8_2 = zx.q(*(rcx_1 + *(arg2 + 0x200))) * sx.q(arg3) + zx.q(r9_1)
            int32_t rdx_2 = *(rcx_2 + r11_1 - 4) - (r8_2.d & 0xfffffff)
            r9_1 = (r8_2 u>> 0x1c).d + (rdx_2 u>> 0x1f)
            *(rcx_2 + r11_1 - 4) = rdx_2 & 0xfffffff
        while (i s< *(arg2 + 0x210))
    
    int32_t i_1 = *(arg2 + 0x210) + r10_2
    
    if (i_1 s< *(arg1 + 0x210))
        uint64_t r10_3 = sx.q(i_1) << 2
        
        do
            if (r9_1 == 0)
                return 
            
            int32_t* rcx_3 = *(arg1 + 0x200)
            i_1 += 1
            int32_t rdx_5 = *(rcx_3 + r10_3) - r9_1
            r9_1 = rdx_5 u>> 0x1f
            *(rcx_3 + r10_3) = rdx_5 & 0xfffffff
            r10_3 += 4
        while (i_1 s< *(arg1 + 0x210))
    
    int32_t temp0_1 = *(arg1 + 0x210)
    bool cond:0_1 = temp0_1 != 0
    
    if (temp0_1 s> 0)
        int64_t rcx_4 = *(arg1 + 0x200)
        
        while (*(rcx_4 + (sx.q(*(arg1 + 0x210) - 1) << 2)) == 0)
            *(arg1 + 0x210) -= 1
            
            if (*(arg1 + 0x210) s<= 0)
                break
        
        cond:0_1 = *(arg1 + 0x210) != 0
    
    if (not(cond:0_1))
        *(arg1 + 0x214) = 0
else if (arg3 s> 0)
    uint64_t i_3 = zx.q(arg3)
    uint64_t i_2
    
    do
        sub_142b909e0(arg1, arg2)
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

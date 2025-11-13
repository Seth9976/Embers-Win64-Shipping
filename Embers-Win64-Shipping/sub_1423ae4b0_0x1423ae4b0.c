// 函数: sub_1423ae4b0
// 地址: 0x1423ae4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    int32_t r10_1 = *(arg1 + 0x68)
    int32_t rcx = *(arg1 + 0x64)
    int64_t r8_1 = sx.q(*(arg1 + 0x94))
    
    if (r10_1 - rcx - 1 s<= arg2)
        arg2 = r10_1 - rcx - 1
    
    if (arg2 s> 0)
        *(arg1 + 0xa0) += arg2
        int32_t r10_2 = r10_1 - arg2
        *(arg1 + 0x68) = r10_2
        
        if (r8_1.d s> r10_2)
            int32_t r8_2 = *(arg1 + (r8_1 << 2) + 0x18)
            int32_t rcx_1 = r10_2
            int32_t rdx = *(arg1 + (sx.q(r10_2) << 2) + 0x18)
            int32_t rax_5 = *(arg1 + 0x88)
            *(arg1 + 0x94) = r10_2
            
            if (rax_5 s<= r10_2)
                rcx_1 = rax_5
            
            int32_t rax_6 = *(arg1 + 0x8c)
            *(arg1 + 0x88) = rcx_1
            
            if (rax_6 s<= r10_2)
                r10_2 = rax_6
            
            *(arg1 + 0x8c) = r10_2
            return sx.q(r8_2 - rdx)
    else if (r8_1.d s> rcx)
        *(arg1 + 0x94) = (r8_1 - 1).d
        return sx.q(*(arg1 + (r8_1 << 2) + 0x18) - *(arg1 + (r8_1 << 2) + 0x14))

return 0

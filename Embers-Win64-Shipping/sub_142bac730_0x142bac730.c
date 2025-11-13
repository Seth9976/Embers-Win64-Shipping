// 函数: sub_142bac730
// 地址: 0x142bac730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x258)

for (void* rcx = i + zx.q(*(arg1 + 0x250)) * 0x18; i u< rcx; i += 0x18)
    if (*(i + 0xc) == *(arg1 + 0x218) && *(i + 0x10) != 0)
        int64_t r10 = sx.q(*(arg1 + 0x268))
        
        if (r10.d s>= *(arg1 + 0x26c))
            *(arg1 + 0x18) = 0x82
            return i
        
        int32_t* r8_1 = *(arg1 + 0x270) + r10 * 0x18
        *(arg1 + 0x268) = (r10 + 1).d
        *r8_1 = *(arg1 + 0x204)
        int32_t rcx_4 = *(arg1 + 0x210)
        *(r8_1 + 0x10) = i
        r8_1[1] = rcx_4 + 1
        r8_1[2] = 1
        int32_t r8_2 = *i
        int32_t rdx_2 = *(i + 4)
        
        if (r8_2 - 1 u> 2)
            *(arg1 + 0x18) = 0x84
            *(arg1 + 0x220) = 0
            return r8_2 - 1
        
        int64_t rax_3 = (sx.q(r8_2 - 1) + 0x28) * 2
        int64_t rcx_6 = *(arg1 + (rax_3 << 3))
        
        if (rcx_6 == 0)
            *(arg1 + 0x18) = 0x8a
            *(arg1 + 0x220) = rcx_6.b
            return rax_3
        
        if (rdx_2 s> *(arg1 + (rax_3 << 3) + 8))
            *(arg1 + 0x18) = 0x83
            *(arg1 + 0x220) = 0
            return rax_3
        
        *(arg1 + 0x208) = rcx_6
        int32_t rax_4 = *(arg1 + (rax_3 << 3) + 8)
        *(arg1 + 0x214) = rax_4
        *(arg1 + 0x210) = rdx_2
        *(arg1 + 0x204) = r8_2
        *(arg1 + 0x220) = 0
        return rax_4

*(arg1 + 0x18) = 0x80
return i

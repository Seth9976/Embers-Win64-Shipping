// 函数: sub_142ab3280
// 地址: 0x142ab3280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0

if (*(arg1 + 0x40) == 0)
    int64_t r9_2 = *(arg1 + 0x30)
    
    if (r9_2 == 0)
        *(arg1 + 0x30) = 0
        *(arg1 + 0xc) = 0
        *(arg1 + 0x15) = 0
        *(arg1 + 0x18) = 0
        *(arg1 + 0x20) = 0
        return 
    
    int32_t r8_2 = *(arg1 + 0x10)
    
    if (r8_2 s> 0)
        int64_t rdx_4 = 0
        int32_t rcx_7 = 0
        
        while (rdi.d u> 0xf || ((r9_2 u>> rcx_7.b).b & 0xf) == 0)
            rdi = zx.q(rdi.d + 1)
            rcx_7 += 4
            rdx_4 += 1
            
            if (rdi.d s>= r8_2)
                break
    
    *(arg1 + 0xc) += rdi.d
    uint64_t rdx_5 = zx.q(r8_2 - 1)
    *(arg1 + 0x30) = r9_2 u>> (rdi << 2).b
    
    if (rdx_5.d s>= 0)
        int64_t r9_4 = sx.q(rdx_5.d)
        uint32_t rcx_9 = (rdx_5 << 2).d
        int32_t i = rdx_5.d
        
        while (i u> 0xf || ((*(arg1 + 0x30) u>> rcx_9.b).b & 0xf) == 0)
            i -= 1
            rcx_9 -= 4
            r9_4 -= 1
            int32_t temp1_1 = rdx_5.d
            rdx_5 = zx.q(rdx_5.d - 1)
            
            if (temp1_1 - 1 s< 0)
                break
    
    *(arg1 + 0x10) = (rdx_5 + 1).d
else
    int32_t rcx = *(arg1 + 0x10)
    int32_t rdx_1 = 0
    
    if (rcx s> 0)
        char* rax_1 = *(arg1 + 0x30)
        
        while (*rax_1 == 0)
            rdx_1 += 1
            rax_1 = &rax_1[1]
            
            if (rdx_1 s>= rcx)
                break
    
    if (rdx_1 == rcx)
        sub_142a7dcd0(*(arg1 + 0x30))
        *(arg1 + 0x40) = 0
        *(arg1 + 0x30) = 0
        *(arg1 + 0xc) = 0
        *(arg1 + 0x15) = 0
        *(arg1 + 0x18) = 0
        *(arg1 + 0x20) = 0
        return 
    
    sub_142ab4d40(arg1, rdx_1)
    int32_t rcx_3 = *(arg1 + 0x10)
    int32_t rcx_4 = rcx_3 - 1
    
    if (rcx_3 - 1 s>= 0)
        int64_t rax_3 = sx.q(rcx_4)
        
        while ((*(arg1 + 0x30))[rax_3] == 0)
            rcx_4 -= 1
            int64_t temp2_1 = rax_3
            rax_3 -= 1
            
            if (temp2_1 - 1 s< 0)
                break
    
    *(arg1 + 0x10) = rcx_4 + 1
    
    if (rcx_4 + 1 s<= 0x10)
        return sub_142ab4e10(arg1) __tailcall

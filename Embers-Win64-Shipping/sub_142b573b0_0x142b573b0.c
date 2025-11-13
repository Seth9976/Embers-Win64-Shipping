// 函数: sub_142b573b0
// 地址: 0x142b573b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 1) == 0)
    int16_t rax_1 = *(arg1 + 8)
    void* rdi_1 = arg1 + 0xa
    
    if ((rax_1.b & 2) == 0)
        rdi_1 = *(arg1 + 0x18)
    
    int32_t i_2
    
    if (rax_1 s< 0)
        i_2 = *(arg1 + 0xc)
    else
        i_2 = sx.d(rax_1) s>> 5
    
    int32_t i = i_2
    int32_t i_1 = i_2
    
    if (i_2 s> 0)
        int64_t i_3 = sx.q(i_2)
        void* r15_2 = rdi_1 + ((i_3 - 1) << 1)
        
        do
            uint32_t rcx = zx.d(*(rdi_1 + (i_3 << 1) - 2))
            i_3 -= 1
            i -= 1
            r15_2 -= 2
            
            if ((rcx & 0xfffffc00) == 0xdc00 && i s> 0)
                uint32_t rdx_1 = zx.d(*r15_2)
                
                if ((rdx_1 & 0xfffffc00) == 0xd800)
                    i -= 1
                    i_3 -= 1
                    r15_2 -= 2
                    rcx += (rdx_1 - 0xd7f7) << 0xa
            
            if (rcx != 0x20 && sub_142a54350(rcx) == 0)
                break
            
            i_1 = i
        while (i s> 0)
        
        if (i_1 s< i_2)
            if (i_1 s> 0x3ff)
                *(arg1 + 8) |= 0xffe0
                *(arg1 + 0xc) = i_1
            else
                *(arg1 + 8) &= 0x1f
                *(arg1 + 8) |= i_1.w << 5
    
    int32_t rbx_1 = 0
    int32_t r14_1 = 0
    
    if (i_1 s> 0)
        do
            uint32_t rcx_3 = zx.d(*rdi_1)
            rbx_1 += 1
            rdi_1 += 2
            
            if ((rcx_3 & 0xfffffc00) == 0xd800 && rbx_1 != i_1)
                uint32_t rdx_2 = zx.d(*rdi_1)
                
                if ((rdx_2 & 0xfffffc00) == 0xdc00)
                    rbx_1 += 1
                    rdi_1 += 2
                    rcx_3 = ((rcx_3 - 0xd7f7) << 0xa) + rdx_2
            
            if (rcx_3 != 0x20 && sub_142a54350(rcx_3) == 0)
                break
            
            r14_1 = rbx_1
        while (rbx_1 s< i_1)
        
        if (r14_1 s> 0)
            sub_142a49390(arg1, 0, r14_1, 0, 0, 0)

return arg1

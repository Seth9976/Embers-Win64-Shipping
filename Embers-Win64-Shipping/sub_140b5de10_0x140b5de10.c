// 函数: sub_140b5de10
// 地址: 0x140b5de10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = *(arg1 + 0x2008) - *(arg1 + 0x2064)
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140b5dfa6:
    int32_t r9_3 = *(arg1 + 0x2008) - *(arg1 + 0x2064)
    uint32_t rax_18 = r9_3 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_18)
    int32_t rcx_6
    
    if (rax_18 == 0)
        rcx_6 = 0x20
    else
        rcx_6 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_18 - 1)
    char r8_3
    
    if (rax_18 == 1)
        r8_3 = 0x20
    else
        r8_3 = 0x1f - temp0_3
    
    int32_t rax_20 = 0x100
    int32_t rbp_1 = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r8_3))
    
    if (rbp_1 u>= 0x100)
        if (r9_3 u< 4)
            rbp_1 = 0x100
        
        rax_20 = rbp_1
    
    int32_t rcx_11
    
    if (r9_3 s> 0)
        rcx_11 = *(arg1 + 0x2470)
    
    if (r9_3 s> 0 && (rcx_11 == 0 || rcx_11 s< rax_20))
        *(arg1 + 0x2470) = rax_20
        sub_140b61320(arg1)
    else
        void* r9_4 = arg1 + 0x2068
        int32_t rax_23 = (*(arg1 + 0x2470) - 1) & r13.d
        arg4[3] = rax_23
        void* rdx_10 = *(r9_4 + 0x400)
        int64_t r8_4 = sx.q(rax_23)
        void* rax_24 = r9_4
        
        if (rdx_10 != 0)
            rax_24 = rdx_10
        
        arg4[2] = *(rax_24 + (((sx.q(*(arg1 + 0x2470)) - 1) & r8_4) << 2))
        void* rax_26 = *(r9_4 + 0x400)
        
        if (rax_26 != 0)
            r9_4 = rax_26
        
        *(r9_4 + (((sx.q(*(arg1 + 0x2470)) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = arg1 + 0x2068
        void* rcx = *(arg1 + 0x2468)
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(*(arg1 + 0x2470)) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140b5deb3:
        rbx_1 = -1
    else
        void* rax_2 = *(arg1 + 0x2000)
        void* rcx_1 = arg1
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        while (true)
            int64_t rax_4 = sx.q(rbx_1) * 2
            
            if (*(rcx_1 + (rax_4 << 3)) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + (rax_4 << 3) + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_140b5deb3
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rax_5 = *(arg1 + 0x2000)
        void* rcx_2 = arg1
        
        if (rax_5 != 0)
            rcx_2 = rax_5
        
        memmove(rcx_2 + (sx.q(rbx_1) << 4), arg4, 8)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = arg1 + 0x2010
        
        if (*(arg1 + 0x2064) != 0)
            void* rax_8 = *(arg1 + 0x2000)
            void* rdx_5 = arg1
            
            if (rax_8 != 0)
                rdx_5 = rax_8
            
            *(rdx_5 + sx.q(*(arg1 + 0x2060)) * 0x10) = rcx_4.d
        
        void* rax_11 = *(arg1 + 0x2000)
        void* rdx_6 = arg1
        
        if (rax_11 != 0)
            rdx_6 = rax_11
        
        int64_t r8_2 = rcx_4 * 2
        *(rdx_6 + (r8_2 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x2064) s> 0)
            rdi = *(arg1 + 0x2060)
        
        *(rdx_6 + (r8_2 << 3) + 4) = rdi
        *(arg1 + 0x2064) += 1
        rdi_1 = rbx_1
        *(arg1 + 0x2060) = rcx_4.d
        void* rax_12 = *(r10_1 + 0x40)
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140b5dfa6

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r15.b

return arg2

// 函数: sub_141ec1980
// 地址: 0x141ec1980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[0x202] - arg1[0x20b]
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141ec1b20:
    int32_t rdx_9 = 0x20
    int32_t r9_3 = arg1[0x202] - arg1[0x20b]
    uint32_t rax_17 = r9_3 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_17)
    int32_t rcx_7
    
    if (rax_17 == 0)
        rcx_7 = 0x20
    else
        rcx_7 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_17 - 1)
    char r8_4
    
    if (rax_17 == 1)
        r8_4 = 0x20
    else
        r8_4 = 0x1f - temp0_3
    
    int32_t rbp_1 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    if (rbp_1 u>= 0x20)
        if (r9_3 u< 4)
            rbp_1 = 0x20
        
        rdx_9 = rbp_1
    
    int32_t rax_20
    
    if (r9_3 s> 0)
        rax_20 = arg1[0x22e]
    
    if (r9_3 s> 0 && (rax_20 == 0 || rax_20 s< rdx_9))
        arg1[0x22e] = rdx_9
        sub_141ec9010(arg1)
    else
        void* r9_4 = &arg1[0x20c]
        int32_t rax_23 = (arg1[0x22e] - 1) & r13.d
        *(arg4 + 0x1c) = rax_23
        void* rdx_10 = *(r9_4 + 0x80)
        int64_t r8_5 = sx.q(rax_23)
        void* rax_24 = r9_4
        
        if (rdx_10 != 0)
            rax_24 = rdx_10
        
        arg4[3].d = *(rax_24 + (((sx.q(arg1[0x22e]) - 1) & r8_5) << 2))
        void* rax_26 = *(r9_4 + 0x80)
        
        if (rax_26 != 0)
            r9_4 = rax_26
        
        *(r9_4 + (((sx.q(arg1[0x22e]) - 1) & r8_5) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[0x20c]
        void* rcx = *(arg1 + 0x8b0)
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[0x22e]) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141ec1a30:
        rbx_1 = -1
    else
        int32_t* rax_2 = *(arg1 + 0x800)
        int32_t* rdx_3 = arg1
        
        if (rax_2 != 0)
            rdx_3 = rax_2
        
        while (true)
            int64_t* rcx_2 = sx.q(rbx_1) << 5
            
            if (*(rcx_2 + rdx_3 + 8) == arg4[1].d && *(rcx_2 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_141ec1a30
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int32_t* rax_4 = *(arg1 + 0x800)
        int32_t* rcx_3 = arg1
        
        if (rax_4 != 0)
            rcx_3 = rax_4
        
        memmove(&rcx_3[sx.q(rbx_1) * 8], arg4, 0x18)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[0x204]
        
        if (arg1[0x20b] != 0)
            int32_t* rax_7 = *(arg1 + 0x800)
            int32_t* rdx_5 = arg1
            
            if (rax_7 != 0)
                rdx_5 = rax_7
            
            rdx_5[sx.q(arg1[0x20a]) * 8] = rcx_5.d
        
        int32_t* rax_10 = *(arg1 + 0x800)
        int32_t* rdx_6 = arg1
        
        if (rax_10 != 0)
            rdx_6 = rax_10
        
        rdx_6[rcx_5 * 8] = 0xffffffff
        
        if (arg1[0x20b] s> 0)
            rdi = arg1[0x20a]
        
        rdx_6[rcx_5 * 8 + 1] = rdi
        arg1[0x20b] += 1
        rdi_1 = rbx_1
        arg1[0x20a] = rcx_5.d
        void* rax_11 = *(r10_1 + 8)
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141ec1b20

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

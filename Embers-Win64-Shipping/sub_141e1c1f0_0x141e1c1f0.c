// 函数: sub_141e1c1f0
// 地址: 0x141e1c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[0x42] - arg1[0x4b]
int64_t r11 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141e1c3b6:
    int32_t r9_3 = arg1[0x42] - arg1[0x4b]
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
    
    int32_t rax_19 = 2
    int32_t rbp_1 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    if (rbp_1 u>= 2)
        if (r9_3 u< 4)
            rbp_1 = 2
        
        rax_19 = rbp_1
    
    int32_t rcx_12
    
    if (r9_3 s> 0)
        rcx_12 = arg1[0x50]
    
    if (r9_3 s> 0 && (rcx_12 == 0 || rcx_12 s< rax_19))
        arg1[0x50] = rax_19
        sub_141e2f970(arg1)
    else
        void* r9_4 = &arg1[0x4c]
        int32_t rax_22 = (arg1[0x50] - 1) & r11.d
        arg4[0xf] = rax_22
        void* rdx_10 = *(r9_4 + 8)
        int64_t r8_5 = sx.q(rax_22)
        void* rax_23 = r9_4
        
        if (rdx_10 != 0)
            rax_23 = rdx_10
        
        arg4[0xe] = *(rax_23 + (((sx.q(arg1[0x50]) - 1) & r8_5) << 2))
        void* rax_25 = *(r9_4 + 8)
        
        if (rax_25 != 0)
            r9_4 = rax_25
        
        *(r9_4 + (((sx.q(arg1[0x50]) - 1) & r8_5) << 2)) = rdi_2
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[0x4c]
        void* rcx = *(r8 + 8)
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[0x50]) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141e1c2a3:
        rbx_1 = -1
    else
        int32_t* rax_2 = *(arg1 + 0x100)
        int32_t* rdx_3 = arg1
        
        if (rax_2 != 0)
            rdx_3 = rax_2
        
        while (rdx_3[sx.q(rbx_1) * 0x10] != *arg4 || rdx_3[sx.q(rbx_1) * 0x10 + 1] != arg4[1])
            rbx_1 = rdx_3[sx.q(rbx_1) * 0x10 + 0xe]
            
            if (rbx_1 == 0xffffffff)
                goto label_141e1c2a3
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        int32_t* rax_4 = *(arg1 + 0x100)
        int32_t* rdi = arg1
        
        if (rax_4 != 0)
            rdi = rax_4
        
        void* rdi_1 = &rdi[sx.q(rbx_1) * 0x10]
        int64_t rcx_3 = *(rdi_1 + 0x28)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        memmove(rdi_1, arg4, 0x38)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[0x44]
        
        if (arg1[0x4b] != 0)
            int32_t* rax_7 = *(arg1 + 0x100)
            int32_t* rdx_5 = arg1
            
            if (rax_7 != 0)
                rdx_5 = rax_7
            
            rdx_5[sx.q(arg1[0x4a]) * 0x10] = rcx_5.d
        
        int32_t* rax_10 = *(arg1 + 0x100)
        int32_t* rdx_6 = arg1
        
        if (rax_10 != 0)
            rdx_6 = rax_10
        
        rdx_6[rcx_5 * 0x10] = 0xffffffff
        
        if (arg1[0x4b] s> 0)
            r12_1 = arg1[0x4a]
        
        r11 = zx.q(arg3)
        rdx_6[rcx_5 * 0x10 + 1] = r12_1
        rdi_2 = rbx_1
        arg1[0x4b] += 1
        arg1[0x4a] = rcx_5.d
        void* rax_11 = *(r10_1 + 8)
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141e1c3b6

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r13.b

return arg2

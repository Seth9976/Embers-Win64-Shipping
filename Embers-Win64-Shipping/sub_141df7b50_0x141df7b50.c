// 函数: sub_141df7b50
// 地址: 0x141df7b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[0x42] - arg1[0x4b]
int32_t rdi_2

if (rcx_1 == 1)
    rdi_2 = arg5
label_141df7d0c:
    int32_t r9_4 = arg1[0x42] - arg1[0x4b]
    uint32_t rax_15 = r9_4 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_15)
    int32_t rcx_9
    
    if (rax_15 == 0)
        rcx_9 = 0x20
    else
        rcx_9 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_15 - 1)
    char r8_5
    
    if (rax_15 == 1)
        r8_5 = 0x20
    else
        r8_5 = 0x1f - temp0_3
    
    int32_t rax_17 = 2
    int32_t rbp_1 = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r8_5))
    
    if (rbp_1 u>= 2)
        if (r9_4 u< 4)
            rbp_1 = 2
        
        rax_17 = rbp_1
    
    int32_t rcx_14
    
    if (r9_4 s> 0)
        rcx_14 = arg1[0x50]
    
    if (r9_4 s> 0 && (rcx_14 == 0 || rcx_14 s< rax_17))
        arg1[0x50] = rax_17
        sub_141e0b4f0(arg1)
    else
        void* r9_5 = &arg1[0x4c]
        int32_t rax_20 = (arg1[0x50] - 1) & r11.d
        *(arg4 + 0x3c) = rax_20
        void* rdx_8 = *(r9_5 + 8)
        int64_t r8_6 = sx.q(rax_20)
        void* rax_21 = r9_5
        
        if (rdx_8 != 0)
            rax_21 = rdx_8
        
        arg4[7].d = *(rax_21 + (((sx.q(arg1[0x50]) - 1) & r8_6) << 2))
        void* rax_23 = *(r9_5 + 8)
        
        if (rax_23 != 0)
            r9_5 = rax_23
        
        *(r9_5 + (((sx.q(arg1[0x50]) - 1) & r8_6) << 2)) = rdi_2
else
    int32_t r15_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* r9 = &arg1[0x4c]
        void* rdx = *(r9 + 8)
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[0x50]) - 1) & r11) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_141df7bf9:
        rbx_1 = -1
    else
        int32_t* rcx_2 = *(arg1 + 0x100)
        int32_t* rdx_1 = arg1
        
        if (rcx_2 != 0)
            rdx_1 = rcx_2
        
        while (true)
            int64_t* rcx_4 = sx.q(rbx_1) << 6
            
            if (*(rcx_4 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_4 + rdx_1 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_141df7bf9
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        int32_t* rax_2 = *(arg1 + 0x100)
        int32_t* rdi = arg1
        
        if (rax_2 != 0)
            rdi = rax_2
        
        void* rdi_1 = &rdi[sx.q(rbx_1) * 0x10]
        int64_t rcx_5 = *(rdi_1 + 0x28)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        memmove(rdi_1, arg4, 0x38)
        int64_t rcx_7 = sx.q(arg5)
        void* r10_1 = &arg1[0x44]
        
        if (arg1[0x4b] != 0)
            int32_t* rax_5 = *(arg1 + 0x100)
            int32_t* rdx_3 = arg1
            
            if (rax_5 != 0)
                rdx_3 = rax_5
            
            rdx_3[sx.q(arg1[0x4a]) * 0x10] = rcx_7.d
        
        int32_t* rax_8 = *(arg1 + 0x100)
        int32_t* rdx_4 = arg1
        
        if (rax_8 != 0)
            rdx_4 = rax_8
        
        rdx_4[rcx_7 * 0x10] = 0xffffffff
        
        if (arg1[0x4b] s> 0)
            r15_1 = arg1[0x4a]
        
        r11 = zx.q(arg3)
        rdx_4[rcx_7 * 0x10 + 1] = r15_1
        rdi_2 = rbx_1
        arg1[0x4b] += 1
        arg1[0x4a] = rcx_7.d
        void* rax_9 = *(r10_1 + 8)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141df7d0c

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r12.b

return arg2

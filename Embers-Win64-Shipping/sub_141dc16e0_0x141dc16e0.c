// 函数: sub_141dc16e0
// 地址: 0x141dc16e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[0x62] - arg1[0x6b]
int64_t r13 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141dc1808:
    int32_t r9_2 = arg1[0x62] - arg1[0x6b]
    uint32_t rax_7 = r9_2 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
    int32_t rcx_6
    
    if (rax_7 == 0)
        rcx_6 = 0x20
    else
        rcx_6 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_7 - 1)
    char r8_1
    
    if (rax_7 == 1)
        r8_1 = 0x20
    else
        r8_1 = 0x1f - temp0_3
    
    int32_t rax_9 = 2
    int32_t rbp_1 = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r8_1))
    
    if (rbp_1 u>= 2)
        if (r9_2 u< 4)
            rbp_1 = 2
        
        rax_9 = rbp_1
    
    int32_t rcx_11
    
    if (r9_2 s> 0)
        rcx_11 = arg1[0x70]
    
    if (r9_2 s> 0 && (rcx_11 == 0 || rcx_11 s< rax_9))
        arg1[0x70] = rax_9
        sub_141dd3c60(arg1)
    else
        void* r9_3 = &arg1[0x6c]
        int32_t rax_12 = (arg1[0x70] - 1) & r13.d
        *(arg4 + 0x5c) = rax_12
        void* rdx_9 = *(r9_3 + 8)
        int64_t r8_2 = sx.q(rax_12)
        void* rax_13 = r9_3
        
        if (rdx_9 != 0)
            rax_13 = rdx_9
        
        arg4[0xb].d = *(rax_13 + (((sx.q(arg1[0x70]) - 1) & r8_2) << 2))
        void* rax_15 = *(r9_3 + 8)
        
        if (rax_15 != 0)
            r9_3 = rax_15
        
        *(r9_3 + (((sx.q(arg1[0x70]) - 1) & r8_2) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[0x6c]
        void* rcx = *(r8 + 8)
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[0x70]) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141dc178a:
        rbx_1 = -1
    else
        int32_t* rax_2 = *(arg1 + 0x180)
        int32_t* rdx_3 = arg1
        
        if (rax_2 != 0)
            rdx_3 = rax_2
        
        while (true)
            int64_t* rcx_2 = sx.q(rbx_1) * 0x60
            
            if (*(rcx_2 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0x58)
            
            if (rbx_1 == 0xffffffff)
                goto label_141dc178a
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        int32_t* rax_4 = *(arg1 + 0x180)
        int32_t* rdi = arg1
        
        if (rax_4 != 0)
            rdi = rax_4
        
        void* rdi_1 = &rdi[sx.q(rbx_1) * 0x18]
        sub_1405ae080(rdi_1 + 8)
        memmove(rdi_1, arg4, 0x58)
        sub_141dd4580(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141dc1808

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r15.b

return arg2

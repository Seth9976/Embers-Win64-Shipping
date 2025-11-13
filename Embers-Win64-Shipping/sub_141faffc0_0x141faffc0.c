// 函数: sub_141faffc0
// 地址: 0x141faffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141fb0133:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_12 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_7
        
        if (rax_12 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        char r9_2
        
        if (rax_12 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_15
    
    if (r8_5 s> 0)
        rax_15 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_15 == 0 || rax_15 s< rbp))
        arg1[9].d = rbp
        sub_141fc32e0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0xc) = rax_18
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_6 = sx.q(rax_18)
        void* rax_19 = r9_3
        
        if (rdx_10 != 0)
            rax_19 = rdx_10
        
        arg4[1].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_21 = *(r9_3 + 8)
        
        if (rax_21 != 0)
            r9_3 = rax_21
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_1
else
    int64_t rdi = *arg4
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141fb0075:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            r14 = sx.q(rbx_1) << 4
            int64_t arg_8 = rdi
            int64_t arg_10 = *(r14 + rax_2)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(r14 + rax_2 + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_141fb0075
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove((sx.q(rbx_1) << 4) + *arg1, arg4, 8)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x10) = rcx_5.d
        
        int32_t* r8_3 = (rcx_5 << 4) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r8_3[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_6 = *(r10_1 + 0x10)
        
        if (rax_6 != 0)
            r10_1 = rax_6
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_141fb0133

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r14.b

return arg2

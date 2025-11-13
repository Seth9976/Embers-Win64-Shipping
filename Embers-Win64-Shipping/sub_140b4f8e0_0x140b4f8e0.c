// 函数: sub_140b4f8e0
// 地址: 0x140b4f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r14 = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140b4fa31:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_12 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_9
        
        if (rax_12 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        char r9_2
        
        if (rax_12 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_15
    
    if (r8_5 s> 0)
        rax_15 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_15 == 0 || rax_15 s< r14))
        arg1[9].d = r14
        sub_1408076e0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_18
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_6 = sx.q(rax_18)
        void* rax_19 = r9_3
        
        if (rdx_10 != 0)
            rax_19 = rdx_10
        
        arg4[3].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_21 = *(r9_3 + 8)
        
        if (rax_21 != 0)
            r9_3 = rax_21
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140b4f98c:
        rbx_1 = -1
    else
        while (true)
            int64_t* rcx_3 = (sx.q(rbx_1) << 5) + *arg1
            
            if (*rcx_3 == *arg4 && rcx_3[1] == arg4[1] && rcx_3[2].d == arg4[2].d)
                break
            
            rbx_1 = rcx_3[3].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140b4f98c
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove((sx.q(rbx_1) << 5) + *arg1, arg4, 0x18)
        int64_t rcx_7 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_7.d
        
        int32_t* r8_3 = (rcx_7 << 5) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        r8_3[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_7.d
        void* rax_6 = *(r10_1 + 0x10)
        
        if (rax_6 != 0)
            r10_1 = rax_6
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140b4fa31

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

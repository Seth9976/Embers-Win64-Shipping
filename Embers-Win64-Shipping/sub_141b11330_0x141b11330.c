// 函数: sub_141b11330
// 地址: 0x141b11330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int32_t* r14 = arg4
int64_t r11 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141b114bd:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_16 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16 + 8)
        int32_t rcx_7
        
        if (rax_16 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_16 + 7)
        char r9_1
        
        if (rax_16 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_19
    
    if (r8_5 s> 0)
        rax_19 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_19 == 0 || rax_19 s< rbp))
        arg1[9].d = rbp
        sub_140afdae0(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_22 = (arg1[9].d - 1) & r11.d
        r14[0xd] = rax_22
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_22)
        void* rax_23 = r9_2
        
        if (rdx_9 != 0)
            rax_23 = rdx_9
        
        r14[0xc] = *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_25 = *(r9_2 + 8)
        
        if (rax_25 != 0)
            r9_2 = rax_25
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_2
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141b113c6:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int32_t* rcx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rcx_1 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_141b113c6
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rdi_1 = sx.q(rbx_1) * 0x38 + *arg1
        char rax_4 = *(rdi_1 + 0x28)
        
        if ((1 & rax_4) != 0)
            void* rcx_2 = rdi_1 + 8
            
            if ((rax_4 & 2) == 0)
                rcx_2 = *(rdi_1 + 8)
            
            *(rdi_1 + 0x28) = rax_4 & 0xfe
            (**rcx_2)(rcx_2, 0)
            
            if ((*(rdi_1 + 0x28) & 2) == 0)
                sub_140a74f90(*(rdi_1 + 8))
        
        r14 = arg4
        memmove(rdi_1, r14, 0x30)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_5.d
        
        int32_t* rax_9 = rcx_5 * 0x38 + *arg1
        *rax_9 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        rax_9[1] = r12_1
        rdi_2 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141b114bd

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r13.b

return arg2

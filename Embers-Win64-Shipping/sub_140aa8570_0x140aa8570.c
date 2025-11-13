// 函数: sub_140aa8570
// 地址: 0x140aa8570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r14 = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140aa8714:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_14 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_14 + 8)
        int32_t rcx_8
        
        if (rax_14 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_3
        
        uint64_t rflags_2
        char temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_14 + 7)
        char r9_2
        
        if (rax_14 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_4
        
        r14 = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_17
    
    if (r8_6 s> 0)
        rax_17 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_17 == 0 || rax_17 s< r14))
        arg1[9].d = r14
        sub_140abf450(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x3c) = rax_20
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_7 = sx.q(rax_20)
        void* rax_21 = r9_3
        
        if (rdx_10 != 0)
            rax_21 = rdx_10
        
        arg4[7].d = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_23 = *(r9_3 + 8)
        
        if (rax_23 != 0)
            r9_3 = rax_23
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi_1
else
    int32_t r15_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140aa8611:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) << 6
            
            if (*(rcx_2 + rdx_3) == *arg4 && *(rcx_2 + rdx_3 + 0x10) == arg4[2])
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa8611
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_3 = (sx.q(rbx_1) << 6) + *arg1
        int64_t* rdi = *(rbp_3 + 0x28)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t rax_5 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rbp_3, arg4, 0x38)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 6) + *arg1) = rcx_6.d
        
        int32_t* r8_4 = (rcx_6 << 6) + *arg1
        *r8_4 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        rbp = zx.q(rbp.b)
        r11 = zx.q(arg3)
        rdi_1 = rbx_1
        r8_4[1] = r15_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_6.d
        void* rax_8 = *(r10_1 + 0x10)
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140aa8714

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

// 函数: sub_141835970
// 地址: 0x141835970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* r10 = arg4
int32_t r14 = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_141835b1b:
    int32_t rdx_10 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_10 u>= 4)
        uint32_t rax_12 = rdx_10 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_5
        
        if (rax_12 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        char r8_4
        
        if (rax_12 == 0xfffffff9)
            r8_4 = 0x20
        else
            r8_4 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    int32_t rax_15
    
    if (rdx_10 s> 0)
        rax_15 = arg1[9].d
    
    if (rdx_10 s> 0 && (rax_15 == 0 || rax_15 s< r14))
        arg1[9].d = r14
        sub_1408076e0(arg1)
    else
        void* r9_5 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r11.d
        r10[7] = rax_18
        void* rdx_11 = *(r9_5 + 8)
        int64_t r8_5 = sx.q(rax_18)
        void* rax_19 = r9_5
        
        if (rdx_11 != 0)
            rax_19 = rdx_11
        
        r10[6] = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_21 = *(r9_5 + 8)
        
        if (rax_21 != 0)
            r9_5 = rax_21
        
        *(r9_5 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_3
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
    label_141835a16:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 5
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_141835a16
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 5) + *arg1
        void* i = *(rdi_2 + 8)
        
        if (i != 0)
            do
                *(rdi_2 + 0x10) = *(i + 0x18)
                *(i + 0x10) = 0
                *(i + 0x18) = 0
                j_sub_140a74f90(i)
                i = *(rdi_2 + 0x10)
                *(rdi_2 + 8) = i
            while (i != 0)
            
            r10 = arg4
        
        memmove(rdi_2, r10, 0x18)
        int64_t rcx_3 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_3.d
        
        int32_t* r8_3 = (rcx_3 << 5) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        r8_3[1] = r12_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_3.d
        void* rax_6 = *(r10_1 + 0x10)
        
        if (rax_6 != 0)
            r10_1 = rax_6
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_3.d)
        int64_t rcx_4 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_4 << 2)) &= not.d(rol.d(1, rcx_3.b))
        r10 = arg4
    
    if (rbx_1 == 0xffffffff)
        goto label_141835b1b

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return arg2

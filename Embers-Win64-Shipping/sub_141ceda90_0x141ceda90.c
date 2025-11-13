// 函数: sub_141ceda90
// 地址: 0x141ceda90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141cedbed:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_14 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14 + 8)
        int32_t rcx_6
        
        if (rax_14 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_14 + 7)
        char r9_1
        
        if (rax_14 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_17
    
    if (r8_5 s> 0)
        rax_17 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_17 == 0 || rax_17 s< rbp))
        arg1[9].d = rbp
        sub_140afdae0(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & r11.d
        arg4[0xd] = rax_20
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_20)
        void* rax_21 = r9_2
        
        if (rdx_9 != 0)
            rax_21 = rdx_9
        
        arg4[0xc] = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_23 = *(r9_2 + 8)
        
        if (rax_23 != 0)
            r9_2 = rax_23
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_2
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
    label_141cedb26:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int32_t* rcx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rcx_1 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_141cedb26
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rdi_1 = sx.q(rbx_1) * 0x38 + *arg1
        int64_t rcx_2 = *(rdi_1 + 0x20)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        memmove(rdi_1, arg4, 0x30)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_4.d
        
        int32_t* rax_7 = rcx_4 * 0x38 + *arg1
        *rax_7 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        rax_7[1] = r15_1
        rdi_2 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_4.d
        void* rax_8 = *(r10_1 + 0x10)
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141cedbed

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r12.b

return arg2

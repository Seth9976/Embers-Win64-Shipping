// 函数: sub_140924530
// 地址: 0x140924530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_14092469a:
    int32_t r8_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_7 u>= 4)
        uint32_t rax_13 = r8_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13 + 8)
        int32_t rcx_9
        
        if (rax_13 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_13 + 7)
        char r9_1
        
        if (rax_13 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_16
    
    if (r8_7 s> 0)
        rax_16 = arg1[9].d
    
    if (r8_7 s> 0 && (rax_16 == 0 || rax_16 s< rbp))
        arg1[9].d = rbp
        sub_14092eb60(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x44) = rax_19
        void* rdx_8 = *(r9_2 + 8)
        int64_t r8_8 = sx.q(rax_19)
        void* rax_20 = r9_2
        
        if (rdx_8 != 0)
            rax_20 = rdx_8
        
        arg4[8].d = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2))
        void* rax_22 = *(r9_2 + 8)
        
        if (rax_22 != 0)
            r9_2 = rax_22
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2)) = rdi_1
else
    int32_t r15_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_1409245c7:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 9
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x40)
            
            if (rbx_1 == 0xffffffff)
                goto label_1409245c7
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rdi = *arg1 + sx.q(rbx_1) * 0x48
        sub_14091a840(rdi + 0x28)
        int64_t rcx_5 = *(rdi + 0x18)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        memmove(rdi, arg4, 0x40)
        int64_t rcx_7 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x48) = rcx_7.d
        
        int64_t rax_6 = *arg1
        int64_t rdx_4 = rcx_7 * 9
        *(rax_6 + (rdx_4 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        *(rax_6 + (rdx_4 << 3) + 4) = r15_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_7.d
        void* rax_7 = *(r10_1 + 0x10)
        
        if (rax_7 != 0)
            r10_1 = rax_7
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14092469a

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

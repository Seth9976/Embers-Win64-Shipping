// 函数: sub_141b11770
// 地址: 0x141b11770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141b118a5:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_15 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_6
        
        if (rax_15 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r9_1
        
        if (rax_15 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_18
    
    if (r8_5 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_18 == 0 || rax_18 s< rbp))
        arg1[9].d = rbp
        sub_141b2e650(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r13.d
        arg4[6] = rax_21
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_21)
        void* rax_22 = r9_2
        
        if (rdx_9 != 0)
            rax_22 = rdx_9
        
        arg4[5] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_24 = *(r9_2 + 8)
        
        if (rax_24 != 0)
            r9_2 = rax_24
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_1
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
    label_141b11802:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int32_t* rcx_1 = sx.q(rbx_1) * 0x1c
            
            if (*(rcx_1 + rdx_3) == *arg4 && *(rcx_1 + rdx_3 + 4) == arg4[1])
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x14)
            
            if (rbx_1 == 0xffffffff)
                goto label_141b11802
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(sx.q(rbx_1) * 0x1c + *arg1, arg4, 0x14)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x1c + *arg1) = rcx_4.d
        
        int32_t* rax_8 = rcx_4 * 0x1c + *arg1
        *rax_8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        rax_8[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141b118a5

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

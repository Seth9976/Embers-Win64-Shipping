// 函数: sub_141e3cd70
// 地址: 0x141e3cd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int64_t r13 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_141e3cec3:
    
    if (sub_14093d550(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x24) = rax_15
        void* rdx_9 = *(r9_1 + 8)
        int64_t r8_6 = sx.q(rax_15)
        void* rax_16 = r9_1
        
        if (rdx_9 != 0)
            rax_16 = rdx_9
        
        arg4[4].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_18 = *(r9_1 + 8)
        
        if (rax_18 != 0)
            r9_1 = rax_18
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_141e3cdf6:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 5
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_141e3cdf6
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 5
        int64_t rax_3 = *arg1
        int64_t rcx_4 = *(rax_3 + (rcx_3 << 3) + 0x10)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rax_3 + (rcx_3 << 3), arg4, 0x20)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_6.d
        
        int64_t rax_6 = *arg1
        int64_t rdx_4 = rcx_6 * 5
        *(rax_6 + (rdx_4 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        *(rax_6 + (rdx_4 << 3) + 4) = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_7 = *(r10_1 + 0x10)
        
        if (rax_7 != 0)
            r10_1 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141e3cec3

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r15.b

return arg2

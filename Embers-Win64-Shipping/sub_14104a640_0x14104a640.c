// 函数: sub_14104a640
// 地址: 0x14104a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14104a79b:
    
    if (sub_141045630(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x2c) = rax_18
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_1 = sx.q(rax_18)
        void* rax_19 = r9_2
        
        if (rdx_11 != 0)
            rax_19 = rdx_11
        
        *(arg4 + 0x28) = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_21 = *(r9_2 + 8)
        
        if (rax_21 != 0)
            r9_2 = rax_21
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_3
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14104a6db:
        rbx_1 = -1
    else
        rbp = *arg1
        
        while (true)
            void* buffer1 = sx.q(rbx_1) * 0x30 + rbp
            
            if (memcmp(buffer1, arg4, 0x20) == 0)
                break
            
            rbx_1 = *(buffer1 + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_14104a6db
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        memmove(sx.q(rbx_1) * 0x30 + *arg1, arg4, 0x28)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = rcx_5.d
        
        int32_t* rax_9 = rcx_5 * 0x30 + *arg1
        *rax_9 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_9[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14104a79b

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

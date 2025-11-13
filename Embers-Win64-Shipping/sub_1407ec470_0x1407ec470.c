// 函数: sub_1407ec470
// 地址: 0x1407ec470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_1407ec5b0:
    
    if (sub_1407e92c0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x1c) = rax_12
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_12)
        void* rax_13 = r9_2
        
        if (rdx_11 != 0)
            rax_13 = rdx_11
        
        arg4[3].d = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_15 = *(r9_2 + 8)
        
        if (rax_15 != 0)
            r9_2 = rax_15
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1407ec500:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) << 5
            
            if (*(rcx_2 + rdx_3) == *arg4 && *(rcx_2 + rdx_3 + 8) == arg4[1].b)
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1407ec500
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove((sx.q(rbx_1) << 5) + *arg1, arg4, 0x18)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_6.d
        
        int32_t* r8_4 = (rcx_6 << 5) + *arg1
        *r8_4 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        r8_4[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_4 = *(r10_1 + 0x10)
        
        if (rax_4 != 0)
            r10_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1407ec5b0

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

// 函数: sub_14084ebd0
// 地址: 0x14084ebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_14084ed3c:
    
    if (sub_14084bdb0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r13.d
        arg4[2].d = rax_18
        void* rdx_12 = *(r9_2 + 8)
        int64_t r8_1 = sx.q(rax_18)
        void* rax_19 = r9_2
        
        if (rdx_12 != 0)
            rax_19 = rdx_12
        
        *(arg4 + 0xc) = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_21 = *(r9_2 + 8)
        
        if (rax_21 != 0)
            r9_2 = rax_21
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_1
else
    int64_t rdi = *arg4
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14084ec7d:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t arg_8 = rdi
            r14 = sx.q(rbx_1) * 0x14
            int64_t arg_10 = *(r14 + rdx_3)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rdx_3 = *arg1
            rbx_1 = *(r14 + rdx_3 + 0xc)
            
            if (rbx_1 == 0xffffffff)
                goto label_14084ec7d
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x14, arg4, 0xc)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x14) = rcx_5.d
        
        int64_t rax_9 = *arg1
        int64_t rdx_7 = rcx_5 * 5
        *(rax_9 + (rdx_7 << 2)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        *(rax_9 + (rdx_7 << 2) + 4) = rbp_1
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
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
        goto label_14084ed3c

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r14.b

return arg2

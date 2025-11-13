// 函数: sub_1420f7770
// 地址: 0x1420f7770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_5

if (rax_1 == 1)
    rdi_5 = arg5
label_1420f78f2:
    
    if (sub_1420f6f20(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_23 = (arg1[9].d - 1) & r13.d
        arg4[0x21] = rax_23
        void* rdx_13 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_23)
        void* rax_24 = r9_1
        
        if (rdx_13 != 0)
            rax_24 = rdx_13
        
        arg4[0x20] = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_26 = *(r9_1 + 8)
        
        if (rax_26 != 0)
            r9_1 = rax_26
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_5
else
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1420f7826:
        rbx_1 = -1
    else
        while (true)
            void* rdx_5 = sx.q(rbx_1) * 0x90 + *arg1
            
            if (((*(rdx_5 + 4) ^ arg4[1]) | (*(rdx_5 + 8) ^ arg4[2]) | (*(rdx_5 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_5)) == 0)
                break
            
            rbx_1 = *(rdx_5 + 0x80)
            
            if (rbx_1 == 0xffffffff)
                goto label_1420f7826
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_5 = arg5
    else
        void* rdi_4 = sx.q(rbx_1) * 0x90 + *arg1
        int64_t rcx_6 = *(rdi_4 + 0x68)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        memmove(rdi_4, arg4, 0x80)
        int64_t rcx_8 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x90) = rcx_8.d
        
        int32_t* rax_14 = rcx_8 * 0x90 + *arg1
        *rax_14 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        rax_14[1] = rbp_1
        *(arg1 + 0x34) += 1
        rdi_5 = rbx_1
        arg1[6].d = rcx_8.d
        void* rax_15 = *(r10_2 + 0x10)
        
        if (rax_15 != 0)
            r10_2 = rax_15
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1420f78f2

*arg2 = rdi_5

if (arg6 != 0)
    *arg6 = r12.b

return arg2

// 函数: sub_1420f7bc0
// 地址: 0x1420f7bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_1420f7d41:
    
    if (sub_1420f7080(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_22 = (arg1[9].d - 1) & r13.d
        arg4[0x15] = rax_22
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_22)
        void* rax_23 = r9_2
        
        if (rdx_11 != 0)
            rax_23 = rdx_11
        
        arg4[0x14] = *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_25 = *(r9_2 + 8)
        
        if (rax_25 != 0)
            r9_2 = rax_25
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_4
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
    label_1420f7c6f:
        rbx_1 = -1
    else
        while (true)
            void* rdx_4 = sx.q(rbx_1) * 0x58 + *arg1
            
            if (((*(rdx_4 + 4) ^ arg4[1]) | (*(rdx_4 + 8) ^ arg4[2]) | (*(rdx_4 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_4)) == 0)
                break
            
            rbx_1 = *(rdx_4 + 0x50)
            
            if (rbx_1 == 0xffffffff)
                goto label_1420f7c6f
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = sx.q(rbx_1) * 0x58 + *arg1
        int64_t rcx_6 = *(rdi_3 + 0x30)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rdi_3 + 0x20)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        memmove(rdi_3, arg4, 0x50)
        int64_t rcx_9 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x58 + *arg1) = rcx_9.d
        
        int32_t* rax_13 = rcx_9 * 0x58 + *arg1
        *rax_13 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        rax_13[1] = rbp_1
        *(arg1 + 0x34) += 1
        rdi_4 = rbx_1
        arg1[6].d = rcx_9.d
        void* rax_14 = *(r10_2 + 0x10)
        
        if (rax_14 != 0)
            r10_2 = rax_14
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_9.d)
        int64_t rcx_10 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_10 << 2)) &= not.d(rol.d(1, rcx_9.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1420f7d41

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = r12.b

return arg2

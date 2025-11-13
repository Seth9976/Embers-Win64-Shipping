// 函数: sub_142744b10
// 地址: 0x142744b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_142744c84:
    
    if (sub_141b50c00(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_14
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_14)
        void* rax_15 = r9_2
        
        if (rdx_11 != 0)
            rax_15 = rdx_11
        
        arg4[3].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_17 = *(r9_2 + 8)
        
        if (rax_17 != 0)
            r9_2 = rax_17
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_4
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
    label_142744bb5:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            r14 = sx.q(rbx_1) << 5
            int64_t arg_8 = rdi
            int64_t arg_10 = *(r14 + rax_2)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(r14 + rax_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_142744bb5
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = (sx.q(rbx_1) << 5) + *arg1
        int64_t rcx_2 = *(rdi_3 + 8)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        memmove(rdi_3, arg4, 0x18)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_4.d
        
        int32_t* r8_3 = (rcx_4 << 5) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        r8_3[1] = rbp_1
        *(arg1 + 0x34) += 1
        rdi_4 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_6 = *(r10_1 + 0x10)
        
        if (rax_6 != 0)
            r10_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_142744c84

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = r14.b

return arg2

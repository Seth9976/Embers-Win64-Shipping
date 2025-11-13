// 函数: sub_141938730
// 地址: 0x141938730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_141938896:
    
    if (sub_141934a80(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x3c) = rax_14
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_14)
        void* rax_15 = r9_2
        
        if (rdx_11 != 0)
            rax_15 = rdx_11
        
        arg4[7].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_17 = *(r9_2 + 8)
        
        if (rax_17 != 0)
            r9_2 = rax_17
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_3
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
    label_1419387cd:
        rbx_1 = -1
    else
        while (true)
            int64_t* rcx_3 = (sx.q(rbx_1) << 6) + *arg1
            
            if (*rcx_3 == *arg4 && rcx_3[1] == arg4[1] && rcx_3[2].d == arg4[2].d)
                break
            
            rbx_1 = rcx_3[7].d
            
            if (rbx_1 == 0xffffffff)
                goto label_1419387cd
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 6) + *arg1
        int64_t rcx_4 = *(rdi_2 + 0x28)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rdi_2, arg4, 0x38)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 6) + *arg1) = rcx_6.d
        
        int32_t* r8_3 = (rcx_6 << 6) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r8_3[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_6 = *(r10_1 + 0x10)
        
        if (rax_6 != 0)
            r10_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141938896

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return arg2

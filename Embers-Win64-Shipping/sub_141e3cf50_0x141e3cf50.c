// 函数: sub_141e3cf50
// 地址: 0x141e3cf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int64_t r13 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_3

if (rcx_1 == 1)
    rdi_3 = arg5
label_141e3d0b3:
    
    if (sub_141e3c0c0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x7c) = rax_11
        void* rdx_9 = *(r9_3 + 8)
        int64_t r8_6 = sx.q(rax_11)
        void* rax_12 = r9_3
        
        if (rdx_9 != 0)
            rax_12 = rdx_9
        
        arg4[0xf].d = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_14 = *(r9_3 + 8)
        
        if (rax_14 != 0)
            r9_3 = rax_14
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_3
else
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_141e3cfd6:
        rbx_1 = -1
    else
        int64_t rdx_1 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) << 7
            
            if (*(rcx_3 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_3 + rdx_1 + 0x78)
            
            if (rbx_1 == 0xffffffff)
                goto label_141e3cfd6
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 7) + *arg1
        sub_1405ae180(rdi_2 + 0x28)
        int64_t rcx_5 = *(rdi_2 + 0x18)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *(rdi_2 + 8)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        memmove(rdi_2, arg4, 0x78)
        int64_t rcx_8 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 7) + *arg1) = rcx_8.d
        
        int32_t* r8_5 = (rcx_8 << 7) + *arg1
        *r8_5 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        r8_5[1] = rbp_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_8.d
        void* rax_3 = *(r10_1 + 0x10)
        
        if (rax_3 != 0)
            r10_1 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141e3d0b3

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return arg2

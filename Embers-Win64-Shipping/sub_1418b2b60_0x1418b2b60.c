// 函数: sub_1418b2b60
// 地址: 0x1418b2b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int64_t r13 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_2

if (rcx_1 == 1)
    rdi_2 = arg5
label_1418b2cb9:
    
    if (sub_1418b1850(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x34) = rax_15
        void* rdx_8 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_15)
        void* rax_16 = r9_2
        
        if (rdx_8 != 0)
            rax_16 = rdx_8
        
        arg4[6].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_18 = *(r9_2 + 8)
        
        if (rax_18 != 0)
            r9_2 = rax_18
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_2
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
    label_1418b2be7:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t* rdx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rdx_1 + r8_3) == *arg4)
                break
            
            rbx_1 = *(rdx_1 + r8_3 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_1418b2be7
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rdi_1 = sx.q(rbx_1) * 0x38 + *arg1
        int64_t rcx_3 = *(rdi_1 + 0x18)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rdi_1 + 8)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rdi_1, arg4, 0x30)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_6.d
        
        int32_t* rax_6 = rcx_6 * 0x38 + *arg1
        *rax_6 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        rax_6[1] = rbp_1
        *(arg1 + 0x34) += 1
        rdi_2 = rbx_1
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
        goto label_1418b2cb9

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r15.b

return arg2

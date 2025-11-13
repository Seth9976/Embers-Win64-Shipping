// 函数: sub_1426517b0
// 地址: 0x1426517b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_142651914:
    
    if (sub_14264c9a0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r13.d
        arg4[0xf] = rax_16
        void* rdx_10 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_16)
        void* rax_17 = r9_2
        
        if (rdx_10 != 0)
            rax_17 = rdx_10
        
        arg4[0xe] = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_19 = *(r9_2 + 8)
        
        if (rax_19 != 0)
            r9_2 = rax_19
        
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
    label_14265185c:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            int64_t rdi_2 = sx.q(rbx_1) << 6
            int32_t* rcx_1 = rdi_2 + rax_2
            
            if (*rcx_1 == *arg4 && rcx_1[1] == arg4[1])
                break
            
            if (sub_140d3e110(rcx_1) == 0 && sub_140d3e110(arg4) == 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rdi_2 + rax_2 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_14265185c
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        memmove((sx.q(rbx_1) << 6) + *arg1, arg4, 0x38)
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
        void* rax_8 = *(r10_1 + 0x10)
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_142651914

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

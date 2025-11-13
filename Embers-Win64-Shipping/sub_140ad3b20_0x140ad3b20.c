// 函数: sub_140ad3b20
// 地址: 0x140ad3b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_6

if (rax_1 == 1)
    rdi_6 = arg5
label_140ad3c9b:
    
    if (sub_140ad0630(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_13 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_13
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_13)
        void* rax_14 = r9_2
        
        if (rdx_11 != 0)
            rax_14 = rdx_11
        
        arg4[3].d = *(rax_14 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_16 = *(r9_2 + 8)
        
        if (rax_16 != 0)
            r9_2 = rax_16
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_6
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
    label_140ad3bd3:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            int64_t rdi_2 = sx.q(rbx_1) << 5
            int16_t* rdx_3
            
            if (arg4[1].d == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *arg4
            
            int16_t* const rcx_1
            
            if (*(rdi_2 + rax_2 + 8) == 0)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *(rdi_2 + rax_2)
            
            if (sub_140a54510(rcx_1, rdx_3) == 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rdi_2 + rax_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140ad3bd3
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_6 = arg5
    else
        int64_t* rdi_5 = (sx.q(rbx_1) << 5) + *arg1
        int64_t rcx_2 = *rdi_5
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        memmove(rdi_5, arg4, 0x18)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_4.d
        
        int32_t* r8_3 = (rcx_4 << 5) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r8_3[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_6 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_5 = *(r10_1 + 0x10)
        
        if (rax_5 != 0)
            r10_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140ad3c9b

*arg2 = rdi_6

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

// 函数: sub_14199df50
// 地址: 0x14199df50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* result = arg2
int64_t r13 = sx.q(arg3.d)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14199e0b5:
    
    if (sub_14199a0a0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_12
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_12)
        void* rax_13 = r9_2
        
        if (rdx_9 != 0)
            rax_13 = rdx_9
        
        *(arg4 + 0x18) = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_15 = *(r9_2 + 8)
        
        if (rax_15 != 0)
            r9_2 = rax_15
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_3
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        arg3 = &arg1[7]
        void* rcx = arg1[8]
        arg2 = (sx.q(arg1[9].d) - 1) & r13
        
        if (rcx != 0)
            arg3 = rcx
        
        rbx_1 = *(arg3 + (arg2 << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14199dff1:
        rbx_1 = -1
    else
        arg2 = *arg1
        arg3 = zx.q(*(arg4 + 8))
        
        while (arg2[sx.q(rbx_1) * 8 + 2] != arg3.d || arg2[sx.q(rbx_1) * 8 + 3] != *(arg4 + 0xc))
            rbx_1 = arg2[sx.q(rbx_1) * 8 + 6]
            
            if (rbx_1 == 0xffffffff)
                goto label_14199dff1
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 5) + *arg1
        sub_1405ec8a0(rdi_2 + 0x10, arg2, arg3)
        memmove(rdi_2, arg4, 0x18)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_5.d
        
        int32_t* r8_2 = (rcx_5 << 5) + *arg1
        *r8_2 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r8_2[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_4 = *(r10_1 + 0x10)
        
        if (rax_4 != 0)
            r10_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14199e0b5

*result = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return result

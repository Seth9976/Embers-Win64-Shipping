// 函数: sub_14093e1f0
// 地址: 0x14093e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int64_t r12 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_14093e327:
    
    if (sub_14093d550(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x24) = rax_15
        void* rdx_9 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_15)
        void* rax_16 = r9_3
        
        if (rdx_9 != 0)
            rax_16 = rdx_9
        
        arg4[4].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_18 = *(r9_3 + 8)
        
        if (rax_18 != 0)
            r9_3 = rax_18
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_14093e276:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 5
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_14093e276
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x28, arg4, 0x20)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_5.d
        
        int64_t rax_6 = *arg1
        int64_t rdx_4 = rcx_5 * 5
        *(rax_6 + (rdx_4 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        *(rax_6 + (rdx_4 << 3) + 4) = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_7 = *(r10_1 + 0x10)
        
        if (rax_7 != 0)
            r10_1 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14093e327

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

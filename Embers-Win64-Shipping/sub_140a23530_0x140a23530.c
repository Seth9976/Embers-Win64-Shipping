// 函数: sub_140a23530
// 地址: 0x140a23530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140a23663:
    
    if (sub_1409b3740(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t rax_13 = (arg1[9].d - 1) & r12.d
        arg4[3] = rax_13
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_13)
        void* rax_14 = r9_3
        
        if (rdx_10 != 0)
            rax_14 = rdx_10
        
        arg4[2] = *(rax_14 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_16 = *(r9_3 + 8)
        
        if (rax_16 != 0)
            r9_3 = rax_16
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140a235b4:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) * 2
            
            if (*(rcx_1 + (rax_3 << 3)) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + (rax_3 << 3) + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_140a235b4
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove((sx.q(rbx_1) << 4) + *arg1, arg4, 8)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x10) = rcx_5.d
        
        int32_t* r8_3 = (rcx_5 << 4) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        r8_3[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_5 = *(r10_1 + 0x10)
        
        if (rax_5 != 0)
            r10_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140a23663

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

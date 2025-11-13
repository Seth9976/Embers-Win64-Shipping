// 函数: sub_1420f7ff0
// 地址: 0x1420f7ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_1420f8161:
    
    if (sub_1420f7130(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x34) = rax_21
        void* rdx_10 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_21)
        void* rax_22 = r9_1
        
        if (rdx_10 != 0)
            rax_22 = rdx_10
        
        arg4[6].d = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_24 = *(r9_1 + 8)
        
        if (rax_24 != 0)
            r9_1 = rax_24
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
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
    label_1420f80ac:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t* rcx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rcx_1 + rdx_3) == *arg4 && *(rcx_1 + rdx_3 + 8) == arg4[1]
                    && *(rcx_1 + rdx_3 + 0x10) == arg4[2] && *(rcx_1 + rdx_3 + 0x18) == arg4[3]
                    && *(rcx_1 + rdx_3 + 0x20) == arg4[4] && *(rcx_1 + rdx_3 + 0x28) == arg4[5])
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_1420f80ac
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(sx.q(rbx_1) * 0x38 + *arg1, arg4, 0x30)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_4.d
        
        int32_t* rax_12 = rcx_4 * 0x38 + *arg1
        *rax_12 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        rax_12[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_13 = *(r10_1 + 0x10)
        
        if (rax_13 != 0)
            r10_1 = rax_13
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1420f8161

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

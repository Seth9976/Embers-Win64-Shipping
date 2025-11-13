// 函数: sub_141735d80
// 地址: 0x141735d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141735eb6:
    
    if (sub_141734dc0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r12.d
        arg4[8] = rax_16
        void* rdx_11 = *(r9_3 + 8)
        int64_t r8_1 = sx.q(rax_16)
        void* rax_17 = r9_3
        
        if (rdx_11 != 0)
            rax_17 = rdx_11
        
        arg4[7] = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_19 = *(r9_3 + 8)
        
        if (rax_19 != 0)
            r9_3 = rax_19
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_1
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
    label_141735e05:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 9
            
            if (*(rdx_3 + (rcx_1 << 2)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 2) + 0x1c)
            
            if (rbx_1 == 0xffffffff)
                goto label_141735e05
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x24, arg4, 0x1c)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x24) = rcx_4.d
        
        int64_t rax_7 = *arg1
        int64_t rdx_6 = rcx_4 * 9
        *(rax_7 + (rdx_6 << 2)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        *(rax_7 + (rdx_6 << 2) + 4) = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_8 = *(r10_1 + 0x10)
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_141735eb6

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

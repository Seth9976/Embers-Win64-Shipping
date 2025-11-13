// 函数: sub_141836270
// 地址: 0x141836270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_1418363d4:
    
    if (sub_140cb1970(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & r13.d
        arg4[7] = rax_17
        void* rdx_13 = *(r9_3 + 8)
        int64_t r8_5 = sx.q(rax_17)
        void* rax_18 = r9_3
        
        if (rdx_13 != 0)
            rax_18 = rdx_13
        
        arg4[6] = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_20 = *(r9_3 + 8)
        
        if (rax_20 != 0)
            r9_3 = rax_20
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_2
else
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14183631f:
        rbx_1 = -1
    else
        while (true)
            void* rdx_5 = (sx.q(rbx_1) << 5) + *arg1
            
            if (((*(rdx_5 + 4) ^ arg4[1]) | (*(rdx_5 + 8) ^ arg4[2]) | (*(rdx_5 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_5)) == 0)
                break
            
            rbx_1 = *(rdx_5 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_14183631f
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        memmove((sx.q(rbx_1) << 5) + *arg1, arg4, 0x18)
        int64_t rcx_9 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_9.d
        
        int32_t* r8_4 = (rcx_9 << 5) + *arg1
        *r8_4 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        r8_4[1] = rbp_1
        *(arg1 + 0x34) += 1
        rdi_2 = rbx_1
        arg1[6].d = rcx_9.d
        void* rax_9 = *(r10_2 + 0x10)
        
        if (rax_9 != 0)
            r10_2 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_9.d)
        int64_t rcx_10 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_10 << 2)) &= not.d(rol.d(1, rcx_9.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1418363d4

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r12.b

return arg2

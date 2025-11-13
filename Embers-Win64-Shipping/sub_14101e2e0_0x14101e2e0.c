// 函数: sub_14101e2e0
// 地址: 0x14101e2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14101e43d:
    
    if (sub_1410186c0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x30c) = rax_17
        void* rdx_10 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_17)
        void* rax_18 = r9_1
        
        if (rdx_10 != 0)
            rax_18 = rdx_10
        
        *(arg4 + 0x308) = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_20 = *(r9_1 + 8)
        
        if (rax_20 != 0)
            r9_1 = rax_20
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_3
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
    label_14101e37c:
        rbx_1 = -1
    else
        rbp = *arg1
        
        while (true)
            void* rdi_2 = sx.q(rbx_1) * 0x310 + rbp
            void arg_8
            
            if (sub_141010a20(&arg_8, rdi_2, arg4) != 0)
                break
            
            rbx_1 = *(rdi_2 + 0x308)
            
            if (rbx_1 == 0xffffffff)
                goto label_14101e37c
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        memmove(sx.q(rbx_1) * 0x310 + *arg1, arg4, 0x308)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x310 + *arg1) = rcx_4.d
        
        int32_t* rax_8 = rcx_4 * 0x310 + *arg1
        *rax_8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_8[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14101e43d

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

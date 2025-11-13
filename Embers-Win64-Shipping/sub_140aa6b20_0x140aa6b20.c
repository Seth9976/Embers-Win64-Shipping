// 函数: sub_140aa6b20
// 地址: 0x140aa6b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbx = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140aa6ca3:
    
    if (sub_140aa4b10(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & rbx.d
        *(arg4 + 0x24) = rax_18
        void* rdx_11 = *(r9 + 8)
        int64_t r8_5 = sx.q(rax_18)
        void* rax_19 = r9
        
        if (rdx_11 != 0)
            rax_19 = rdx_11
        
        arg4[4].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_21 = *(r9 + 8)
        
        if (rax_21 != 0)
            r9 = rax_21
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_3
else
    int32_t r13_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140aa6bd2:
        rbx_1 = -1
    else
        int64_t r15_1 = *arg1
        rbp = zx.q(arg4[1].d)
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            int64_t rax_3 = sx.q(*(r15_1 + (rcx_1 << 3) + 8))
            int64_t* rdi_1 = r15_1 + (rcx_1 << 3)
            
            if (rax_3.d == rbp.d && memcmp(*rdi_1, *arg4, rax_3 * 2) == 0)
                break
            
            rbx_1 = rdi_1[4].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa6bd2
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 5
        int64_t rax_6 = *arg1
        int64_t rcx_4 = *(rax_6 + (rcx_3 << 3) + 0x10)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rax_6 + (rcx_3 << 3), arg4, 0x20)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_6.d
        
        int64_t rax_9 = *arg1
        int64_t rdx_6 = rcx_6 * 5
        *(rax_9 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        *(rax_9 + (rdx_6 << 3) + 4) = r13_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140aa6ca3

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

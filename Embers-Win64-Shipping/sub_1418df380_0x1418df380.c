// 函数: sub_1418df380
// 地址: 0x1418df380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* result = arg2
int64_t r13 = sx.q(arg3.d)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_1418df4c8:
    
    if (sub_140b9ddc0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r13.d
        arg4[5] = rax_16
        void* rdx_9 = *(r9_3 + 8)
        int64_t r8 = sx.q(rax_16)
        void* rax_17 = r9_3
        
        if (rdx_9 != 0)
            rax_17 = rdx_9
        
        arg4[4] = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
        void* rax_19 = *(r9_3 + 8)
        
        if (rax_19 != 0)
            r9_3 = rax_19
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8) << 2)) = rdi_1
else
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        arg3 = &arg1[7]
        void* rcx = arg1[8]
        arg2 = (sx.q(arg1[9].d) - 1) & r13
        
        if (rcx != 0)
            arg3 = rcx
        
        rbx_1 = *(arg3 + (arg2 << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1418df406:
        rbx_1 = -1
    else
        arg2 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            
            if (arg2[rcx_1 * 2] == *arg4)
                break
            
            rbx_1 = arg2[rcx_1 * 2 + 4]
            
            if (rbx_1 == 0xffffffff)
                goto label_1418df406
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rdi = *arg1 + sx.q(rbx_1) * 0x18
        sub_1405d1550(rdi + 8, arg2, arg3)
        memmove(rdi, arg4, 0x10)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x18) = rcx_5.d
        
        int64_t rax_7 = *arg1
        int64_t rdx_4 = rcx_5 * 3
        *(rax_7 + (rdx_4 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        *(rax_7 + (rdx_4 << 3) + 4) = rbp_1
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_8 = *(r10_1 + 0x10)
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1418df4c8

*result = rdi_1

if (arg6 != 0)
    *arg6 = r15.b

return result

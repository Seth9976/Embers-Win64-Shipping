// 函数: sub_140a70fd0
// 地址: 0x140a70fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140a71154:
    
    if (sub_140a6d550(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x24) = rax_18
        void* rdx_12 = *(r9_2 + 8)
        int64_t r8_1 = sx.q(rax_18)
        void* rax_19 = r9_2
        
        if (rdx_12 != 0)
            rax_19 = rdx_12
        
        arg4[4].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_21 = *(r9_2 + 8)
        
        if (rax_21 != 0)
            r9_2 = rax_21
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_3
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
    label_140a7108e:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rdi_1 = sx.q(rbx_1) * 0x28
            int16_t* rax_3
            
            if (arg4[1].d == 0)
                rax_3 = &data_142d40450
            else
                rax_3 = *arg4
            
            int16_t* const rcx_2
            
            if (*(rdi_1 + rdx_3 + 8) == 0)
                rcx_2 = &data_142d40450
            else
                rcx_2 = *(rdi_1 + rdx_3)
            
            if (sub_140a54510(rcx_2, rax_3) == 0)
                break
            
            rdx_3 = *arg1
            rbx_1 = *(rdi_1 + rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_140a7108e
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t* rdi_2 = *arg1 + sx.q(rbx_1) * 0x28
        sub_140a62ad0(rdi_2)
        memmove(rdi_2, arg4, 0x20)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_6.d
        
        int64_t rax_9 = *arg1
        int64_t rdx_7 = rcx_6 * 5
        *(rax_9 + (rdx_7 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        *(rax_9 + (rdx_7 << 3) + 4) = r12_1
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
        goto label_140a71154

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

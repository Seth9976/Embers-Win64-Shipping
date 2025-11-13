// 函数: sub_1420f7980
// 地址: 0x1420f7980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_5

if (rax_1 == 1)
    rdi_5 = arg5
label_1420f7b37:
    
    if (sub_1420f6fd0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_25 = (arg1[9].d - 1) & r13.d
        arg4[0x13] = rax_25
        void* rdx_13 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_25)
        void* rax_26 = r9_1
        
        if (rdx_13 != 0)
            rax_26 = rdx_13
        
        arg4[0x12] = *(rax_26 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_28 = *(r9_1 + 8)
        
        if (rax_28 != 0)
            r9_1 = rax_28
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_5
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
    label_1420f7a33:
        rbx_1 = -1
    else
        while (true)
            void* rdx_5 = sx.q(rbx_1) * 0x50 + *arg1
            
            if (((*(rdx_5 + 4) ^ arg4[1]) | (*(rdx_5 + 8) ^ arg4[2]) | (*(rdx_5 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_5)) == 0)
                break
            
            rbx_1 = *(rdx_5 + 0x48)
            
            if (rbx_1 == 0xffffffff)
                goto label_1420f7a33
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_5 = arg5
    else
        void* rdi_4 = sx.q(rbx_1) * 0x50 + *arg1
        int64_t rcx_6 = *(rdi_4 + 0x30)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rdi_4 + 0x20)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t* rcx_8 = *(rdi_4 + 0x18)
        
        if (rcx_8 != 0)
            rcx_8[3].d -= 1
            
            if (rcx_8[3].d == 1)
                (*(*rcx_8 + 0x38))(rcx_8)
        
        int64_t* rcx_9 = *(rdi_4 + 0x10)
        
        if (rcx_9 != 0)
            int32_t temp1_1 = *(rcx_9 + 0x1c)
            *(rcx_9 + 0x1c) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_9 + 0x40))(rcx_9)
        
        memmove(rdi_4, arg4, 0x48)
        int64_t rcx_11 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x50) = rcx_11.d
        
        int32_t* rax_16 = rcx_11 * 0x50 + *arg1
        *rax_16 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        rax_16[1] = rbp_1
        *(arg1 + 0x34) += 1
        rdi_5 = rbx_1
        arg1[6].d = rcx_11.d
        void* rax_17 = *(r10_2 + 0x10)
        
        if (rax_17 != 0)
            r10_2 = rax_17
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_11.d)
        int64_t rcx_12 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_12 << 2)) &= not.d(rol.d(1, rcx_11.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1420f7b37

*arg2 = rdi_5

if (arg6 != 0)
    *arg6 = r12.b

return arg2

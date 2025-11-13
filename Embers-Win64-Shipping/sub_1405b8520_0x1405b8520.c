// 函数: sub_1405b8520
// 地址: 0x1405b8520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int64_t* rbx = arg4
int64_t rbp = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_1405b86c1:
    
    if (sub_1405b67e0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & rbp.d
        *(rbx + 0x1c) = rax_15
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_15)
        void* rax_16 = r9_2
        
        if (rdx_9 != 0)
            rax_16 = rdx_9
        
        rbx[3].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_18 = *(r9_2 + 8)
        
        if (rax_18 != 0)
            r9_2 = rax_18
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_1
else
    int32_t r14_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_1405b85b6:
        rbx_1 = -1
    else
        int64_t rdx_1 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) << 5
            
            if (*(rcx_3 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_3 + rdx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1405b85b6
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_3 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi = *(rbp_3 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t rax_4 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rbp_3, arg4, 0x18)
        int64_t rcx_7 = sx.q(arg5)
        void* r9_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_7.d
        
        int32_t* r8_5 = (rcx_7 << 5) + *arg1
        *r8_5 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r14_1 = arg1[6].d
        
        rbp = zx.q(arg3)
        r8_5[1] = r14_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_7.d
        void* rax_7 = *(r9_1 + 0x10)
        
        if (rax_7 != 0)
            r9_1 = rax_7
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r9_1 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = arg4
        goto label_1405b86c1

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

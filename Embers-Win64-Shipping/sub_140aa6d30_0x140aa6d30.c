// 函数: sub_140aa6d30
// 地址: 0x140aa6d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* rbp = arg4
int64_t rbx = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140aa6ed1:
    
    if (sub_1405b6520(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & rbx.d
        *(rbp + 0x1c) = rax_17
        void* rdx_11 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_17)
        void* rax_18 = r9_1
        
        if (rdx_11 != 0)
            rax_18 = rdx_11
        
        rbp[3].d = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_20 = *(r9_1 + 8)
        
        if (rax_20 != 0)
            r9_1 = rax_20
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t r14_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140aa6dc6:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 5
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa6dc6
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_3 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi = *(rbp_3 + 8)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t rax_6 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rbp_3, arg4, 0x18)
        int64_t rcx_5 = sx.q(arg5)
        void* r9 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_5.d
        
        int32_t* r8_3 = (rcx_5 << 5) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r14_1 = arg1[6].d
        
        rbp = arg4
        r8_3[1] = r14_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_9 = *(r9 + 0x10)
        
        if (rax_9 != 0)
            r9 = rax_9
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r9 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140aa6ed1

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

// 函数: sub_14240bc40
// 地址: 0x14240bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* r15 = arg4
int64_t rbx = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_14240bdeb:
    
    if (sub_141c9a080(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & rbx.d
        *(r15 + 0xec) = rax_18
        void* rdx_10 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_18)
        void* rax_19 = r9_1
        
        if (rdx_10 != 0)
            rax_19 = rdx_10
        
        r15[0x1d].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_21 = *(r9_1 + 8)
        
        if (rax_21 != 0)
            r9_1 = rax_21
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14240bcdc:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t* rcx_1 = sx.q(rbx_1) * 0xf0
            
            if (*(rcx_1 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0xe8)
            
            if (rbx_1 == 0xffffffff)
                goto label_14240bcdc
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_2 = sx.q(rbx_1) * 0xf0 + *arg1
        sub_1423ff0f0(rbp_2 + 0x18)
        int64_t* rdi = *(rbp_2 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp1_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rbp_2, arg4, 0xe8)
        int64_t rcx_6 = sx.q(arg5)
        void* r9 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0xf0 + *arg1) = rcx_6.d
        
        int32_t* rax_9 = rcx_6 * 0xf0 + *arg1
        *rax_9 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_9[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_10 = *(r9 + 0x10)
        
        if (rax_10 != 0)
            r9 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r9 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
        r15 = arg4
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_14240bdeb

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

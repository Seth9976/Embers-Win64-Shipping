// 函数: sub_140aa6f60
// 地址: 0x140aa6f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* r15 = arg4
int64_t rbx = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140aa70f9:
    
    if (sub_140aa4bc0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & rbx.d
        *(r15 + 0x34) = rax_20
        void* rdx_10 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_20)
        void* rax_21 = r9_1
        
        if (rdx_10 != 0)
            rax_21 = rdx_10
        
        r15[6].d = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_23 = *(r9_1 + 8)
        
        if (rax_23 != 0)
            r9_1 = rax_23
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t rbp_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140aa6ff5:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t* rcx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rcx_1 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa6ff5
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* r15_2 = sx.q(rbx_1) * 0x38 + *arg1
        int64_t* rdi = *(r15_2 + 8)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t rax_6 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(r15_2, arg4, 0x30)
        int64_t rcx_5 = sx.q(arg5)
        void* r9 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_5.d
        
        int32_t* rax_11 = rcx_5 * 0x38 + *arg1
        *rax_11 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rbp_1 = arg1[6].d
        
        r15 = arg4
        rax_11[1] = rbp_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_12 = *(r9 + 0x10)
        
        if (rax_12 != 0)
            r9 = rax_12
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
        *(r9 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140aa70f9

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

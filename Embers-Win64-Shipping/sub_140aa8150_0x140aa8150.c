// 函数: sub_140aa8150
// 地址: 0x140aa8150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbx = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140aa8284:
    
    if (sub_140aa4dd0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & rbx.d
        *(arg4 + 0x3c) = rax_9
        void* rdx_9 = *(r9 + 8)
        int64_t r8_2 = sx.q(rax_9)
        void* rax_10 = r9
        
        if (rdx_9 != 0)
            rax_10 = rdx_9
        
        arg4[7].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_12 = *(r9 + 8)
        
        if (rax_12 != 0)
            r9 = rax_12
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140aa81e3:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) << 6
            
            if (*(rcx_2 + rdx_3) == *arg4 && *(rcx_2 + rdx_3 + 0x10) == arg4[2])
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa81e3
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_3 = (sx.q(rbx_1) << 6) + *arg1
        int64_t* rdi = *(rbp_3 + 0x28)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t r14_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*rdi + 8))(rdi, zx.q(r14_1))
        
        memmove(rbp_3, arg4, 0x38)
        sub_1405c37b0(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140aa8284

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

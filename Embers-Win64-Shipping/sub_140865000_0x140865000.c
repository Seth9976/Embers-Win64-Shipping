// 函数: sub_140865000
// 地址: 0x140865000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbx = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140865129:
    
    if (sub_1405b6520(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & rbx.d
        *(arg4 + 0x1c) = rax_10
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_1 = sx.q(rax_10)
        void* rax_11 = r9_1
        
        if (rdx_8 != 0)
            rax_11 = rdx_8
        
        arg4[3].d = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_13 = *(r9_1 + 8)
        
        if (rax_13 != 0)
            r9_1 = rax_13
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140865088:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 5
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140865088
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_3 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi = *(rbp_3 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t r14_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*rdi + 8))(rdi, zx.q(r14_1))
        
        memmove(rbp_3, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140865129

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

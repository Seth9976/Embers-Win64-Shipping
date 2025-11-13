// 函数: sub_14093e5c0
// 地址: 0x14093e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int64_t rbx = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_14093e6e9:
    
    if (sub_1405b67e0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_8 = (arg1[9].d - 1) & rbx.d
        *(arg4 + 0x1c) = rax_8
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_8)
        void* rax_9 = r9_1
        
        if (rdx_7 != 0)
            rax_9 = rdx_7
        
        arg4[3].d = *(rax_9 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_11 = *(r9_1 + 8)
        
        if (rax_11 != 0)
            r9_1 = rax_11
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_14093e648:
        rbx_1 = -1
    else
        int64_t rdx_1 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) << 5
            
            if (*(rcx_3 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_3 + rdx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_14093e648
    
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
        goto label_14093e6e9

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

// 函数: sub_1426f7ff0
// 地址: 0x1426f7ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_1426f810a:
    
    if (sub_140aa4bc0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x34) = rax_9
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_1 = sx.q(rax_9)
        void* rax_10 = r9_1
        
        if (rdx_8 != 0)
            rax_10 = rdx_8
        
        arg4[6].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_12 = *(r9_1 + 8)
        
        if (rax_12 != 0)
            r9_1 = rax_12
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1426f8076:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t* rcx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rcx_1 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_1426f8076
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_2 = sx.q(rbx_1) * 0x38 + *arg1
        int64_t* rdi = *(rbp_2 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp1_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rbp_2, arg4, 0x30)
        sub_140afe9e0(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1426f810a

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r15.b

return arg2

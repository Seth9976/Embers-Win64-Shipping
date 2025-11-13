// 函数: sub_141b5c360
// 地址: 0x141b5c360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141b5c49e:
    
    if (sub_141b50c00(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_10
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_10)
        void* rax_11 = r9
        
        if (rdx_8 != 0)
            rax_11 = rdx_8
        
        arg4[3].d = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_13 = *(r9 + 8)
        
        if (rax_13 != 0)
            r9 = rax_13
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_2
else
    int64_t rdi = *arg4
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141b5c404:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            int64_t rsi_2 = sx.q(rbx_1) << 5
            int64_t arg_8 = rdi
            int64_t arg_10 = *(rsi_2 + rax_2)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rsi_2 + rax_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_141b5c404
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rsi_5 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi_1 = *(rsi_5 + 0x10)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        memmove(rsi_5, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141b5c49e

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

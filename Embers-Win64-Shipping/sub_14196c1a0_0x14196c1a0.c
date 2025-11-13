// 函数: sub_14196c1a0
// 地址: 0x14196c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_14196c2bb:
    
    if (sub_141968060(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x3c) = rax_10
        void* rdx_8 = *(r9 + 8)
        int64_t r8_2 = sx.q(rax_10)
        void* rax_11 = r9
        
        if (rdx_8 != 0)
            rax_11 = rdx_8
        
        arg4[7].d = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_13 = *(r9 + 8)
        
        if (rax_13 != 0)
            r9 = rax_13
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14196c25d:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) << 6
            
            if (*(rcx_2 + rdx_3) == *arg4 && *(rcx_2 + rdx_3 + 8) == arg4[1]
                    && *(rcx_2 + rdx_3 + 0x10) == arg4[2] && *(rcx_2 + rdx_3 + 0x18) == arg4[3]
                    && *(rcx_2 + rdx_3 + 0x20) == arg4[4] && *(rcx_2 + rdx_3 + 0x28) == arg4[5])
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_14196c25d
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove((sx.q(rbx_1) << 6) + *arg1, arg4, 0x38)
        sub_1405c37b0(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14196c2bb

*arg2 = rdi

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

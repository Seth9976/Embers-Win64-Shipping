// 函数: sub_141e3c980
// 地址: 0x141e3c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141e3ca9b:
    
    if (sub_14084bdb0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r13.d
        arg4[2].d = rax_10
        void* rdx_9 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_10)
        void* rax_11 = r9
        
        if (rdx_9 != 0)
            rax_11 = rdx_9
        
        *(arg4 + 0xc) = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_13 = *(r9 + 8)
        
        if (rax_13 != 0)
            r9 = rax_13
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_1
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
    label_141e3ca2d:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t arg_8 = rdi
            int64_t r14_1 = sx.q(rbx_1) * 0x14
            int64_t arg_10 = *(r14_1 + rdx_3)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rdx_3 = *arg1
            rbx_1 = *(r14_1 + rdx_3 + 0xc)
            
            if (rbx_1 == 0xffffffff)
                goto label_141e3ca2d
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x14, arg4, 0xc)
        sub_1405c3870(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141e3ca9b

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

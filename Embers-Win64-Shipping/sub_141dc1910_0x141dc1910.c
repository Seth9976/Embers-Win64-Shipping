// 函数: sub_141dc1910
// 地址: 0x141dc1910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141dc1a1a:
    
    if (sub_141dbcf70(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x44) = rax_9
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_9)
        void* rax_10 = r9
        
        if (rdx_8 != 0)
            rax_10 = rdx_8
        
        arg4[8].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_12 = *(r9 + 8)
        
        if (rax_12 != 0)
            r9 = rax_12
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_1
else
    int64_t rdi = *arg4
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141dc19b8:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t arg_8 = rdi
            rsi = sx.q(rbx_1) * 0x50
            int64_t arg_10 = *(rsi + rcx_1)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rcx_1 = *arg1
            rbx_1 = *(rsi + rcx_1 + 0x40)
            
            if (rbx_1 == 0xffffffff)
                goto label_141dc19b8
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(sx.q(rbx_1) * 0x50 + *arg1, arg4, 0x40)
        sub_1407c2c60(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141dc1a1a

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rsi.b

return arg2

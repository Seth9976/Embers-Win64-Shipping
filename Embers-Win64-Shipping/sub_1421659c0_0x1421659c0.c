// 函数: sub_1421659c0
// 地址: 0x1421659c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_142165ac2:
    
    if (sub_141fab3f0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_8 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0xc) = rax_8
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_8)
        void* rax_9 = r9
        
        if (rdx_8 != 0)
            rax_9 = rdx_8
        
        arg4[1].d = *(rax_9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_11 = *(r9 + 8)
        
        if (rax_11 != 0)
            r9 = rax_11
        
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
    label_142165a64:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            rsi = sx.q(rbx_1) << 4
            int64_t arg_8 = rdi
            int64_t arg_10 = *(rsi + rax_2)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rsi + rax_2 + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_142165a64
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove((sx.q(rbx_1) << 4) + *arg1, arg4, 8)
        sub_140906230(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_142165ac2

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rsi.b

return arg2

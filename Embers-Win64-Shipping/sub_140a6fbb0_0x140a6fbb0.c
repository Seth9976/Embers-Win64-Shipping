// 函数: sub_140a6fbb0
// 地址: 0x140a6fbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140a6fca1:
    
    if (sub_140a6d340(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_8 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x24) = rax_8
        void* rdx_8 = *(r9 + 8)
        int64_t r8_2 = sx.q(rax_8)
        void* rax_9 = r9
        
        if (rdx_8 != 0)
            rax_9 = rdx_8
        
        arg4[4].d = *(rax_9 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_11 = *(r9 + 8)
        
        if (rax_11 != 0)
            r9 = rax_11
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140a6fc36:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_140a6fc36
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rdi = *arg1 + sx.q(rbx_1) * 0x28
        sub_140a62870(rdi)
        memmove(rdi, arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140a6fca1

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

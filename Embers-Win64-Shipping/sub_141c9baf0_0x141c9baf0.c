// 函数: sub_141c9baf0
// 地址: 0x141c9baf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int64_t r12 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_3

if (rcx_1 == 1)
    rdi_3 = arg5
label_141c9bbe6:
    
    if (sub_140b34ad0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_6 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x5c) = rax_6
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_6)
        void* rax_7 = r9_1
        
        if (rdx_7 != 0)
            rax_7 = rdx_7
        
        arg4[0xb].d = *(rax_7 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_9 = *(r9_1 + 8)
        
        if (rax_9 != 0)
            r9_1 = rax_9
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_141c9bb7b:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_2 = sx.q(rbx_1) * 0x60
            
            if (*(rdx_2 + r8_3) == *arg4)
                break
            
            rbx_1 = *(rdx_2 + r8_3 + 0x58)
            
            if (rbx_1 == 0xffffffff)
                goto label_141c9bb7b
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x60 + *arg1
        sub_140d3a280(rdi_2)
        memmove(rdi_2, arg4, 0x58)
        sub_140bb6940(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141c9bbe6

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

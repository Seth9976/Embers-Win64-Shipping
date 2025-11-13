// 函数: sub_141d1c750
// 地址: 0x141d1c750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_141d1c861:
    
    if (sub_141d1b3a0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x2c) = rax_9
        void* rdx_8 = *(r9 + 8)
        int64_t r8_2 = sx.q(rax_9)
        void* rax_10 = r9
        
        if (rdx_8 != 0)
            rax_10 = rdx_8
        
        arg4[5].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_12 = *(r9 + 8)
        
        if (rax_12 != 0)
            r9 = rax_12
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141d1c7e4:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 6
            
            if (*(rdx_3 + (rcx_2 << 3)) == *arg4 && *(rdx_3 + (rcx_2 << 3) + 8) == arg4[1])
                break
            
            rbx_1 = *(rdx_3 + (rcx_2 << 3) + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_141d1c7e4
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x30 + *arg1
        int64_t* rcx_3 = *(rdi_2 + 0x20)
        
        if (rcx_3 != 0 && *(rdi_2 + 0x1d) == 0)
            (*(*rcx_3 + 0x28))(rcx_3, 1)
        
        memmove(rdi_2, arg4, 0x28)
        sub_1407c2ba0(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141d1c861

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

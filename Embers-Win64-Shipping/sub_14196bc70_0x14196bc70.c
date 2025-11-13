// 函数: sub_14196bc70
// 地址: 0x14196bc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_14196bd56:
    
    if (sub_1408df340(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_8 = (arg1[9].d - 1) & r12.d
        arg4[9] = rax_8
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_1 = sx.q(rax_8)
        void* rax_9 = r9_1
        
        if (rdx_8 != 0)
            rax_9 = rdx_8
        
        arg4[8] = *(rax_9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_11 = *(r9_1 + 8)
        
        if (rax_11 != 0)
            r9_1 = rax_11
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14196bcf6:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_14196bcf6
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x28, arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14196bd56

*arg2 = rdi

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

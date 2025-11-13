// 函数: sub_14238add0
// 地址: 0x14238add0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14238aedd:
    
    if (sub_142387060(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x24) = rax_9
        void* rdx_9 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_9)
        void* rax_10 = r9
        
        if (rdx_9 != 0)
            rax_10 = rdx_9
        
        arg4[4].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_12 = *(r9 + 8)
        
        if (rax_12 != 0)
            r9 = rax_12
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14238ae6b:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rdi_1 = sx.q(rbx_1) * 0x28
            
            if (sub_140d16af0(rdi_1 + rdx_3, arg4) != 0)
                break
            
            rdx_3 = *arg1
            rbx_1 = *(rdi_1 + rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_14238ae6b
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 5
        int64_t rax_5 = *arg1
        int64_t rcx_4 = *(rax_5 + (rcx_3 << 3) + 8)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rax_5 + (rcx_3 << 3), arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14238aedd

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return arg2

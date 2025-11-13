// 函数: sub_1408248d0
// 地址: 0x1408248d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1408249df:
    
    if (sub_1408223c0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x3c) = rax_7
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_1 = sx.q(rax_7)
        void* rax_8 = r9_1
        
        if (rdx_7 != 0)
            rax_8 = rdx_7
        
        arg4[7].d = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_10 = *(r9_1 + 8)
        
        if (rax_10 != 0)
            r9_1 = rax_10
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140824956:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 6
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_140824956
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 6) + *arg1
        int64_t rcx_2 = *(rdi_2 + 0x28)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rdi_2 + 0x18)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rdi_2 + 8)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rdi_2, arg4, 0x38)
        sub_1405c37b0(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1408249df

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

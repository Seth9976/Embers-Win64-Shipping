// 函数: sub_14238af60
// 地址: 0x14238af60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_6

if (rax_1 == 1)
    rdi_6 = arg5
label_14238b06e:
    
    if (sub_142387110(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x3c) = rax_7
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_7)
        void* rax_8 = r9
        
        if (rdx_8 != 0)
            rax_8 = rdx_8
        
        arg4[7].d = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_10 = *(r9 + 8)
        
        if (rax_10 != 0)
            r9 = rax_10
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_6
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14238aff3:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            int64_t rdi_2 = sx.q(rbx_1) << 6
            
            if (sub_140d16af0(rdi_2 + rax_2, arg4) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rdi_2 + rax_2 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_14238aff3
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_6 = arg5
    else
        void* rdi_5 = (sx.q(rbx_1) << 6) + *arg1
        int64_t rcx_2 = *(rdi_5 + 0x20)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rdi_5 + 8)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        memmove(rdi_5, arg4, 0x38)
        sub_1405c37b0(arg1, arg5, 1)
        rdi_6 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14238b06e

*arg2 = rdi_6

if (arg6 != 0)
    *arg6 = r15.b

return arg2

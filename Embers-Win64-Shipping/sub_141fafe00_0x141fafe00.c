// 函数: sub_141fafe00
// 地址: 0x141fafe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_141faff31:
    
    if (sub_141fab340(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_8 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0xc4) = rax_8
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_8)
        void* rax_9 = r9
        
        if (rdx_8 != 0)
            rax_9 = rdx_8
        
        arg4[0x18].d = *(rax_9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_11 = *(r9 + 8)
        
        if (rax_11 != 0)
            r9 = rax_11
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_4
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141fafeb9:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t* rdi_1 = sx.q(rbx_1) * 0xc8
            int16_t* rdx_3
            
            if (arg4[1].d == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *arg4
            
            int16_t* const rcx_2
            
            if (*(rdi_1 + rcx_1 + 8) == 0)
                rcx_2 = &data_142d40450
            else
                rcx_2 = *(rdi_1 + rcx_1)
            
            if (sub_140a54510(rcx_2, rdx_3) == 0)
                break
            
            rcx_1 = *arg1
            rbx_1 = *(rdi_1 + rcx_1 + 0xc0)
            
            if (rbx_1 == 0xffffffff)
                goto label_141fafeb9
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        int64_t* rdi_3 = sx.q(rbx_1) * 0xc8 + *arg1
        sub_141fa6730(&rdi_3[2])
        int64_t rcx_4 = *rdi_3
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rdi_3, arg4, 0xc0)
        sub_141fc3f20(arg1, arg5, 1)
        rdi_4 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141faff31

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

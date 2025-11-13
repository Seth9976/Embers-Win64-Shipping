// 函数: sub_140b370a0
// 地址: 0x140b370a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_6

if (rax_1 == 1)
    rdi_6 = arg5
label_140b371bf:
    
    if (sub_140ad0630(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x1c) = rax_7
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_7)
        void* rax_8 = r9
        
        if (rdx_8 != 0)
            rax_8 = rdx_8
        
        arg4[3].d = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
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
    label_140b37153:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            int64_t rdi_2 = sx.q(rbx_1) << 5
            int16_t* rdx_3
            
            if (arg4[1].d == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *arg4
            
            int16_t* const rcx_1
            
            if (*(rdi_2 + rax_2 + 8) == 0)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *(rdi_2 + rax_2)
            
            if (sub_140a54510(rcx_1, rdx_3) == 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rdi_2 + rax_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140b37153
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_6 = arg5
    else
        int64_t* rdi_5 = (sx.q(rbx_1) << 5) + *arg1
        int64_t rcx_2 = *rdi_5
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        memmove(rdi_5, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_6 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140b371bf

*arg2 = rdi_6

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

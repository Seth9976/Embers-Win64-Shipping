// 函数: sub_140aee0e0
// 地址: 0x140aee0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int64_t r12 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_3

if (rcx_1 == 1)
    rdi_3 = arg5
label_140aee1d3:
    
    if (sub_1405b67e0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_5 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x1c) = rax_5
        void* rdx_6 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_5)
        void* rax_6 = r9_1
        
        if (rdx_6 != 0)
            rax_6 = rdx_6
        
        arg4[3].d = *(rax_6 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_8 = *(r9_1 + 8)
        
        if (rax_8 != 0)
            r9_1 = rax_8
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_140aee166:
        rbx_1 = -1
    else
        int64_t rdx_1 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) << 5
            
            if (*(rcx_3 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_3 + rdx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140aee166
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 5) + *arg1
        int64_t rcx_4 = *(rdi_2 + 8)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rdi_2, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140aee1d3

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

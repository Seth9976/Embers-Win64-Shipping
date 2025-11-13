// 函数: sub_1422e20e0
// 地址: 0x1422e20e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_1422e2221:
    
    if (sub_1422e0b30(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r13.d
        arg4[0x21] = rax_7
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_1 = sx.q(rax_7)
        void* rax_8 = r9_1
        
        if (rdx_8 != 0)
            rax_8 = rdx_8
        
        arg4[0x20] = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_10 = *(r9_1 + 8)
        
        if (rax_10 != 0)
            r9_1 = rax_10
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1422e216c:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int32_t* rcx_1 = sx.q(rbx_1) * 0x88
            
            if (*(rcx_1 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x80)
            
            if (rbx_1 == 0xffffffff)
                goto label_1422e216c
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        void* rbp_2 = sx.q(rbx_1) * 0x88 + *arg1
        *(rbp_2 + 0x78) = 0
        int64_t rcx_2 = *(rbp_2 + 0x70)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        sub_1407547c0(rbp_2 + 0x30, 0)
        int64_t rcx_4 = *(rbp_2 + 0x50)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbp_2 + 0x30)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        sub_140596e10(rbp_2 + 0x10)
        memmove(rbp_2, arg4, 0x80)
        sub_14194be20(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1422e2221

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r15.b

return arg2

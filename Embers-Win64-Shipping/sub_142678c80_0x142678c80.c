// 函数: sub_142678c80
// 地址: 0x142678c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_142678d81:
    
    if (sub_142677190(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x1c) = rax_7
        void* rdx_9 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_7)
        void* rax_8 = r9_1
        
        if (rdx_9 != 0)
            rax_8 = rdx_9
        
        arg4[3].d = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_10 = *(r9_1 + 8)
        
        if (rax_10 != 0)
            r9_1 = rax_10
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_3
else
    int64_t r9 = *arg4
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_142678d19:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rdx_4 = sx.q(rbx_1) << 5
            int64_t rcx_1 = *(rdx_4 + r8_1)
            
            if (rcx_1.d == r9.d && (rcx_1 u>> 0x20).d == (r9 u>> 0x20).d)
                break
            
            rbx_1 = *(rdx_4 + r8_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_142678d19
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 5) + *arg1
        sub_142671860(rdi_2 + 8)
        memmove(rdi_2, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_142678d81

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

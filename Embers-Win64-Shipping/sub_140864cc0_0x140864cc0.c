// 函数: sub_140864cc0
// 地址: 0x140864cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140864db5:
    
    if (sub_140864250(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x4c) = rax_7
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_1 = sx.q(rax_7)
        void* rax_8 = r9_1
        
        if (rdx_8 != 0)
            rax_8 = rdx_8
        
        arg4[9].d = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
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
    label_140864d49:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 0xa
            
            if (*(rdx_3 + (rcx_2 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_2 << 3) + 0x48)
            
            if (rbx_1 == 0xffffffff)
                goto label_140864d49
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x50 + *arg1
        sub_140846de0(rdi_2 + 8)
        memmove(rdi_2, arg4, 0x48)
        sub_1407c2c60(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140864db5

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

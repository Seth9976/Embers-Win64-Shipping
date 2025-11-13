// 函数: sub_141938080
// 地址: 0x141938080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_14193819c:
    
    if (sub_1419349d0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0xdc) = rax_10
        void* rdx_8 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_10)
        void* rax_11 = r9
        
        if (rdx_8 != 0)
            rax_11 = rdx_8
        
        *(arg4 + 0xd8) = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_13 = *(r9 + 8)
        
        if (rax_13 != 0)
            r9 = rax_13
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14193813b:
        rbx_1 = -1
    else
        rbp = *arg1
        
        while (true)
            void* buffer1 = sx.q(rbx_1) * 0xe0 + rbp
            
            if (memcmp(buffer1, arg4, 0xc0) == 0 && *(buffer1 + 0xc0) == *(arg4 + 0xc0)
                    && *(buffer1 + 0xc8) == *(arg4 + 0xc8))
                break
            
            rbx_1 = *(buffer1 + 0xd8)
            
            if (rbx_1 == 0xffffffff)
                goto label_14193813b
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        memmove(sx.q(rbx_1) * 0xe0 + *arg1, arg4, 0xd8)
        sub_1407c2dd0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14193819c

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

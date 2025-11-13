// 函数: sub_1419ed3b0
// 地址: 0x1419ed3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_1419ed4ab:
    
    if (sub_1419ec590(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x14) = rax_10
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_10)
        void* rax_11 = r9_1
        
        if (rdx_8 != 0)
            rax_11 = rdx_8
        
        arg4[2].d = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_13 = *(r9_1 + 8)
        
        if (rax_13 != 0)
            r9_1 = rax_13
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi
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
    label_1419ed44b:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            int64_t rcx_2 = *(r8_1 + (rcx_1 << 3))
            
            if (rcx_2.d == r9.d && (rcx_2 u>> 0x20).d == (r9 u>> 0x20).d)
                break
            
            rbx_1 = *(r8_1 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1419ed44b
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x18, arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1419ed4ab

*arg2 = rdi

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
